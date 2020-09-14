//
//  test23.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/13.
//  Copyright © 2020 龙海威. All rights reserved.
//  动态强制类型转换
/*
 在C++的面对对象思想中，虚函数起到了很关键的作用，当一个类中拥有至少一个虚函数，那么编译器就会构建出一个虚函数表(virtual method table)来指示这些函数的地址，假如继承该类的子类定义并实现了一个同名并具有同样函数签名（function siguature）的方法重写了基类中的方法，那么虚函数表会将该函数指向新的地址。此时多态性就体现出来了：当我们将基类的指针或引用指向子类的对象的时候，调用方法时，就会顺着虚函数表找到对应子类的方法而非基类的方法。
 当然虚函数表的存在对于效率上会有一定的影响，首先构建虚函数表需要时间，根据虚函数表寻到到函数也需要时间。
 因为这个原因如果没有继承的需要，一般不必在类中定义虚函数。但是对于继承来说，虚函数就变得很重要了，这不仅仅是实现多态性的一个重要标志，同时也是dynamic_cast转换能够进行的前提条件。
 假如去掉上个例子中Stranger类析构函数前的virtual，那么语句
 　　Children* child_r =dynamic_cast<Children*> (stranger_r);
 在编译期就会直接报出错误，具体原因不是很清楚，我猜测可能是因为当类没有虚函数表的时候，dynamic_cast就不能用RTTI来确定类的具体类型，于是就直接不通过编译。
 这不仅仅是没有继承关系的类之间的情况，如果基类或者子类没有任何虚函数（如果基类有虚函数表，子类当然是自动继承了该表），当他们作为dynamic_cast的源类型进行转换时，编译也会失败。
 这种情况是有可能存在的，因为在设计的时候，我们可能不需要让子类重写任何基类的方法。但实际上，这是不合理的。导师在讲解多态性的时候，时刻强调了一点：如果要用继承，那么一定要让析构函数是虚函数；如果一个函数是虚函数，那么在子类中也要是虚函数。
 */
#include <stdio.h>
#include <iostream>

class BaseClass{
public:
    int a;
    int b;
    virtual void aaa();//虚函数体现多态
};

class SubClass : public BaseClass{
public:
    int aa;
    int dd;
};

void BaseClass::aaa(){
    std::cout<<"aaan\n";
}

int main(){
    BaseClass *bc = new SubClass();
    BaseClass *bc1 = new BaseClass();
    BaseClass bc2;
    bc2.aaa();
    SubClass *sc = dynamic_cast<SubClass *>(bc1);//使用此方法父类必须有虚函数。要体现出多态。
    if(sc==NULL){
        std::cout<<"不能转换\n";
    }
    else{
        std::cout<<"可以转换\n";
        (*sc).aaa();
        sc->aaa();
    }
    //SubClass *sc1 =(SubClass *)(bc);
    return 0;
}

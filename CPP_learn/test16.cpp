//
//  test16.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/8.
//  Copyright © 2020 龙海威. All rights reserved.
//  静态变量、函数的应用，虚方法、抽象方法
//  在函数前会有隐含的传递参数this
//  静态方法是公用的，没有this指针，故不能使用非静态的类成员。静态属性”count“一定要初始化，静态方法要用类名调用ClassNameL::static()

#include <stdio.h>
#include <iostream>

class Pet{
public:
    Pet();
    virtual ~Pet();//一个类只有在作为基类的时候将析构函数写成虚函数
    virtual void play()=0;//虚方法、抽象方法
    std::string name;
    static void Get_count();
private:
    static int count;
};

class Dog : public Pet{
public:
    Dog(std::string name);
    void play();
    ~Dog();
};

class Cat : public Pet{
public:
    Cat(std::string name);
    void play();
    ~Cat();
};

int Pet::count=0;//一定要初始化

Pet::Pet(){
    std::cout<<"诞生了一只宠物"<<std::endl;
    count++;
    Pet::Get_count();
}

Pet::~Pet(){
    std::cout<<"死了一只宠物"<<std::endl;
    count--;
    Pet::Get_count();
}

//void Pet::play(){
//    std::cout<<"pet_play"<<std::endl;
//}

Cat::Cat(std::string name){
    std::cout<<"诞生了一只猫"<<name<<std::endl;
}

Cat::~Cat(){
    std::cout<<"死了一只猫"<<name<<std::endl;
}

void Cat::play(){
    std::cout<<"cat_play"<<std::endl;
}

Dog::Dog(std::string name){
    std::cout<<"诞生了一只狗"<<name<<std::endl;
    //std::cout<<this<<std::endl;//this指针指向对象
}

Dog::~Dog(){
     std::cout<<"死了一只狗"<<name<<std::endl;
}

void Dog::play(){
    std::cout<<"dog_play"<<std::endl;
}

void Pet::Get_count(){
    std::cout<<"一共有"<<count<<"只宠物"<<std::endl;
}

int main(){
//    Dog dog("dog_1");
//    //std::cout<<&dog<<std::endl;
//    Cat cat_1("cat_1");
//    Dog dog_2("dog_2");
//    Cat cat_2("cat_2");
    //父类数据类型声明的对象并用子类的构造方法初试化，编译器为了优化，只会调用父类的方法。需要将基类写为虚方法。
    Pet *cat_3 = new Cat("cat_3");
    Pet *dog_3 = new Dog("dog_3");
    cat_3->play();
    dog_3->play();
    delete cat_3;
    cat_3=NULL;
    cat_3=new Cat("cat_4");
    delete cat_3;
    cat_3=NULL;
    delete dog_3;
    dog_3=NULL;
    return 0;
}


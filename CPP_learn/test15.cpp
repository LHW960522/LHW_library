//
//  test15.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/3.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Baseclass{
public:
    Baseclass();
    ~Baseclass();
    void doSomething();
};
class Subclass:public Baseclass{
public:
    Subclass();
    ~Subclass();
};

Baseclass::Baseclass(){
    std::cout<<"进入基类构造函数"<<std::endl;
}

Baseclass::~Baseclass(){
    std::cout<<"进入基类析构函数"<<std::endl;
}

void Baseclass::doSomething(){
    std::cout<<"进入基类dosometing函数"<<std::endl;
}

Subclass::Subclass(){
    std::cout<<"进入子类构造函数"<<std::endl;
}

Subclass::~Subclass(){
    std::cout<<"进入子类析构函数"<<std::endl;
}

int main(){
    Subclass subclass;
    subclass.doSomething();
    std::cout<<"完工"<<std::endl;
    return 0;
}

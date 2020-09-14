//
//  test13.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/2.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Car{
public:
    std::string color;
    std::string engine;
    float gas;
    unsigned int wheel;
    static const int a=50;//const 错误。
    void fill_tank(float liter);
    void set_color(std::string color);
    int running();
    Car();
};

//::作用域解析符
void Car::fill_tank(float liter){
    gas=liter;
    std::cout<<"油量"<<gas<<std::endl;
}

int Car::running(){
    std::cout<<"running"<<std::endl;
    gas--;
    std::cout<<"还剩"<<gas<<std::endl;
    return gas;
}

void Car::set_color(std::string color){
    color=color;
    std::cout<<"车的颜色"<<color<<std::endl;
}

//构造方法、构造器
Car::Car(){
    color="write";
    engine="V8";
    gas=0;
    wheel=4;
}

int main(){
    Car car;
    Car a[10];
    car.fill_tank(60);
    car.set_color("red");
    while(car.gas>10){
        car.running();
        if (car.gas==10) {
            std::cout<<"是否加油"<<std::endl;
        }else{

            return 0;
        }
    }
    
//    getline()函数
//    std::string str;
//    std::getline(std::cin, str);
//    std::cout<<str;
    
    return 0;
}

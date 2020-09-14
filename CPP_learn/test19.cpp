//
//  test19.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/12.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <climits>//提供各种数据类型的最大最小值

class Factorial{
public:
    Factorial(unsigned short num);
    unsigned long getFactorial();
    bool inRange();
private:
    unsigned short num;
};

Factorial::Factorial(unsigned short num){
    (*this).num=num;
}

unsigned long Factorial::getFactorial(){
    unsigned long sum =1;
    for (int i=1; i<=num; i++) {
        sum=sum*i;
    }
    return sum;
}

bool Factorial::inRange(){
    unsigned long max=ULONG_MAX;
    for (int i=num; i>=1; i--) {
        max/=i;
    }
    if(max<1){
        return false;
    }else{
        return true;
    }
}

int main(){
    unsigned short num=0;
    std::cout<<"输入一个整数"<<std::endl;
    std::cin>>num;
    Factorial fac(num);
    if(fac.inRange()){
        std::cout<<num<<"的阶乘值为"<<fac.getFactorial()<<std::endl;
    }
    else{
        std::cout<<num<<"的阶乘值溢出"<<std::endl;
    }
    return 0;
}

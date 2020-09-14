//
//  test24.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/15.
//  Copyright © 2020 龙海威. All rights reserved.
//  函数模板，泛型

#include <stdio.h>
#include <iostream>
#include <string>

template <class T>
//不要分开为声明与定义
//若函数对不同的数据类型有相同的处理方式，可以用函数模板
//若函数对不同的数据类型有不相同的处理方式，可以用函数重载
void swap(T &a,T &b){
    T tmp =a;
    a=b;
    b=tmp;
}

int main(){
    int i1=100;
    int i2=200;
    std::cout<<"交换前i1="<<i1<<",i2="<<i2<<"\n";
    swap(i1,i2);
    //swap<int>(i1,i2);//明确类型也可以
    std::cout<<"交换后i1="<<i1<<",i2="<<i2<<"\n";
    std::string s1="abc";
    std::string s2="def";
    std::cout<<"交换前s1="<<s1<<",s2="<<s2<<"\n";
    swap(s1,s2);
    std::cout<<"交换后s1="<<s1<<",s2="<<s2<<"\n";
    return 0;
}

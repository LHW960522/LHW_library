//
//  test20.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/12.
//  Copyright © 2020 龙海威. All rights reserved.
//  异常捕获、处理。

#include <stdio.h>
#include <cassert>
#include <iostream>
void add(int i) throw(int);

int main(){
    int i=60;
    //assert(i==65);//若iu不为65，程序出错。
    try {
        add(i);
    } catch (int e) {
        std::cout<<"抛出异常"<<e<<std::endl;
    }
    return 0;
}

void add(int i) throw(int){
    std::cout<<"123"<<std::endl;
    if (i<50) {
        throw 123;
    }
    else{
        throw 456;
    }
   
}

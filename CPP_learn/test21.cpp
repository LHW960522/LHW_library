//
//  test21.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/12.
//  Copyright © 2020 龙海威. All rights reserved.
//  动态内存管理使用new、delete申请与释放(test16)、动态数组使用

#include <stdio.h>
#include <iostream>
#include <string>

int *newInt(int value);

int main(){
//    unsigned int count=0;
//    std::cout<<"请输入数组的元素个数"<<std::endl;
//    std::cin>>count;
//    int a[count];
//    int *x=new int(count);
//    for (int i=0; i<count; i++) {
//        x[i]=i;
//        a[i]=i+1;
//        std::cout<<"x["<<i<<"]的值是"<<x[i]<<std::endl;
//        std::cout<<"a["<<i<<"]的值是"<<a[i]<<std::endl;
//    }
//    delete x;
    int *x=newInt(20);
    std::cout<<*x;
    delete x;
    x=NULL;
    return 0;
}

int *newInt(int value){
    int *myInt=new int;
    *myInt=value;//在堆
    //int x=value;//在栈
    return myInt;
}

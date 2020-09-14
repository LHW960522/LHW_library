//
//  test9.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/27.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>
//#define ITEN 6
int main(){
    const unsigned short ITEN=6;
    int a[ITEN]={0};
    std::cout<<"输入"<<ITEN<<"个数"<<std::endl;
    for (int i=0; i<ITEN; i++) {
        std::cout<<"请输入第"<<i+1<<"个数据"<<std::endl;
        while(!(std::cin>>a[i])){
            std::cin.clear();
            std::cin.ignore(100,'\n');
            std::cout<<"请输入一个合法的值";
        }
    }
    int sum=0;
    for (int j=0; j<ITEN; j++) {
        sum=sum+a[j];
    }
    std::cout<<"总和是"<<sum<<std::endl;
    std::cout<<"平均是"<<(float)sum/ITEN<<std::endl;
    return 0;
}

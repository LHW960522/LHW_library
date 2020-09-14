//
//  test7.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/26.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main(){
    //华氏温度==摄氏温度*9.0/5.0+32
    const unsigned short ADD_SUBTRACT=32;
    const double RATIO=9.0/5.0;
    double tempIn,tempOut = 0.0;
    char typeIn,typeOut;
    std::cout<<"请输入[xx.x C]或[xx.x F]"<<std::endl;
    std::cin>>tempIn>>typeIn;
    //std::cout<<std::cin.good();cin检测自身是否出问题
    std::cin.ignore(100,'\n');
    std::cout<<std::endl;
    switch (typeIn) {
        case 'C':
        case 'c':
            tempOut=tempIn*RATIO+ADD_SUBTRACT;
            typeOut='F';
            typeIn='C';
            break;
        case 'F':
        case 'f':
            tempOut=(tempIn-ADD_SUBTRACT)/RATIO;
            typeOut='C';
            typeIn='F';
            break;
        default:
            typeOut='E';
            break;
    }
    if(typeOut!='E'){
        std::cout<<tempIn<<typeIn<<"="<<tempOut<<typeOut<<std::endl;
    }else{
        std::cout<<"输入错误"<<std::endl;
    }
    
    return 0;
}

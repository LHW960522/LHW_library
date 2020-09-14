//
//  test8.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/26.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>
double clac(double a);
double clac(double a,double b);
double clac(double a,double b,double c);
int main(){
    double a[3]={0.0};
    double cla=0.0;
    int i=0;
    while(std::cin.get()!='\n'){
        i++;
        std::cin>>a[i];
    }
    switch (i) {
        case 0:
            std::cout<<"end"<<std::endl;
            break;
        case 1:
            cla=clac(a[0]);
            break;
        case 2:
            cla=clac(a[0],a[1]);
            break;
        case 3:
           cla=clac(a[0],a[1],a[2]);
            break;
        default:
            break;
    }
    std::cout<<cla<<std::endl;
    
}

double clac(double a){
    return a*a;
}

double clac(double a,double b){
    return a*b;
}

double clac(double a,double b,double c){
    return a+b+c;
}

//
//  test17.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/10.
//  Copyright © 2020 龙海威. All rights reserved.
//  运算符重载

#include <stdio.h>
#include <iostream>



class Rational{
public:
    Rational(int num,int denom);
    Rational operator+(Rational rhs);// rhs=rights hang side
    Rational operator-(Rational rhs);
    Rational operator*(Rational rhs);
    Rational operator/(Rational rhs);
    void print();
private:
    void normalize();//分数简化处理
    int numerator;//分子
    int denominator;//分母
    friend std::ostream& operator<<(std::ostream& os,Rational f);
};

Rational::Rational(int num,int denom){
    numerator=num;
    denominator=denom;
    normalize();
}

void Rational::normalize(){
    if (denominator<0) {
        numerator=-numerator;
        denominator=-denominator;
    }
    //辗转相除找最大公约数
    int a=abs(numerator);
    int b=abs(denominator);
    while (b>0) {
        int t=a%b;
        a=b;
        b=t;
    }
    numerator=numerator/a;
    denominator=denominator/a;
}

void Rational::print(){
    if (numerator%denominator==0) {
        std::cout<<numerator/denominator<<std::endl;
    }else{
        std::cout<<numerator<<"/"<<denominator<<std::endl;
    }
}

Rational Rational::operator+(Rational rhs){
    int a=numerator;
    int b=denominator;
    int c=rhs.numerator;
    int d=rhs.denominator;
    int e=a*d+c*b;
    int f=b*d;
    return Rational(e,f);
}

Rational Rational::operator-(Rational rhs){
//    int a=numerator;
//    int b=denominator;
//    int c=rhs.numerator;
//    int d=rhs.denominator;
//    int e=a*d-c*b;
//    int f=b*d;
//    return Rational(e,f);
    rhs.numerator=-rhs.numerator;
    return operator+(rhs);
}

Rational Rational::operator*(Rational rhs){
    int a=numerator;
    int b=denominator;
    int c=rhs.numerator;
    int d=rhs.denominator;
    int e=a*c;
    int f=b*d;
    return Rational(e,f);
}

Rational Rational::operator/(Rational rhs){
//    int a=numerator;
//    int b=denominator;
//    int c=rhs.numerator;
//    int d=rhs.denominator;
//    int e=a*d;
//    int f=b*c;
//    return Rational(e,f);
    int a=rhs.denominator;
    rhs.denominator=rhs.numerator;
    rhs.numerator=a;
    return operator*(rhs);
}

std::ostream& operator<<(std::ostream& os,Rational f);

int main(){
    Rational f_1(1,2);
    Rational f_2(2,4);
    f_1.print();
    f_2.print();
    Rational f_3=f_1+f_2;
    f_3.print();
    //<<操作符的重载，重载后的函数根据<<后的类进行重载
    std::cout<<f_1<<"+"<<f_2<<"="<<(f_1+f_2)<<std::endl;
    std::cout<<f_1<<"-"<<f_2<<"="<<(f_1-f_2)<<std::endl;
    std::cout<<f_1<<"*"<<f_2<<"="<<(f_1*f_2)<<std::endl;
    std::cout<<f_1<<"/"<<f_2<<"="<<(f_1/f_2)<<std::endl;
    return 0;
}

std::ostream& operator<<(std::ostream& os,Rational f){
    os<<f.numerator<<"/"<<f.denominator;
    return os;
}

//
//  test14.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/2.
//  Copyright © 2020 龙海威. All rights reserved.
//  继承、方法重写、友元
/*
 private：只能由1.该类中的函数、2.其友元函数访问。不能被任何其他访问，该类的对象也不能访问。
 protected：可以被1.该类中的函数、2.子类的函数、以及3.其友元函数访问。但不能被该类的对象访问。
 public：可以被1.该类中的函数、2.子类的函数、3.其友元函数访问，也可以由4.该类的对象访问。
 */
#include <stdio.h>
#include <iostream>
#include <string>

class Animal{
public:
    std::string mouth;
    void eat();
//  void eat(std::string str);
    void sleep();
    void drool();
};

class Pig : public Animal{
public:
    void climb();
//    void eat();
    void eat(std::string str);
protected:
    double a=3.14;
    friend class Turtle;
};

class Turtle : public Animal{
public:
    void swim();
    void eat();
    void access_a();
};

void Animal::eat(){
    std::cout<<"I'm eating"<<std::endl;
}

void Animal::sleep(){
    std::cout<<"I'm sleep"<<std::endl;
}

void Animal::drool(){
    std::cout<<"I'm drool"<<std::endl;
}

void Pig::eat(std::string str){
    std::cout<<"重载eat，说"<<str<<std::endl;
}

void Pig::climb(){
    std::cout<<"I'm climb"<<std::endl;
}

void Turtle::swim(){
    std::cout<<"I'm swim"<<std::endl;
    
}

void Turtle::access_a(){
    Pig pig;
    std::cout<<pig.a<<std::endl;
}

//void Pig::eat(){
//    Animal::eat();
//    std::cout<<"pig eating"<<std::endl;
//}

void Turtle::eat(){
    Animal::eat();
    std::cout<<"turtle eating"<<std::endl;
}

int main(){
    Turtle turtle;
    Pig pig;
    pig.Animal::eat();//继承的函数不能重载
    pig.eat("food");
    pig.sleep();
    pig.drool();
    turtle.eat();
    turtle.access_a();
    //turtle.Animal::eat("good");
    turtle.swim();
    
    return 0;
}

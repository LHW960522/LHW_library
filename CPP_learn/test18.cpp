//
//  test18.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/11.
//  Copyright © 2020 龙海威. All rights reserved.
//  多继承

#include <stdio.h>
#include <iostream>

class Person{
public:
    Person(std::string theName);
    void introduce();
protected:
    std::string name;
};

class Teacher : virtual public Person{
public:
    Teacher(std::string theName,std::string theClass);
    void teach();
    void introduce();
protected:
    std::string classes;
};

class Student : virtual public Person{
public:
    Student(std::string theName,std::string theClass);
    void attendClass();
    void introduce();
protected:
    std::string classes;
};

class TeachingStudent : public Student,public Teacher{
public:
    TeachingStudent(std::string theName,std::string classTeaching,std::string classAttending);
    void introduce();
};

Person::Person(std::string theName){
    name=theName;
}

void Person::introduce(){
    std::cout<<"大家好，我是"<<name<<std::endl;
}

Teacher::Teacher(std::string theName,std::string theClass):Person(theName){
    classes=theClass;
}

void Teacher::teach(){
    std::cout<<name<<"教"<<classes<<std::endl;
}

void Teacher::introduce(){
    std::cout<<"大家好，我是"<<name<<"，我教"<<classes<<std::endl;
}

Student::Student(std::string theName,std::string theClass):Person(theName){
    classes=theClass;
}

void Student::introduce(){
    std::cout<<"大家好，我是"<<name<<"，我在"<<classes<<"学习"<<std::endl;
}

void Student::attendClass(){
    std::cout<<name<<"加入"<<classes<<"学习"<<std::endl;
}

TeachingStudent::TeachingStudent(std::string theName,std::string classTeaching,std::string classAttending):Teacher(theName,classTeaching),Student(theName,classAttending),Person(theName){
    
}

void TeachingStudent::introduce(){
    std::cout<<"大家好，我是"<<name<<"，我教"<<Teacher::classes<<",";
    std::cout<<"同时我在"<<Student::classes<<"学习"<<std::endl;
}

int main(){
    Teacher teacher("小甲鱼","C++1");
    Student student("小垃圾","C++1");
    TeachingStudent teachingStudent("小可爱","C++1","C++2");
    teacher.introduce();
    teacher.teach();
    student.introduce();
    student.attendClass();
    teachingStudent.introduce();
    teachingStudent.teach();
    teachingStudent.attendClass();
    return 0;
}

//
//  test12.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/1.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
void init();
bool readfile();
bool writefile();
struct student{
    std::string name;
    std::string id;
    char sex;
};

int main(){
    int i;
    init();
    while (1) {
        std::cout<<std::endl;
        std::cout<<"欢迎"<<std::endl;
        std::cout<<"1.读取学生信息"<<std::endl;
        std::cout<<"2.录入学生信息"<<std::endl;
        std::cout<<"3.退出"<<std::endl;
        std::cin>>i;
        switch (i) {
            case 1:
                std::cout<<i<<std::endl;
                readfile();
                break;
            case 2:
                std::cout<<i<<std::endl;
                
                break;
            case 3:
                std::cout<<i<<std::endl;
                return 0;
                break;
            default:
                std::cout<<"重新输入"<<std::endl;
                break;
        }
    }
    return 0;
}

void init(){
    //std::ifstream in;
    std::ofstream out;
    out.open("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/student.txt",std::ios::out);
    std::string str = "哈哈 001 M";
    out<<str<<std::endl;
    str = "哈哈 002 M";
    out<<str<<std::endl;
    out.close();
}

bool readfile(){
    std::ifstream in;
    in.open("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/student.txt",std::ios::in);
    if(!in.is_open()){
        std::cout<<"文件打开失败"<<std::endl;
        return 0;
    }else{
        std::string x;
        while(in>>x){
            std::cout<<x<<" ";
            if (x=="M"||x=="F") {
                std::cout<<std::endl;
            }
        }
       return 1;
    }
}

bool writefile(){
    
    return 0;
}

//
//  test10.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/27.
//  Copyright © 2020 龙海威. All rights reserved.
//
/*
 std::string
 提取字符串
 比较字符串
 添加字符串
 搜索字符串
 */
#include <stdio.h>
#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout<<"清谁便输入一个字符串"<<std::endl;
    //std::cin>>str;//空格为一个变量结束标志。
    std::getline(std::cin,str);
    std::cout<<str<<std::endl;
    return 0;
}

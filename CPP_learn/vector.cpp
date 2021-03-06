//
//  vector.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/8/16.
//  Copyright © 2020 龙海威. All rights reserved.
//  vector、迭代器、排序
/*
 1 基本操作

 (1)头文件#include<vector>.
 (2)创建vector对象，vector<int> vec;
 (3)尾部插入数字：vec.push_back(a);
 (4)使用下标访问元素，cout<<vec[0]<<endl;记住下标是从0开始的。
 (5)使用迭代器访问元素.
 vector<int>::iterator it;
 for(it=vec.begin();it!=vec.end();it++)
     cout<<*it<<endl;
 (6)插入元素： vec.insert(vec.begin()+i,a);在第i个元素后面插入a;

 (7)删除元素： vec.erase(vec.begin()+2);删除第3个元素
 　　　　　　　 vec.erase(vec.begin()+i,vec.end()+j);删除区间[i,j-1];区间从0开始
 (8)向量大小:vec.size();
 (9)清空:vec.clear()　　　//清空之后，vec.size()为０
 */
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::vector<std::string> names;
    names.push_back("d");
    names.push_back("t");
    names.push_back("y");
    names.push_back("h");
    names.push_back("k");
    names.push_back("a");
    names.push_back("m");
    names.push_back("g");
    names.push_back("ai");
    names.push_back("f");
    names.push_back("w");
    names.push_back("e");
    names.push_back("p");
    names.push_back("u");
    names.push_back("o");
    //names.pop_back();
    //names.clear();
//    for (int i=0;i<names.size(); i++) {
//        std::cout<<names[i]<<"\n";
//    }
    //迭代器
    std::sort(names.begin(),names.end());
    std::stable_sort(names.begin(), names.end());
    std::vector<std::string>::iterator iter = names.begin();//begin()数据起始位置
    while (iter!=names.end()) {//end()数据停止位置
        std::cout<<*iter<<" ";
        iter++;
    }
    return 0;
}

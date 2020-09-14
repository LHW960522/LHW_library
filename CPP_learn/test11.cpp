//
//  test11.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/27.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>
struct Fish{
    std::string name;
    std::string id;
    char sex;
};

int main(){
    Fish fish={"123","1",'M'};
    fish.name="234";
    Fish *p=&fish;//相同数据类型
    std::cout<<(*p).name<<std::endl;//结构体用法（*p）表示取p指针中的结构体
    std::cout<<p->name<<std::endl;//p->name指针用法
    return 0;
}

//
//  test5.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/25.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream in;
    ofstream out;
    //ofstream out("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/test1.txt",ios::app|ios::in|ios::out);
    in.open("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/test.txt",ios::in);
    out.open("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/test1.txt",ios::out);
    //out.open("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/test1.txt",ios::app|ios::in|ios::out);
    //ios::app追加|ios::in可读|ios::out可写
    if(!in&&!out){
        cout<<"error"<<endl;
        return 0;
    }else{
        cout<<"sccess"<<endl;
    }
    char x;
    while (in>>x) {
        out<<x;
    }
    in.close();
    out.close();
    return 0;
}

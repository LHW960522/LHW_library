//
//  test4.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/25.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream out("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/test.txt",ios::app);//构造方法
    //out.open("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/test.txt",ios::app);
    if(!out){
        cout << "error" << endl;
        return 0;
    }else{
        cerr<<"sccess"<<endl;
    }
    for(int i=0;i<=100;i++){
        out<<i<<" ";
        if(i%10==0){
            out<<endl;
        }
    }
    out<<endl;
    out.close();
}


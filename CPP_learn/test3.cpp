//
//  test3.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/25.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include "test3.hpp"
#include <fstream>
#include <iostream>

using namespace std;

static std::ifstream extracted() {
    ifstream in;
    return in;
}

int main(){
    std::ifstream in = extracted();
    in.open("/Users/longhaiwei/Desktop/CPP_learn/CPP_learn/test.txt");
    if(!in){
        cerr << "error" <<endl;
        return 0;
    }
    char x;
    while(in>>x){
        cout<<x;
    }
    cout<<endl;
    in.close();
    return 0;
}

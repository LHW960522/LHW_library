//
//  test6.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/26.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    char answer;
    cout<<"输入y/n?"<<endl;
    cin>>answer;
    switch (answer) {
        case 'y':
            cout<<"yes"<<endl;
            break;
        case 'Y':
            cout<<"YES"<<endl;
            break;
        case 'n':
            cout<<"no"<<endl;
            break;
        case 'N':
            cout<<"NO"<<endl;
            break;
        default:
            cout<<"输入不正确"<<endl;
            break;
    }
    cin.get();
    return 0;
}

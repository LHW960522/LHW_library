//
//  test2.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/21.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <stdio.h>
#include<iostream>
//int main(){
//    int sum=0;
//    int i=0;
//    char ch;
//    while(scanf("%d",&i)==1){
//        sum=sum+i;
//        ch=getchar();
//        if(ch=='\n'){
//            break;
//        }
//        ungetc(ch, stdin);
//    }
//    printf("%d\n",sum);
//}

using namespace std;

int main(){
    int sum=0;
    cout << "输入" << endl;
    int i=0;
    while(cin>>i){
        sum=sum+i;
        while(cin.peek()==' '){
            cin.get();
        }
        if(cin.peek()=='\n'){
            break;
        }
    }
    cout<<sum<<endl;
}

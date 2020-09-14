//
//  main.cpp
//  CPP_learn
//
//  Created by 龙海威 on 2020/7/21.
//  Copyright © 2020 龙海威. All rights reserved.
//

#include <iostream>
int addarry(int arry[],int len);
int main(int argc, const char * argv[]) {
    int data[]={0,1,2,3,4,5,6,7,8,9};
    int len=sizeof(data)/sizeof(data[0]);
    printf("data:%d\n",sizeof(data));
    int sum=addarry(data,len);
    printf("%d",sum);
}

int addarry(int *arr,int len){
    int sum=0;
    printf("data:%d\n",sizeof(arr));
    for(int i=0;i<len;i++){
        sum=sum+arr[i];
    }
    return sum;
}

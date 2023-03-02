//
// Created by CoderToro on 2023/2/20.
//
#include <stdio.h>
int main(){
    int num=0,b=0;
    scanf("%d",&num);
    for(int i=num;i>0;){
        b=b*10+(i%10);
        i/=10;
    }
    if(num==b){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}
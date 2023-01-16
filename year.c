//
// Created by CoderToro on 2023/1/13.
//
#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
            printf("yes3");
    }else printf("no");
        return 0;
}

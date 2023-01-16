//
// Created by CoderToro on 2023/1/13.
//
#include <stdio.h>
int main(){
    int num,temp,count=0;
    scanf("%d",&num);
    temp=num;
    int number[10];
    for(int i=0;temp>0;i++){
        number[i]=temp%10;
        temp=temp/10;
//        printf("%d",number[i]);
        count++;
    }
    for(int i=0;i<count;i++){
        if(number[i]==number[count-i-1])
            continue;
        else{
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}

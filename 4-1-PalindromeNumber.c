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
/*
 * Description

输入一个整型数，判断是否是对称数，如果是，输出yes，否则输出no，不用考虑这个整型数过大，int类型存不下，不用考虑负值；

例如 12321是对称数，输出yes，124421是对称数，输出yes，1231不是对称数，输出no


Input
一个整型数


Output
输出是yes，或者no


Sample Input 1

12321
Sample Output 1

yes
Sample Input 2

1231
Sample Output 2

no
 */
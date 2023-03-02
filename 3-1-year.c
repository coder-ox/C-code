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
/*
 * Description

判断某个年份是不是闰年，如果是闰年，请输出“yes”，否则请输出“no”


Input
输入一行，只有一个整数x (0<=x <=10000)


Output
输出只有一行字符


Sample Input 1

2000
Sample Output 1

yes
Sample Input 2

1999
Sample Output 2

no
 */
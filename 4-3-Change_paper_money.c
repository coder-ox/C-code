//
// Created by CoderToro on 2023/2/20.
//
#include <stdio.h>
int main(){
    int total=0;
    for(int i10=1;i10<=10;i10++){
        for(int i5=1;i5<=20;i5++){
            for(int i2=1;i2<=50;i2++){
                for(int i1=1;i1<=100;i1++){
                    if((i10*10+i5*5+i2*2+i1==100)&&(i10+i5+i2+i1==40)){
                        printf("%d %d %d %d\n",i10,i5,i2,i1);
                        total++;
                    }
                }

            }
        }
    }
    printf("%d\n",total);
    return 0;
}
/*
 * Description

某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？


Input
无输入


Output
一个数，表示共有多少种换法


Sample Input 1

无
Sample Output 1

不能告知，因为只有一个数，偷偷告诉你小于100

 */
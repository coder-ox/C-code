//
// Created by CoderToro on 2023/3/2.
//Description
//
//输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，字符串的输入长度小于最初输入的整型数大小，最后输出输入的字符串即可（无需考虑输入的字符串过长，超过了内存大小）；
//
#include "stdio.h"
#include "stdlib.h"
int main(){
    int i;
    scanf("%d",&i);
    char *c;
    char d;
    c=(char*) malloc(i);
    scanf("%c",&d);//读取输入i后的字符--"回车"，即\n
    gets(c);
    puts(c);
    return 0;
}






//注意下面问题：
//
//char *p;
//
//scanf("%d",&n);
//
//p=malloc(n);
//
//scanf("%c",&c);//注意在scanf和gets中间使用scanf("%c",&c),去除换行
//
//gets(p);
//
//注意：OJ不支持fflush(stdin)清空标准输入缓冲区操作
//
//
//Input
//一个整型数和一个字符串，例如
//
//10
//
//hello
//
//
//Output
//输出输入的字符串，上面输入的是hello，那么输出hello

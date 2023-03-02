//
// Created by CoderToro on 2023/2/20.
//
#include <stdio.h>
int main(){
    int n=0,total=1;
    scanf("%d",&n);
//    printf("%d",n);
    for(int i=1;i<=n;i++){
        total=total*i;
    }
    printf("%d",total);
    return 0;
}
/*
 * Description

利用while或者for循环计算n！的值。

提示：n！＝1*2*3…*n


Input
一个正整数n，1≤n≤10。


Output
n！的值。


Sample Input 1

2
Sample Output 1

2
Sample Input 2

5
Sample Output 2

120
 */
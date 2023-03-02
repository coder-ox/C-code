//
// Created by CoderToro on 2023/2/20.
//
#include <stdio.h>
int main(){
    int i=100,total=0;
    while(i>=0){
        total=total+i;
        i--;
    }
    printf("%d",total);
    return 0;
}
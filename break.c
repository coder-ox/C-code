//
// Created by CoderToro on 2023/2/20.
//
#include <stdio.h>
int main(){
    int i=1,total=0;
    for(;i<=100;i++){
        if(total>2000){
            printf("break:i=%d",i);
            break;
        }
        total+=i;
    }
    printf("total=%d,i=%d",total,i);
    return 0;
}
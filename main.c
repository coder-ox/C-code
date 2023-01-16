#include <stdio.h>
#include <string.h>
int prefixCount(char ** words, int wordsSize, char * pref);
int main() {
    int i=0;
    int j=1;
    char ** s="gitee succeed";
//    int i=1000;
//    printf("i=%6d~haha\n",i);
//    printf("i=%5d~haha\n",i);
//    printf("Hello, World!\n");
    char ** words= {"pay","attention","practice","attend"};
    char * pref ="at";
    int num=prefixCount(words,4,pref);
    printf("%d",num);
    return 0;
}
int prefixCount(char ** words, int wordsSize, char * pref){
    int count = 0;
    int len = strlen(pref);
    for(int i=0;i<wordsSize;i++){
        for(int j=0;j<len;j++){
            if(!words[i][j]==pref[j]){
                break;
            }
        }
        count++;
    }
    return count;
}


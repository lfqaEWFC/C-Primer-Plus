#include<stdio.h>
int main(){
    char ch;
    int count = 0;
    printf("请输入一串字符：");
    while((ch = getchar()) != '\0'){
        putchar(ch);
        count++;
    }
    printf("这个字符串有%d个字符",count);
}
#include<stdio.h>

int main(){

    int count = 0;
    char ch;
    printf("请输入一串字符至‘#’停止：");
    while((ch = getchar()) != '#'){
        switch(ch){
            case('!'):
            printf("!!");count++;
            break;
            case('.'):
            printf("!");count++;
            break;
            default:
            printf("%c",ch);
            break;
        }
    }
   printf("共改变了%d次",count);
}
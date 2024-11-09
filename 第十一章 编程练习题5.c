#include<stdio.h>
#include<string.h>
char*my_strchr(char letter,char*str){

    int i = 0;
    for(i = 0;i<100;i++){
        if(str[i]==letter){
            return &str[i];
            break;
        }
        else if(i == 99 && str[i] != letter)
            return NULL;
    }
    

}

int main(){
    
    char letter;
    printf("请输入要查找的字符:\n");
    scanf("%c",&letter);
    getchar();
    printf("请输入一串小于等于100个字符的字符串:\n");
    char str[100];
    fgets(str,100,stdin);
    if(my_strchr(letter,str)!=NULL){

        printf("存在\n地址是:%p\n",my_strchr(letter,str));

    }
    else
        printf("不存在该字符……\n");

}
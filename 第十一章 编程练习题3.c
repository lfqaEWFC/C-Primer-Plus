#include<stdio.h>
#include<string.h>
void get_word(char*str){
    
    int i = 0;
    char ch;
    while((ch = getchar())<=' ')
        continue;
    printf("第一个单词是：");
    while(ch > ' '){
        
        str[i] = ch;
        putchar(str[i]);
        i++;
        ch = getchar();

    }
    printf("\n");

}

int main(){
    
    char str[100];
    printf("请输入一个字符串：");
    get_word(str);

}

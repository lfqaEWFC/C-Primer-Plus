#include<stdio.h>
#include<string.h>
void* my_gets(int n,char*str){
    
    printf("请输入需要读取的字符串：");
    fgets(str,n,stdin);

}
int main(){

    int n;
    printf("请输入需要读取的字符数：");
    scanf("%d",&n);
    getchar();
    char str[n];
    my_gets(n+1,str);
    printf("该字符串是：");
    fputs(str,stdout);
    printf("\n");

}
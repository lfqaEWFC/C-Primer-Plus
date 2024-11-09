#include<stdio.h>
#include<string.h>
char*my_strchr(char*ch,char*str){
    int i,j;
    int count = strlen(ch);
    char *p = ch;
    for(i = 0;i<100;i++){
        if(str[i]==*ch){
            for(j = i;j<100;j++){
                if(str[j]==*p){                    
                    p++;
                    if(*p=='\0'){
                        return &str[j-count];
                        break;
                    }
                    else {
                        continue;
                    }

                }
                else
                break;
            }
        }
        p = ch;
        if(i==99 && str[i]!=*p){
            return NULL;
        }
    }

}
int main(){
    
    char ch[100];

        while(1){
        printf("请输入要查找的字符串(输入回车以停止):\n");
        scanf("%s",ch);
        getchar();
        printf("请输入一串小于等于100个字符的字符串:\n");
        char str[100];
        fgets(str,100,stdin);
        if(my_strchr(ch,str)!=NULL){

            printf("存在\n地址是:%p\n",my_strchr(ch,str));

        }
        else
            printf("不存在该字符串……\n");
        }

}
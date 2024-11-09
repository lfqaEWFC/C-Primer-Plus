#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 100
void remove_space(char *str)
{
    int i,j;
    int sz =  STRLEN;
    for(i=0;i<sz;i++){
        if(str[i]==' '){
            for(j=i;j<sz-1;j++){
                str[j]=str[j+1];
            }
            sz--;
            i--;
        }
        
    }

}int main(void)
{
    char s[STRLEN];
    while(1){

        printf("请输入一串字符(输入空行以停止): \n");
        fgets(s,100,stdin);
        if(s[0]=='\n')
        break;
        remove_space(s);
        printf("移除所有空格的结果是:\n%s\n", s);
    }

    return 0;
}
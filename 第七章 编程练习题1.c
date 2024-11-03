#include<stdio.h>
#include<string.h>
int main(){

    char ch[10000];
    gets(ch);
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
   
    for(i = 0;ch[i] != '\0';i++){
        if(ch[i] == '#')
        break;
        else if(ch[i] == ' '){
            count1++;
        }
        else if(ch[i] == '\\'||ch[i] == 'n'){
            if(ch[i+1] == 'n')
                count2++;
        }
        else
        count3++;
    }

    printf("' ' = %d\n'\\n' = %d\nelse = %d\n",count1,count2,count3);

}
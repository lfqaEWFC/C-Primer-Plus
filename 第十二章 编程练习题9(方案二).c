#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 1000
void word_malloc(void){
    int a;
    char ch;
    int i = 0,j;
    int count1=0;
    printf("How many words do you wish to enter:");
    scanf("%d",&a);
    getchar();
    char*word =(char*)malloc(sizeof(char)*SIZE);
    int count = 0;
    printf("Enter your words now:\n");
    for(i=0;count<a;i++){

        word[i]=getchar();
        if(word[i]<=' '){
            count++;
        }
        
    }
    
    printf("Here are your words:\n");
    for(j = 0;count1<a;j++){
        
        printf("%c",word[j]);
        if(word[j]<=' '&&word[j]!='\n'){
            printf("\n");
            count1++;
        }
        if(count1==a){
            getchar();
        }
    }

    free(word);
    
}
int main(){
    word_malloc();
}
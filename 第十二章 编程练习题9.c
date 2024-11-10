#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 1000
void word_malloc(void){
    int a;
    char ch;
    int i = 0,j;
    printf("How many words do you wish to enter:");
    scanf("%d",&a);
    char**word =(char**)malloc(sizeof(char*)*SIZE);
    int count = 0;
    printf("Enter your words now:\n");
    for(i=0;i<a;i++){
        char*tem = (char*)malloc(sizeof(char)*1000);
        scanf("%s",tem);
        word[i]=(char*)malloc(strlen(tem)+1);
        strcpy(word[i],tem);
        
    }
    printf("Here are your words:\n");
    for(j = 0;j<a;j++){
        printf("%s",word[j]);
        printf("\n");
    }
    free(word);
    
}
int main(){
    word_malloc();
}
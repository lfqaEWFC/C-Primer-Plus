#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    int count,i;
    float a;
    count = atoi(argv[1]);
    a = atof(argv[0]);  
    int result = 1;
    if(argc ==3){

        for(i = 0;i<=count;i++){
            result = result*a;
        }
        printf("%.2f的%d次方是%d",a,count,result);
    }
    else
    printf("error\n");

}
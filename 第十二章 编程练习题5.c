#include<stdio.h>
#include<stdlib.h>
void my_rand(void){
    int a = 0,i,j,mid;
    int arr[100];
    for(i=0;i<100;i++){
        a = rand()%10+1;
        arr[i]=a;
    }
    for(i=0;i<100;i++){
        for(j = 0;j<100-i-1;j++){
            if(arr[j]<arr[j+1]){
                mid = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=mid; 
            }
        }
    }
    for(i=0;i<100;i++){
        printf("%d  ",arr[i]);
    }
}



int main(){

    my_rand();
    
}
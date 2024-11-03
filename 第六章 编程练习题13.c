#include<stdio.h>
int main(){
int arr[8];
int i = 0;
int sum = 1; 
for(i = 0;i < 9;i++){
   
    arr[i] = sum;
    sum =2 *sum;

}
int j = 0;
do{
    printf("%d ",arr[j]);
    j++;

}
while(j < 9);

}
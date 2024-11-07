#include<stdio.h>
void addprint(int *arr,int*arr1,int sz){
    int addarr[sz];
    int i ;
    for(i = 0;i<sz;i++){
        addarr[i] = arr[i] + arr1[i];
        printf("%d ",addarr[i]);
    }

}

int main(){
    int arr[4] = {2,4,5,8};
    int arr2[4] = {1,0,4,6};
    addprint(arr,arr2,4);
}
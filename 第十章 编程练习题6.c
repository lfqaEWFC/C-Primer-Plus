#include<stdio.h>
void fan(int* arr,int sz){
    int j = 0;
    int mid = 0;
    int p =sz;
    int count = 0;
    if(sz % 2 ==1){
        for(j = 0;arr[j] != arr[sz-1];j++,p--){
            mid = arr[j];
            arr[j] = arr[p-1];
            arr[p] = mid;
        }
    }
    else if(sz % 2 == 0){
        for(j = 0;arr[j+1] != arr[p-1];j++,p--){
            mid = arr[j];
            arr[j] = arr[p-1];
            arr[p-1] = mid;
        }
    }    


}

int main(){
    int j = 0;
    int arr[10] = {12,23,43,32,54,75,67,78,54,63,};
    int sz = sizeof(arr)/sizeof(arr[0]);
    fan(arr,sz);
    for(j = 0;j<sz;j++){
        printf("%d ",arr[j]);
    }
}
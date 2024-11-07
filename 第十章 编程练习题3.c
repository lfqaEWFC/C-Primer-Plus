#include<stdio.h>
int max(int *arr,int sz){
    int i;
    int j;
    int mid;
    for(i = 0;i<sz;i++){
        for(j = 0;j<sz-1-i;j++){
            if(arr[j]<arr[j+1]){
                mid = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = mid;
            }
        }
    }
    return arr[0];
}
int main(){
    
    int arr[10] = {12,23,43,32,54,75,67,78,54,63,};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int maxnum = 0;
    maxnum = max(arr,sz);
    printf("该数组的最大数字是：%d",maxnum);

}
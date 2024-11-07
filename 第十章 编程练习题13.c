#include<stdio.h>
void max(int hang,int lie,int arr[3][5]){

    int i,j,mid;
    for(i = 0;i<hang;i++){
        for(j = 0;j<lie-1;j++){
            if(arr[i][j]>arr[i][j+1]){
                mid = arr[i][j];
                arr[i][j] = arr[i][j+1];
                arr[i][j+1] = mid;
            }
        }
    }
    for(i = 0;i<hang-1;i++){
         if(arr[i][lie-1]>arr[i+1][lie-1]){
            mid = arr[i][lie-1];
            arr[i][lie-1] = arr[i+1][lie-1];
             arr[i+1][lie-1] = mid;                 
          }
    }
    printf("该数组的最大值是：%d",arr[--hang][--lie]);

}
int main(){
    int i,j;
    int arr[3][5];
    printf("请输入3组数,每组数包含5个操作数:\n");
    for(i = 0;i<3;i++){
        for(j = 0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int aveagehang[3];
    int sum =0;
    for(i = 0;i<3;i++){
        for(j = 0;j<5;j++){
            sum = sum + arr[i][j];
        }
        aveagehang[i] = sum/5;
        printf("第%d行的平均值是：%d\n",i,aveagehang[i]);
        sum = 0;
    }
    for(i = 0;i<3;i++){
        sum = sum + aveagehang[i];
    }
    
    int aveage = sum/3;
    printf("该数组的平均值是：%d\n",aveage);
    max(3,5,arr);


}
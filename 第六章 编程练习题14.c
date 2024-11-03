#include<stdio.h>
int main(){
    printf("请输入8个数字: ");
    double arr1[8];
    double arr2[8];
    int i = 0;
    double sum = 1.0;
    for(i = 0;i < 8; i++){
        scanf("%lf",&arr1[i]);
        sum = sum * arr1[i];
        arr2[i] = sum;
    }

    printf("原数组：");
    for(i = 0;i < 8; i++){
        printf("%.2lf ",arr1[i]);
    }

    printf("\n累积数组");

    for(i = 0; i< 8; i++){
        printf("%.2lf  ",arr2[i]);
    }
}
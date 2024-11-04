#include<stdio.h>
int main(){
    int a = 0;
    printf("请输入一个正整数：");
    scanf("%d",&a);
    int i = 0;
    int j = 2;
    if(a >=2){
        printf("%d ",2);
        for(i = 3; i<=a ;i++){
            for(j = 2;j < i;j++){
                if(i%j==0)
                break;
                else if(j == i-1)
                printf("%d ",i);
            }
        }
    }
    else if(a == 1){
        printf("没有素数\n");
    }
    else
    printf("错误\n");
}


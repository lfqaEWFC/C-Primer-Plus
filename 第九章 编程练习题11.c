#include<stdio.h>
int Fibonacci(int count){
    int a = 1;
    int b = 1;
    int i = 0;
    int sum = 0;
    for(i = 0;i<count-2;i++){

        sum = a +b;
        a = b;
        b = sum;

    }
    return sum;
}

int main(){

    int count = 0;
    printf("请输入要求的是第几个斐波那契数：");
    scanf("%d",&count);
    Fibonacci(count);
    int sum = Fibonacci(count);
    printf("该斐波那契数是：%d",sum);

}
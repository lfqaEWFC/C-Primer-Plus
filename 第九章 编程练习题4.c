#include<stdio.h>

double aveage(double a,double b){
    
    a = 1/a;
    b = 1/b;
    double sum = a+b;
    double aveage = sum/2;
    double result = 1/aveage;
    return result;

}
int main(){

    printf("请输入两个数：");
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("两数的加权平均数是：") ;
    printf("%.2f\n",aveage(a,b));

}

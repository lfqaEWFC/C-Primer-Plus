#include<stdio.h>
int main(){
     #define money 10
     #define add 1.5
     #define p1 0.15
     #define p2 0.20
     #define p3 0.25
     #define base 40
     #define basemoney 300
     #define addmoney 450
     double hour = 0;
     double sum = 0;
     printf("请输入工作小时数：");
    scanf("%lf",&hour);
    if(hour <= base)
    sum = money * hour;
    else
    sum = money * base + add * money * (hour-base);
    double cut = 0;
    if(sum <=basemoney)
    cut = sum * p1;
    else if(sum > basemoney&&sum <=addmoney)
    cut = basemoney * p1 + (sum -basemoney) * p2;
    else if(sum > addmoney)
    cut = basemoney *p1 + (addmoney - basemoney) * p2 + (sum - addmoney) * p3;
    double profit = 0;
    profit = sum - cut;
printf("工资总额:%.2f\n税金:%.2f\n收入:%.2f\n",sum,cut,profit);

}
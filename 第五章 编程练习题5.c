#include<stdio.h>
int main(void){
int a = 20;
int i = 0;
int money = 0;
int sum = 0;
for(i = 1;i < 21;i++ ){
printf("第%d天赚：$",i);
scanf("%d",&money);
printf("\n");
sum = sum + money;
if(i == 20){
    printf("一共赚了$%d",sum);
}
}
}
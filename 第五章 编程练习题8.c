#include<stdio.h>
int main(void){

int a = 0;
printf("请输入一个数字作为第2个操作数：");
scanf("%d",&a);
int i = 0;
int operand = 0;
int result = 0;
printf("请输入一个数字作为第1个被取余数：");
while(1){
    scanf("%d",&operand);
    result = operand % a;
    printf("%d 取余 %d 的结果是 %d",operand,a,result);
    printf("\n清输入一个数字作为下一个被取余数：");
    if(operand <= 0)
    break;

}
}
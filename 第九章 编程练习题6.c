#include<stdio.h>
void compare(double*a,double*b,double*c){
    double mid;
    if(*a>=*b){
        if(*b>=*c){;}
        else{
            if(*a<*c){
            mid = *b;
            *b = *c; 
            *c = mid;
            mid = *b;
            *b = *a;
            *a = mid;
            }
            else{
            mid = *b;
            *b = *c; 
            *c = mid;
            }

    }

        }
    else{
        if(*b <= *c){
            mid = *c;
            *c = *a;
            *a = mid;

        }
        else{
            if(*c>=*a){
                mid = *b;
                *b = *a;
                *a = mid;
                mid = *b;
                *b = *c;
                *c = mid;
            }
            else{
                mid = *b;
                *b = *a;
                *a = mid;
            }
        }
    }


}

int main(){
   
    double a,b,c;
    printf("请输入要交换的值：");
    scanf("%lf %lf %lf",&a,&b,&c);
    compare(&a,&b,&c);
    printf("交换后的值为：%.2f,%.2f,%.2f",c,b,a);

}
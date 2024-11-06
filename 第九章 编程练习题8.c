#include<stdio.h>

double pow(double a,int pownumber,double mid){
    if(a == 0){
        return 0;
    }
    else if(pownumber == 0){
        return 1;
    }
    else if(a != 0 && pownumber > 0){
        
        if(pownumber > 1){
            mid = mid * a;
            return pow(a,--pownumber,mid);
        }
        else
        return mid * a;
    }
    else if(a != 0 && pownumber < 0){
        
        if(pownumber < -1){
            mid = mid * a;
            return pow(a,++pownumber,mid);
        }
        else
        return 1/(mid * a);

    }


}
int main(){
    double a;
    int test;
    int pownumber;
    double mid = 1;
    printf("请输入操作数和指数：");
    scanf("%lf %d",&a,&pownumber);
    double result = pow(a,pownumber,mid);
    printf("%.2f的%d次幂是%.3f",a,pownumber,result);

}
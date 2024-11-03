#include<stdio.h>

int main(){
 
    float i = 0;
    float Dep = 100;
    float Dei = 100;
    float profit1 = 0;
    float profit2 = Dep * 0.1;
    int count = 0;
    for(i = 0;Dep >= Dei;){
        
        profit1 = Dei * 0.05;
        Dei = Dei + profit1;
        Dep = Dep + profit2;
        count++;

    }
    printf("%d",count);

}
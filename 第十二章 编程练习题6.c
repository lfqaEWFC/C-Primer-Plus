#include<stdio.h>
int* count_rand(int*arr){

    int i,count=0;
    
    for(i=0;i<1000;i++){
        arr[i]=rand()%10+1;
        count++;
        if(count%10==0){
            srand();
        }

    }
    return arr;

}

int main(){

    int arr[1000];
    count_rand(arr);
    int i;
    int count1=0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5=0;
    int count6=0;
    int count7=0;
    int count8=0;
    int count9=0;
    int count10=0;
    for(i=0;i<1000;i++){
        switch(arr[i]){
            case 1:
            count1++;
            break;
            case 2:
            count2++;
            break;
            case 3:
            count3++;
            break;
            case 4:
            count4++;
            break;
            case 5:
            count5++;
            break;
            case 6:
            count6++;
            break;
            case 7:
            count7++;
            break;
            case 8:
            count8++;
            break;
            case 9:
            count9++;
            break;
            case 10:
            count10++;
            break;

        }
    }
    printf("10个数字出现的次数分别是:%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t",count1,count2,count3,count4,count5,count6,count7,count8,count9,count10);
}
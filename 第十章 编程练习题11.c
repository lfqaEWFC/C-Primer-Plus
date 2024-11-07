#include<stdio.h>
void print(int hang, int lie,int (*arr)[lie]){
    int i,j;
    for(i = 0;i<hang;i++){
        for(j = 0;j<lie;j++){
            printf("%-3d ",arr[i][j]);
        }
        printf("\n");
    }
}
mydouble(int hang,int lie,int (*arr)[lie]){

    int i,j;
    for(i = 0;i<hang;i++){
        for(j = 0;j<lie;j++){
            arr[i][j] = 2*arr[i][j];
        }
    }

}



int main(){
    int arr[3][5];
    int i,j;
    int count = 1;
    for(i = 0;i<3;i++){
        for(j = 0;j<5;j++){
            arr[i][j] = count;
            count++;
        }
    }
print(3,5,arr);
mydouble(3,5,arr);
printf("\n");
print(3,5,arr);
}
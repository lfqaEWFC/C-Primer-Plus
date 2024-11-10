#include <stdio.h>
#include <stdlib.h>
int* make_array(int size,int value){
    int* arr = (int*)malloc(sizeof(int)*size);
    int i;
    for(i=0;i<size;i++){
        arr[i]=value;
    }
    return arr;
}
void show_array(int*arr,int size){
    int count =0;
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
        count++;
        if(count%8==0){
            printf("\n");
        }
    }
    printf("\n");
}


int main(void)
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa=(int*)malloc(size*sizeof(int));
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }
    printf("Done.\n");

    return 0;
}
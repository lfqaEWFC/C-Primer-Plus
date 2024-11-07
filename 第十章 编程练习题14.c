#include <stdio.h>
#include <stdlib.h>
#define COLS 5
void store_arr(double arr[][COLS]);
double line_avg(double *arr, int n);
void average_arr(double arr[][COLS], int rows, int cols);
void max_arr(double arr[][COLS], int rows, int cols);
void show_arr(double arr[][COLS], int rows, int cols);
int main(void)
{
    int n = 3;
    int m = 5;
    double a[n][COLS];

    store_arr(a);
    show_arr(a, n, m);
    for (int i = 0; i < n; i++)
        printf("第 %d 行的平均值是 %.2lf.\n", i, line_avg(a[i], m));
    average_arr(a, n, m);
    max_arr(a, n, m);

    system("pause");
    return 0;
}
void store_arr(double arr[][COLS])
{
    printf("请输入3组数,每组数包含5个操作数:\n");
    printf("第一行: ");
    for (int i = 0; i < COLS; i++)
        scanf("%lf", &arr[0][i]);
    printf("第二行: ");
    for (int i = 0; i < COLS; i++)
        scanf("%lf", &arr[1][i]);
    printf("第三行: ");
    for (int i = 0; i < COLS; i++)
        scanf("%lf", &arr[2][i]);
}
double line_avg(double *arr, int n)
{
    double avg = 0;
    for (int i = 0; i < n; i++)
        avg += arr[i];
    avg /= n;
    return avg;
}
void average_arr(double arr[][COLS], int rows, int cols)
{
    double avg = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            avg += arr[i][j];
    avg /= (rows * cols);
    printf("这个数组的平均数是 %.2lf.\n", avg);
}
void max_arr(double arr[][COLS], int rows, int cols)
{
    double max = **arr;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] > max)
                max = arr[i][j];
    printf("这个数组的最大值是 %.2lf.\n", max);
}
void show_arr(double arr[][COLS], int rows, int cols)
{
    printf("你输入的数组如下\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-5.2lf ", arr[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}

#include <stdio.h>
void to_base_n(unsigned long n, unsigned int x);
int main(void)
{

    unsigned long number;
    unsigned int base;
    char prompt[] = "Enter an integer and a base(2~10):\n(Enter q to quit) ";

    printf("%s", prompt);
    while (scanf("%lu %u", &number, &base) == 2)
    {
        printf("Equivalent: ");
        to_base_n(number, base);
        printf("\n");
        printf("%s", prompt);
    }
    printf("\n");

    return 0;
}
void to_base_n(unsigned long n, unsigned int x)
{

    int r;
    if (x < 2 || x > 10)
    {
        printf("Base Error! Please try again.\n");
        return;
    }
    r = n % x;
    if (n >= x)
        to_base_n(n / x, x);//此处的条件语句保证了能够将序列颠倒顺序打印
    printf("%d", r);


}

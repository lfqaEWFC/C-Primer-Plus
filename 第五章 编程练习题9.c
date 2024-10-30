#include <stdio.h>
void Temperatures(double ftem) {
    const float ctem = 5.0 / 9.0 * (ftem - 32.0);
    const float ktem = ctem + 273.16; 
    printf("%.2f 华氏度\n%.2f 摄氏度\n%.2f 开氏度\n", ftem, ctem, ktem);
}

int main() {

    double ftem = 0;
    while (1) { 
        printf("请输入华氏度：");
        if (scanf("%lf", &ftem) != 1) {
            break; 
        }
        Temperatures(ftem);
    }
    return 0;
    
}

#include <stdio.h>

int main() {
    char letter;
    printf("Enter a letter (A-Z): ");
    scanf(" %c", &letter);  
    int count = letter - 'A';
    
   
    for (int i = 0; i <= count; i++) {
        
        for (int j = count; j > i; j--) {
            printf(" ");
        }

        
        for (int k = 0; k <= i; k++) {
            printf("%c", 'A' + k);
        }

        
        for (int m = i - 1; m >= 0; m--) {
            printf("%c", 'A' + m);
        }
        
        printf("\n");
    }

    return 0;
}


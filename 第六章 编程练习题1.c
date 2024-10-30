#include<stdio.h>
int main(){
char arr[26];
int i = 0;
char letter = 'a';
for(i = 0;i < 26; i++){

arr[i] = letter;
letter ++;

}
for (i = 0;i < 26;i++){
    printf("%c ",arr[i]);
}

}
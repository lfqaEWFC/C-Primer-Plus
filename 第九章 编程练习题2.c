#include <stdio.h>
void chline(char ch,int i,int j){

    int m,n;
    for(m = 0;m<j;m++){
        for(n = 0;n<i;n++){
            printf("%c ",ch);    
        }
        printf("\n");
    }


}
int main(void)
{
    char ch;
    printf("请分别输入要打印的字符及打印几行几列：");
    scanf("%c",&ch);
    int i,j;
    scanf("%d %d",&i,&j);
    chline(ch,i,j);

}
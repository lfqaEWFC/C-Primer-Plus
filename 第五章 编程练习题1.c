#include<stdio.h> 
#define onehour 60
int main()
{
int scminute = 0;;
int minute = 0;
for(scminute = 1;scminute > 0;){
   scanf("%d",&scminute);
   if(scminute <= 0)
   break;
   int hour = scminute / onehour;
   minute = scminute % onehour;
   printf("%d hour %d minute\n",hour,minute);

}
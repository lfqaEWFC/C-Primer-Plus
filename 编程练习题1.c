#include<stdio.h> 
int main()
{
int scminute = 0;
int minute = 0;
for(scminute = 1;scminute > 0;){
   scanf("%d",&scminute);
   if(scminute <= 0)
   break;
   int hour = scminute / 60;
   minute = scminute % 60;
   printf("%d hour %d minute\n",hour,minute);

}

}

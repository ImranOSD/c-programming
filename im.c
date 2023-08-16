#include<stdio.h>
int main()
{
int i,N,Sum=0;
printf("\nENter last number of the series:");
scanf("%d",&N);
printf("1+3+5+...+%d=",N);
for(i=1;i<=N;i=i+2)
//Condition
{
Sum = Sum +i;
}

printf("%d",Sum);
return 0;




}

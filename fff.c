#include <stdio.h>
int main(){
int i=1,N,sum=1;
printf("\nEnter last number of the series:");
scanf("%%d",&N);
printf("1*2*3...+%d=",N);
do
{
sum=sum*i;
i++;

}
while(i<=N);
printf("%d",sum);


return 0;






}

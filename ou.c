#include <stdio.h>
int main(){
int Age;
printf("Please inter your age:");
scanf("%d", &Age);
if(Age>0&&Age<=12)
    printf("\nYou are a child.");
if (Age>12&&Age<=19)
    printf("\n You arre a teen ager.");
return 0;

}

#include <stdio.h>
int main(){
int i, sum = 0;
for(i = 3; i <= 120; i++){
    if(i % 3 == 0 && i % 5 == 0){
        sum = sum + i;
    }


}
printf("Summation: %d\n", sum);













return 0;


}

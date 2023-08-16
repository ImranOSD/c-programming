#include <stdio.h>
int main(){
int i, j;

for(i = 1; i <= 2; i++){
printf("output loop start\n");
for(j = 1; j <= 3; j++);
printf("******************* inner loop\n");

}
printf("output loop end\n");

return 0;



}

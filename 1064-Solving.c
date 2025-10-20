#include <stdio.h>
#include <stdlib.h>

int main(){
    double avg=0.0, addition=0.0;
    float num;
    int count=0;
    for (int i =0; i < 6 ; i++){
        scanf("%f",&num);
    if (num > 0){
        count ++;
        addition += num;
    }        
}
if (count > 0){
 avg = addition / count;
}
printf("%d valores positivos\n",count);
printf("%.1lf", avg);
return 0;
}
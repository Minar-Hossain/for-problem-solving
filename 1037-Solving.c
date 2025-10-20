#include<stdio.h>
#include<math.h>

int main() {
        double f;
        scanf("%lf", &f);
     if (f >= 0 && f <= 25.0000){
       printf("Intervalo [0,25]\n");
    } else if (f > 25.0000 && f <= 50.0000){
       printf("Intervalo [25,50]\n");
    } else if (f > 50.0000  && f <= 75.0000) {
       printf("Intervalo [50,75]\n");
    } else if(f > 75.0000 && f <= 100.0000 ){
       printf("Intervalo [75,100]\n");
    } else {
       printf("Fora de intervalo\n");
    }
return 0;
}
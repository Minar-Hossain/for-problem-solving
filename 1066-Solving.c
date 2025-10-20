#include <stdio.h>
#include <stdlib.h>

int main (){
    int num,EvenCount=0,odd=0,positive=0,negative=0;

    for (int i =0; i<5;i++){
        scanf("%d",&num);
        if (num % 2 == 0){
            EvenCount++;
        }else {
            odd++;
        }
        if(num >0){
            positive++;
        }else if (num<0.0) {
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n",EvenCount);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);

return 0;
}
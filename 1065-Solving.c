#include <stdio.h>
#include <stdlib.h>

int main (){
    int num,EvenCount=0;

    for (int i =0; i<5;i++){
        scanf("%d",&num);
        if (num % 2 == 0){
            EvenCount++;
        }
    }
    printf("%d valores pares\n",EvenCount);
return 0;
}
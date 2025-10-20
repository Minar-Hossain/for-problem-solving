#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
 scanf("%d",&num);
 int add = num + 11;
 if (num > 0){
    for (int i = num; i <= add; i++){
        if ( i % 2 != 0){
            printf("%d\n",i);
        }
    }
 }
 
return 0;
}
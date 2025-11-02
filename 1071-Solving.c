#include <stdio.h>
#include <stdlib.h>

int main (){
    int x,y,odd=0;
 scanf("%d",&x);
 scanf("%d",&y);

    if ( x > y){
       for (int i = y ; i <= x; i++ ){
        if ( i % 2 != 0){
            odd += i;
        }
        printf("%d\n",odd);
          
       }    
        printf("%d",odd);
    }

 
return 0;
}
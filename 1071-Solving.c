#include <stdio.h>
#include <stdlib.h>

int main (){
    int x,y,odd=0;
 scanf("%d\n",&x );
 scanf("%d",&y);
    if ( x >= y){

       for (int i = y ; i >= x; i++ ){
        if ( i % 2 != 0){
            printf("%d\n",i);
        }
           printf("%d",odd += i);
       }    
    }

 
return 0;
}
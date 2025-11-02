#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int x;
    int a,b,c,count=0;
    scanf("%d",&x);

    for ( int i =1; i<=x; i++){
    scanf("%d%d%d",&a,&b,&c);
      if ( a == 1 && b == 1 && c == 1) count += 1;
      else if (a == 1 && b == 1) count += 1;
      else if ( a== 1 && c == 1 ) count += 1;
      else if ( b == 1 && c == 1) count += 1;
   
    }
      printf("%d\n", count);
}
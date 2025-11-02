#include<stdio.h>
#include<math.h>

int main(){
    int n,in=0,out=0,num;
    scanf("%d",&n);
    for (int i = 0; i < n ; i++)
    {
      scanf("%d",&num);
        if ( num >9 && num<21)
        {
           in++;
        } else {
            out++;
        }
        
    }
    printf("%d in\n",in);
    printf("%d out\n",out);

}
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
   
   double a,b,c;
   scanf("%lf %lf %lf", &a , &b , &c);
   
double temp = (b*b) - (4*a*c);
if ( temp < 0 || a ==0) {
       printf("Impossivel calcular\n");
   }
   
else{
double r1 = (-b + sqrt( temp)) / (2*a);
double r2 = (-b - sqrt( temp)) / (2*a);
   printf("R1 = %0.5lf\n", r1);
   printf("R2 = %0.5lf\n", r2);
       
   }
   
   
    return 0;
}
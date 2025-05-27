// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
// This program checks if the given values A, B, C, and D meet certain conditions
int main() {
int A , B , C,D;
scanf("%d %d %d %d", &A ,&B ,&C ,&D );

if ( B > C && D > A && (C+D > A+B) && C>0 && D > 0 && A % 2 ==0 ){
    printf("Valores aceitos\n");
}
else {
    printf("Valores nao acertos\n");
}
    return 0;
}
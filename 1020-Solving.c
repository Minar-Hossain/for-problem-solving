#include <stdio.h>

int main() {
  int Age;
  scanf("%d",&Age);
  printf("%d ano(s)\n", Age/365  );
  Age %= 365;
   printf("%d mes(es)\n", Age / 30 );
   Age %= 30;
    printf("%d dia(s)\n", Age );
    return 0;
}
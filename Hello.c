# include<stdio.h>
# include<math.h>
int main(){
  int Time, speed,distance;
  scanf("%d %d", &Time, &speed);
  distance = Time * speed;
     printf("%.3f\n", (distance/12.0));



    return 0;
}
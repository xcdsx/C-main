#include<stdio.h>
void main()
{
  long minutesEntered=0;
  int days=0;
  printf("please enter the number of minutes:\n");
  scanf("%ld",&minutesEntered);
  days=(minutesEntered/60)/24;
  printf("%ld minutes is approximately%d days",minutesEntered,days);

}

#include<stdio.h>
int main ( ) {
int start, end, i;
printf("Enter range: ");
scanf("%d%d", &start, &end);
for(i=start; i<=end; i++)
  {
      if(i%3==0 || i%5==0)
      printf("%d ", i);
  }
return 0;
}

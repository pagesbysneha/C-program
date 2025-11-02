#include<stdio.h>
int main()
{
int start, end, i, sum=0;
printf("Enter range: ");
scanf("%d%d", &start, &end);
for(i=start; i<=end; i++)
{
    if(i%2==0)
    sum += i;
}
printf("Sum of even numbers = %d", sum);
return 0;
}

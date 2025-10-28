#include <stdio.h>
int main(){
int n,i;
printf("Enter the value:");
scanf ("%d",&n);
i=1;
printf("The first %d natural number are: \n",n);
while (i<=n)
{
    printf("%d",i);
    i++;
}
printf ("\n");
return 0;
}

#include<stdio.h>
int main(){
int i, range ;
printf("enter range :");
scanf("%d", &range);
for ( i = 0 ; i<=range ; i ++){

    if (i%2 != 0) {
    printf("%d\n", i );

    }

}
return 0;
}

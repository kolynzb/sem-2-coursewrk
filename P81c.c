// stars
#include<stdio.h>

int main(){
    
int i, j, n;
n=4;
for(i = 1; i <= n; i++){
for(j = 1; j <= i; j++){
printf("* ");
}
printf("\n");
}
for(i = n; i >= 1; i--)
{
for(j = 1; j <= i; j++)
{
printf("* ");
}
printf("\n");
}
}
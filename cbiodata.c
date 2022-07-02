#include<stdio.h>

int main(){
    char regNo, Course;
    int age,num;
    
printf(" Enter Your Registration Number: ");
scanf("%s", regNo);
printf(" Enter Your Course: ");
scanf("%s", Course);
printf(" Enter Your Age: ");
scanf("%d", age);
printf("Registration Number: %s \n Course: %s \n Age: %d \n");
printf(" Enter 1 to continue or any other integer to stop: ");
scanf("%d", num);

return 0;
}
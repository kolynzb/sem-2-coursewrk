#include <stdio.h>


int main() {
   int sequence[] = {};
   int sum = 0;
   printf("start\n");
  for(int i = 0; i <= 10 ; i++){
      int pow = i * i * i;
      sequence[i]= pow;
      sum += pow;
      printf("item: %d \n",pow);
  }
   printf("Sum of Sequence: %d \n",sum);
   printf("end\n");
   return 0;
}
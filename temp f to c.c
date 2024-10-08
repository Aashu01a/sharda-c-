#include<stdio.h>
int main(){
   float f, c;
   printf("Enter Fahrenheit: ");
   scanf("%2f",&f);
   c = (f - 32)*5/9;
   printf("Celsius: %2f ", c);
   return 0;
}
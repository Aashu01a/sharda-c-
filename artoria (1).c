#include <stdio.h>

int main() {
int n;
int count = 0;
double sum = 0.0;
printf("Enter any two numbers to calculate their average (enter -1 to stop):\n");


while (1) 
{
scanf("%d", &n);
if(n == -1)
{
break;
}
sum += n;
count ++;
}
if(count == 0) {
printf("Aayush, please enter the numbers.\n");
}
else{
        double average = sum / count;  
        printf("average: %.2f\n",average);
     }
return 0; 
}


        
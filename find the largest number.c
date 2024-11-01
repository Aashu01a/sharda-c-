#include <stdio.h>

int main() {
    int arr[10];  // Array to store 10 numbers
    int i;
    int max;

printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

max = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest number is: %d\n", max);

    return 0;
}

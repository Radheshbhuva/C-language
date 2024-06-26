#include <stdio.h>
#define pf printf
#define sf scanf


int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void main() {
    int array[] = {6, 4, 1, 5, 2};
    int size = sizeof(array) / sizeof(array[0]);

    
    int totalSum = sumOfArray(array, size);

    printf("Sum of array elements: %d\n", totalSum);

}
#include <stdio.h>

void selection_sort(int numbers[], int starting_index, int array_size);

int main(void) {
    // Collect the integers to be sorted
    int n = 10;
    int integers[n];
    printf("Enter a series of %d integers to be sorted: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &integers[i]);
    }
    
    // Sort the array
    selection_sort(integers, 0, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", integers[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int numbers[], int starting_index, int array_size) {
    // Return if the array contains 1 element
    if (starting_index == array_size - 1) {
        return;
    }

    // Find the smallest element
    int smallest = starting_index;
    for (int i = starting_index; i < array_size; i++) {
        if (numbers[smallest] > numbers[i]) {
            smallest = i;
        }
    }

    // Swap the smallest element to the current array's first element
    int temp = numbers[starting_index];
    numbers[starting_index] = numbers[smallest];
    numbers[smallest] = temp;

    // Sort the smaller array
    selection_sort(numbers, starting_index + 1, array_size);

    return;
}
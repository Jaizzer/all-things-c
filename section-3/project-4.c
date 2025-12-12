#include <stdio.h>

int main(void) {
    // Initialize the variables
    int phone_number_part1;
    int phone_number_part2;
    int phone_number_part3;

    // Prompt the user for the inputs
    printf("Enter phone number [(xxx) xxxx-xxxx]: ");
    scanf("(%d)%d-%d", &phone_number_part1,&phone_number_part2, &phone_number_part3);
    
    // Print the reformatted numbers
    printf("You entered %d.%d.%d\n", phone_number_part1, phone_number_part2, phone_number_part3);
    
    return 0;
}
#include <stdio.h>

int main(void) {
    int number;
    char string[30];

    printf("Enter input: ");
    scanf("%d", &number);

    scanf("%s", string);

    printf("Number: %d\nString: %s\n", number, string);
    
    return 0;
}
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int integer;
    printf("Enter an integer: ");
    scanf("%d", &integer);

    bool is_prime = true;
    int i;
    for (i = integer - 1; i > 2; i--) {
        if (integer % i == 0) {
            is_prime = false;
            break;
        }
    }
    printf("%d is %s.\n", integer, is_prime ? "prime" : "not a prime");

    return 0;
}
#include <stdbool.h>
#include <stdio.h>
bool is_prime(int x);

int main(void) {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (is_prime(x)) {
        printf("%d is prime.\n", x);
    } else {
        printf("%d is not prime.\n", x);
    }

    return 0;
}

bool is_prime(int x) {
    int divisor_counter = 0;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            divisor_counter++;
            break;
        }
    }

    return divisor_counter == 0;
}
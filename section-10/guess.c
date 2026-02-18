#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number(void);

int main(void) {
    int number = generate_random_number();
    return 0;
}
int generate_random_number(void) {
    // Seed the random function
    srand(time(NULL));
    return ((rand() % 100) + 1);
}

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
int main(void) { return 0; }

int roll_dice(void) {
    // Seed the random function
    srand(time(NULL));
    return (rand() % 6) + 1;
}
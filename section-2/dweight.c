#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
    float length, width, height;
    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the width: ");
    scanf("%f", &width);

    printf("Enter the height: ");
    scanf("%f", &height);


    float volume = height * width * length;

    float weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %.2f x %.2f x%.2f\n", length, width, height);
    printf("Volume: %.2f\n", volume);
    printf("Dimension Weight: %.2f\n", weight);

    return 0;
}
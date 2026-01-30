#include <ctype.h>
#include <stdio.h>

int main(void) {
    char current_reading;
    printf("Enter phone number: ");
    scanf("%c", &current_reading);

    char phone_number[14];
    int i = 0;
    do {
        if ((current_reading >= 'A' && current_reading <= 'Z') ||
            (current_reading >= 'a' && current_reading <= 'z')) {
            current_reading = toupper(current_reading);
            if (current_reading >= 'A' && current_reading <= 'C') {
                phone_number[i] = '2';
            } else if (current_reading >= 'D' && current_reading <= 'F') {
                phone_number[i] = '3';
            } else if (current_reading >= 'G' && current_reading <= 'I') {
                phone_number[i] = '4';
            } else if (current_reading >= 'J' && current_reading <= 'L') {
                phone_number[i] = '5';
            } else if (current_reading >= 'M' && current_reading <= 'O') {
                phone_number[i] = '6';
            } else if (current_reading >= 'P' && current_reading <= 'S') {
                phone_number[i] = '7';
            } else if (current_reading >= 'T' && current_reading <= 'V') {
                phone_number[i] = '8';
            } else if (current_reading >= 'W' && current_reading <= 'Y') {
                phone_number[i] = '9';
            }
        } else {
            phone_number[i] = current_reading;
        }
        current_reading = getchar();
        i++;
    } while (current_reading != '\n');

    for (int i = 0; i < 14; i++) {
        printf("%c", phone_number[i]);
    }
    printf("\n");

    return 0;
}
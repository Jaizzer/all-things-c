#include <stdio.h>

int main(void) {
    // Ask the user for the message
    char message[100] = {0};
    char current_character;
    printf("Enter message to be encrypted: ");
    for (int i = 0; i < 100; i++) {
        scanf("%c", &current_character);
        if (current_character == '\n') {
            break;
        } else {
            message[i] = current_character;
        }
    }

    // Ask the user for the shift amount
    int shift_amount = 0;
    printf("Enter Shift amount: (1-25): ");
    scanf("%d", &shift_amount);

    // Encrypt the message.
    for (int i = 0; i < 100; i++) {
        if (message[i] == '\0') {
            printf("\n");
            break;
        } else {
            if (message[i] >= 'A' && message[i] <= 'Z') {
                int numerical = ((message[i] + shift_amount) / 'Z') * ('A' - 1);
                current_character = ((message[i] + shift_amount) % ('Z' + 1)) +
                                    ((message[i] + shift_amount) / ('Z' + 1)) * ('A');
            } else if (message[i] >= 'a' && message[i] <= 'z') {
                current_character = ((message[i] + shift_amount) % ('z' + 1)) +
                                    ((message[i] + shift_amount) / ('z' + 1)) * ('a');
            } else {
                current_character = message[i];
            }
            printf("%c", current_character);
        }
    }

    return 0;
}
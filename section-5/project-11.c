#include <stdio.h>

int main(void) {
    // Prompt the user for a two-digit number
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Split the number's digit
    int tens = number / 10;
    int ones = number % 10;

    // Print error message if the user entered a non-two-digit number;
    if (tens <= 0 || tens >= 10) {
        printf("You must enter a two-digit number greater than or equal to ten and less than or "
               "equal to 99.\n");
        return 0;
    }

    char *number_in_word_format;
    char *tens_in_word_format;
    char *ones_in_word_format;

    if (ones == 1) {
        ones_in_word_format = "one";
    } else if (ones == 2) {
        ones_in_word_format = "two";
    } else if (ones == 3) {
        ones_in_word_format = "three";
    } else if (ones == 4) {
        ones_in_word_format = "four";
    } else if (ones == 6) {
        ones_in_word_format = "six";
    } else if (ones == 7) {
        ones_in_word_format = "seven";
    } else if (ones == 8) {
        ones_in_word_format = "eight";
    } else if (ones == 9) {
        ones_in_word_format = "nine";
    }

    if (tens == 2) {
        tens_in_word_format = "twen";
    } else if (tens == 3) {
        tens_in_word_format = "thir";
    } else if (tens == 4) {
        tens_in_word_format = "for";
    } else if (tens == 5) {
        tens_in_word_format = "fif";
    } else if (tens == 6) {
        tens_in_word_format = "six";
    } else if (tens == 7) {
        tens_in_word_format = "seven";
    } else if (tens == 8) {
        tens_in_word_format = "eigh";
    } else if (tens == 9) {
        tens_in_word_format = "nine";
    }

    if (tens == 1) {
        if (ones == 0) {
            number_in_word_format = "ten";
        } else if (ones == 1) {
            number_in_word_format = "eleven";
        } else if (ones == 2) {
            number_in_word_format = "twelve";
        } else if (ones == 3) {
            number_in_word_format = "thirteen";
        } else if (ones == 5) {
            number_in_word_format = "fifteen";
        } else if (ones == 8) {
            number_in_word_format = "eighteen";
        } else if (ones == 4 || ones == 6 || ones == 7 || ones == 9) {
            asprintf(&number_in_word_format, "%steen", ones_in_word_format);
        }
    } else {
        if (ones == 0) {
            asprintf(&number_in_word_format, "%sty", tens_in_word_format);
        } else {
            asprintf(&number_in_word_format, "%sty-%s", tens_in_word_format, ones_in_word_format);
        }
    }

    printf("You entered the number %s.\n", number_in_word_format);

    return 0;
}
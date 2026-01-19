#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Keep asking the user until the input is between 1 and 52.
    int number_of_cards;
    do {
        printf("Enter number of cards in hand: ");
        scanf("%d", &number_of_cards);

        if (number_of_cards > 52 || number_of_cards <= 0) {
            printf("Range must be between 1 and 52.\n");
        }

    } while (number_of_cards > 52 || number_of_cards <= 0);

    // Initialize the cards
    char ranks[13] = {'2', '3', '4', '5', '6', '7', '8', '9', '1', 'k', 'q', 'j', 'a'};
    char suits[4] = {'s', 'h', 'd', 'c'};

    // Initialize the card select status tracker
    bool selected_cards[4][13] = {false};

    // Print the hand
    printf("Your hand: ");

    srand(time(NULL));
    for (int i = 0; i < number_of_cards; i++) {
        // Randomly pick unselected cards
        int suit_index;
        int rank_index;
        do {
            suit_index = rand() % 4;
            rank_index = rand() % 13;
        } while (selected_cards[suit_index][rank_index]);

        // Mark the card as selected
        selected_cards[suit_index][rank_index] = true;

        // Print the card
        printf("%c%s%c ", ranks[rank_index], ranks[rank_index] == '1' ? "0" : "", suits[suit_index]);
    }
    printf("\n");

    return 0;
}
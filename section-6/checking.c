#include <stdio.h>

int main(void) {
    printf("*** ACME checkbook-balancing program ***\nCommands: 0=clear, 1=credit, 2=debit, "
           "3=balance, 4=exit\n");

    float balance = 0;
    float debit = 0;
    float credit = 0;

    int command;
    for (;;) {
        printf("Enter command: ");
        scanf("%d", &command);

        switch (command) {
        case 1:
            printf("Enter amount of credit: ");
            scanf("%f", &credit);
            balance += credit;

            break;
        case 2:
            printf("Enter amount of debit: ");
            scanf("%f", &debit);
            balance -= debit;
            break;

        case 3:
            printf("Current Balance: $%0.2f\n", balance);
            break;

        case 4:
            goto done;

        default:
            printf(
                "*** ACME checkbook-balancing program ***\nCommands: 0=clear, 1=credit, 2=debit, "
                "3=balance, 4=exit\n");

            break;
        }
    }

done: { printf("You have exited the program.\n"); }
    return 0;
}
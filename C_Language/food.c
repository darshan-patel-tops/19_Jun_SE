#include <stdio.h>

void displayMenu() {
    printf("Food Menu\n");
    printf("1. Burger - $5.99\n");
    printf("2. Pizza - $8.99\n");
    printf("3. Fries - $2.99\n");
}

int main() {
    int choice;
    float totalBill = 0.0;
    char moreItems;

    printf("Welcome to the Food Billing System!\n");

    displayMenu();

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                totalBill += 5.99;
                break;
            case 2:
                totalBill += 8.99;
                break;
            case 3:
                totalBill += 2.99;
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                continue;
        }

        printf("Do you want to select more items? (y/n): ");
        scanf(" %c", &moreItems);

        if (moreItems != 'y' && moreItems != 'Y') {
            break;
        }

        displayMenu();
    } while (1);

    printf("Total Bill: $%.2f\n", totalBill);

    return 0;
}

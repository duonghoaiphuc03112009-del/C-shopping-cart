#include <stdio.h>
#include <stdbool.h>
int main(){
    // SHOPPING CART PROGRAM
    char item[30] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?\n");
    fgets(item, sizeof(item), stdin);
    printf("What is the price for each?\n");
    scanf(" %f", &price);
    printf("How many would you like?\n");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("\nYou have bought %d %s", quantity, item);
    printf("The total is: %c%.2f", currency, total);

    return 0;

}

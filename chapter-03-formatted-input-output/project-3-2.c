// Write a programme that formats product information entered by the user.
#include <stdio.h>

int main(void) {
    int item_number, date_day, date_month, date_year;
    float unit_price;

    // User input.
    printf("Enter item number:");
    scanf("%d", &item_number);
    
    printf("Enter unit price:");
    scanf("%f", &unit_price);

    printf("Enter a date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &date_day, &date_month, &date_year);

    // Print formatted output -- left justify the item number and date, right justify the unit price, and allow amounts up to £9999.99.
    // Headings.
    char pound = 156; // £ sign (163 in gcc compiler).
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t%c %-8.2f\t%.2d/%.2d/%.4d\n", item_number, pound, unit_price, date_day, date_month, date_year);

    return 0;
}
// Write a programme that formats product information entered by the user.
#include <stdio.h>

int main(void) {
    // User inputs.
    int item_number;
    printf("Enter item number:");
    scanf("%d", &item_number);
    
    float unit_price;
    printf("Enter unit price:");
    scanf("%f", &unit_price);

    int date_day, date_month, date_year;
    printf("Enter a date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &date_day, &date_month, &date_year);

    // Print formatted output -- left justify the item number and date, right justify the unit price, and allow amounts up to £9999.99.
    // Headings.
    char pound = 156; // £ sign (163 in gcc compiler).
    printf("Item\t\tUnit Price\t\tPurchase Date\n");
    printf("%-d\t\t%c%4.2f\t\t%-02d/%02d/%04d\n", item_number, pound, unit_price, date_year, date_month, date_day);

    return 0;
}
// Write a programme that accepts a date from the user in the form dd/mm/yyyy and then display it as yyyymmdd
#include <stdio.h>

int main(void) {
    int date_day, date_month, date_year;
    printf("Enter a date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &date_day, &date_month, &date_year);

    printf("You entered: %04d%02d%02d\n", date_year, date_month, date_day);

    return 0;
}
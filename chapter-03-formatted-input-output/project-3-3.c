/* Books are identified by an International Standard Book Number (ISBN). ISBNs assigned
after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
(Older ISBNs use 10 digits). 
    - The first group (the GS1 prefix) is currently either 978 or 979.
    - The group identifier specifies the language of the country of origin (for example, 0 and 1 are
        used in English-speaking countries).
    - The publisher code identifies the publisher (393 is the code for W. W. Norton).
    - The item number is assigned by the publisher to identify a specific book (97950 is the code for this book).
    - An ISBN ends with a check digit that's used to verify the accuracy of the preceding digits.

Write a programme that breaks down an ISBN entered by the user.

Note: The number of digits in each group may vary; you cannot assume the groups have the same lengths as shown in this example.
*/

#include <stdio.h>

int main(void) {
    int gs1, group_id, publisher_code, item_number, check_digit;

    printf("Enter ISBN (e.g.: 978-0-393-97950-3): ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher_code, &item_number, &check_digit);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
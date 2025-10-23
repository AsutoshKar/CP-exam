//Let's write a program to convert days into years,months and days.
#include <stdio.h>
int main() {
    int total_days, years, months, days;

    printf("Enter total number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    months = (total_days % 365) / 30;
    days = (total_days % 365) % 30;

    printf("%d days = %d years, %d months, and %d days\n", total_days, years, months, days);

    return 0;
}
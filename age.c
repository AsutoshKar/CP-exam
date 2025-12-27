//Let's calculate the no. of years, months, and days between two dates
#include <stdio.h>
int main() {
    int day;
    int month;
    int year;
    printf("Enter birth date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    // Get current date
    int curr_day, curr_month, curr_year;
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &curr_day, &curr_month, &curr_year);
    // Calculate age
    int age_years = curr_year - year;
    int age_months = curr_month - month;
    int age_days = curr_day - day;
    if (age_days < 0) {
        age_days = age_days+ 30; // Approximate days in a month
        age_months--;
    }
    if (age_months < 0) {
        age_months = age_months+ 12;
        age_years--;
    }
    printf("Age: %d years, %d months, and %d days\n", age_years, age_months, age_days);
    return 0;
}

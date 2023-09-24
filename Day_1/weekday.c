#include <stdio.h>

int zeller(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int dayOfWeek = (day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) + 5 * j) % 7;

    
    return (dayOfWeek + 5) % 7;
}

int main() {
    int day, month, year;

    // Input date
    printf("Enter the day (1-31): ");
    scanf("%d", &day);
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year (e.g., 2023): ");
    scanf("%d", &year);

    int weekday = zeller(day, month, year);

    
    char* weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("The given date %02d/%02d/%04d falls on a %s.\n", day, month, year, weekdays[weekday]);

    return 0;
}

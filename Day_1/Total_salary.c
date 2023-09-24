#include<stdio.h>
#include<math.h>

int main() {
    int basic;
    char ch;
    float total_salary, hra, da, pf, allow;

    printf("Enter the salary:");
    scanf("%d", &basic);

    printf("Enter grade:");
    scanf(" %c", &ch); 

    hra = 0.20 * basic;
    da = 0.50 * basic;
    pf = 0.11 * basic;

    if (ch == 'A') {
        allow = 1700;
    } else if (ch == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    total_salary = round(basic + hra + da + allow - pf);

    printf("%d",(int)total_salary); 

    return 0;
}

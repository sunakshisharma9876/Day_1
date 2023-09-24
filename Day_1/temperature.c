#include<stdio.h>
int main()
{ float temp;
        printf("Enter temperature in celsius:");
        scanf("%f",&temp);
if (temp<0){
            printf("Freezing");
        }
else if (temp<0){
            printf("Freezing");
        }
else if (temp>0&&temp<10){
            printf("Very Cold");
        }
else if (temp>10&&temp<20){
            printf("Cold weather");
        }
else if (temp>20&&temp<30){
            printf("Normal");
        }
else if (temp>30&&temp<40){
            printf("Hot");
        }
       else if (temp>=40){
            printf("Very Hot");
        }

    return 0;
}
#include<stdio.h>
int main(){
        float side1,side2,side3;
        printf("Enter three sides of a triangle:");
        scanf("%f%f%f",&side1,&side2,&side3);
        if(side1==side2&&side2==side3){
            printf("Equilateral\n");
        }
        else if(side1==side2||side2==side3||side3==side1){
            printf("Isoceles\n");
        }
        
        else{
            printf("Scalene");
        }

    return 0;
}
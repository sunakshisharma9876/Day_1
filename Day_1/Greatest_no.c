#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
     if(num1>num3){
            printf("%d is greatest",num1);
        }
        else{
            printf("%d is greatest",num3);
        }
    }
    else{
        printf("%d is greatest",num2);
    }

    return 0;
}
#include <stdio.h>

int main(void){
    float income;
    printf("enter the amount of taxable income: ");
    scanf("%f", &income);
    printf("the tax due is: ");

    if (income < 750){
        printf("%f\n", income * 0.01f);
    }
    else if (income < 2250){
        printf("%f\n", (7.5f + (income - 750) * 0.02f));
    }
    else if (income < 3750){
        printf("%f\n", (37.5f + (income - 2250) * 0.03f));
    }
    else if (income < 5250){
        printf("%f\n", (82.5f + (income - 3750) * 0.04f));
    }
    else if (income < 7000){
        printf("%f\n", (142.5f + (income - 5250) * 0.05f));
    }
    else{
        printf("%f\n", (230.0f + (income - 7000) * 0.06f));
    }
}
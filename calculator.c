#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Functions for each type of calculation
float multiplication(float num1, float num2)
{
    float result;

    result = num1 * num2;

    return (result);
}

float sum(float num1, float num2)
{
    float result;
    result = num1 + num2;

    return (result);
}

float division(float num1, float num2)
{
    float result;

    result = num1 / num2;

    return (result);
}

float subtraction(float num1, float num2)
{
    float result;

    result = num1 - num2;

    return (result);
}



int main(){
    char operation;
    float num1, num2, result;
    printf(">> Welcome to the Calculator 1.0 <<\n\n");
    printf("What type of calculation you want to do?\n");
    
    // do while for error message and reenter value
    do{
    printf(">> S for SUM\n>> N for SUBTRACTION\n>> D for DIVISION\n>> M for MULTIPLICATION\n");
    
    //grab char from user and make it uppercase
    scanf(" %c", &operation);
    operation = toupper(operation);
    
    //error message for invalid char
    if(operation != 'S'&&'N'&&'D'&&'M')
    {
        printf(">>ERROR 001<<: enter a valid operation.\n\n");
    }

    }
    while(operation != 'S'&&'N'&&'D'&&'M');
    
   
    printf("\n>>Enter two numbers for the calculations: ");
    scanf("%f", &num1);
    
    printf("And: ");
    scanf("%f", &num2);
    
    printf("\nYou choose %c and %.2f for number one and %.2f for number two.\n", operation, num1, num2);


    if(operation == 'S')
    {
       //Function for sum
       float result = sum(num1, num2);
       printf("\n>> %.2f + %.2f = %.2f\n", num1, num2, result);
    }
    if(operation == 'N')
    {
       //Function for subtraction
       float result = subtraction(num1, num2);
       printf("\n>> %.2f - %.2f = %.2f\n", num1, num2, result);
    }
    if(operation == 'D')
    {
       //Function for division
       float result = division(num1, num2);
       printf("\n>> %.2f / %.2f = %.2f\n", num1, num2, result);
    }
    if(operation == 'M')
    {
       //Function for multiplication
       float result = multiplication(num1, num2);
       printf("\n>> %.2f * %.2f = %.2f\n", num1, num2, result);
    }
    
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    char opr;
    float num1, num2, res;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&opr);

    printf("Enter first number : ");
    scanf("%f",&num1);

    printf("\nEnter second number : ");
    scanf("%f",&num2);

    switch(opr)
    {
        case '+': 
                    res = num1 + num2;
                    printf("Addition result = %.2f",res);
                    break;
        case '-':
                    res = num1 - num2;
                    printf("Subtraction result = %.2f",res);
                    break;
        case '*':
                    res = num1 * num2;
                    printf("Multiplication result = %.2f",res);
                    break;
        case '/':
                    if(num2!=0)
                    {
                        res = num1 / num2;
                        printf("Division result = %.2f",res);
                    }
                    else
                    {
                        printf("Division by zero can't be performed.");
                    }
                    break;
        // default :
        //             printf("Invalid operator.\n");
        //             break;
    }
    return 0;
}
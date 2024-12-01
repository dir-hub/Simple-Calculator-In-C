#include <stdio.h>
int main(){
    double num1,num2,result;
    char op;
    printf("Enter First Number : ");
    scanf("%lf", &num1);
    printf("Enter Second Number : ");
    scanf("%lf", &num2);
    printf("Enter Operator (+,-,*,/,%%) : ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0){
            printf("Error: Division by zero is not allowed.\n");
            return 0;
        }else{
            result = num1 / num2;
        }
        break;
    case '%':
        if (num2 == 0){
            printf("Error: Modulo operation by zero is not allowed.\n");
            return 0;
        } else{
        result = (int)num1 % (int)num2;
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
        break;
    }
    printf("Result of %.2lf and %.2lf = %.2lf\n",num1,num2, result);
    return 0;
}


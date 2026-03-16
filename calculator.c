#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    int i, fact = 1;
    int power;
    
    printf("Simple Calculator
");
    printf("1. Addition
");
    printf("2. Subtraction
");
    printf("3. Multiplication
");
    printf("4. Division
");
    printf("5. Power (x^y)
");
    printf("6. Factorial (x!)
");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f
", result);
            break;
            
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f
", result);
            break;
            
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f
", result);
            break;
            
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f
", result);
            } else {
                printf("Error: Division by zero!
");
            }
            break;
            
        case 5:
            printf("Enter base (x): ");
            scanf("%f", &num1);
            printf("Enter exponent (y): ");
            scanf("%d", &power);
            result = 1;
            for(i = 0; i < power; i++) {
                result *= num1;
            }
            printf("Result = %.2f
", result);
            break;
            
        case 6:
            printf("Enter number for factorial: ");
            scanf("%d", &power);
            if(power >= 0) {
                fact = 1;
                for(i = 1; i <= power; i++) {
                    fact *= i;
                }
                printf("%d! = %d
", power, fact);
            } else {
                printf("Factorial not defined for negative numbers!
");
            }
            break;
            
        default:
            printf("Invalid choice!
");
    }
    
    return 0;
}

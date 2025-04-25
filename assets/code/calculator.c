#include<stdio.h>
#include<math.h>

void main() {
    int choice;
    double num1, num2;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 6) {
        printf("Enter number: ");
        scanf("%lf", &num1);
        printf("Result: %.2lf\n", sqrt(num1));
    } else {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1: printf("Result: %.2lf\n", num1 + num2); break;
            case 2: printf("Result: %.2lf\n", num1 - num2); break;
            case 3: printf("Result: %.2lf\n", num1 * num2); break;
            case 4:
                if (num2 != 0) printf("Result: %.2lf\n", num1 / num2);
                else printf("Error: Division by zero\n");
                break;
            case 5: printf("Result: %.2lf\n", pow(num1, num2)); break;
            default: printf("Invalid choice\n");
        }
    }
}

 
//create a calculator with this following functions
//addition, subtraction, multiplication, division, modulus, power, factorial, square root
//use a GUI to make it look nice and user friendly
//use a menu to select the function you want to use
//use a loop to keep the program running until the user wants to quit the program
//use a switch statement to select the function the user wants to use
//use a function for each of the functions
//use a function to display the menu
//use a function to get the user input
//use a function to display the results
//use a function to get the user input for the menu
//use a function to get the user input for the numbers
//store the results in a variable to allow to be used in other functions if needed

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function prototypes
void displayMenu();
int getMenuChoice();
void getNumbers(int *num1, int *num2);
void displayResults(int result);
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int modulus(int num1, int num2);
int power(int num1, int num2);
int factorial(int num1);
int squareRoot(int num1);

int main()
{
    int num1, num2, result, choice;

    do
    {
        displayMenu();
        choice = getMenuChoice();

        switch(choice)
        {
            case 1:
                getNumbers(&num1, &num2);
                result = addition(num1, num2);
                displayResults(result);
                break;
            case 2:
                getNumbers(&num1, &num2);
                result = subtraction(num1, num2);
                displayResults(result);
                break;
            case 3:
                getNumbers(&num1, &num2);
                result = multiplication(num1, num2);
                displayResults(result);
                break;
            case 4:
                getNumbers(&num1, &num2);
                result = division(num1, num2);
                displayResults(result);
                break;
            case 5:
                getNumbers(&num1, &num2);
                result = modulus(num1, num2);
                displayResults(result);
                break;
            case 6:
                getNumbers(&num1, &num2);
                result = power(num1, num2);
                displayResults(result);
                break;
            case 7:
                getNumbers(&num1, &num2);
                result = factorial(num1);
                displayResults(result);
                break;
            case 8:
                getNumbers(&num1, &num2);
                result = squareRoot(num1);
                displayResults(result);
                break;
            case 9:
                printf("Thank you for using the calculator!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    }while(choice != 9);

    return 0;
}

void displayMenu()
{
    printf("Calculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Factorial\n");
    printf("8. Square Root\n");
    printf("9. Quit\n");
}

int getMenuChoice()
{
    int choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    return choice;
}

void getNumbers(int *num1, int *num2)
{
    printf("Enter the first number: ");
    scanf("%d", num1);

    printf("Enter the second number: ");
    scanf("%d", num2);
}

void displayResults(int result)
{
    printf("The result is: %d\n", result);
}

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

int division(int num1, int num2)
{
    return num1 / num2;
}

int modulus(int num1, int num2)
{
    return num1 % num2;
}

int power(int num1, int num2)
{
    return pow(num1, num2);
}

int factorial(int num1)
{
    int i, fact = 1;

    for(i = 1; i <= num1; i++)
    {
        fact *= i;
    }

    return fact;
}

int squareRoot(int num1)
{
    return sqrt(num1);
}

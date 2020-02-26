#include <stdio.h>

int main(){
    int row, column, userInput;
    printf("Enter a number to make a pyramid of stars \n");
    scanf("%d", &userInput);
    // Loop to print rows
    for (row = 1; row <= userInput; row++){

        // Loop to print spaces in a row
        for (column = 1; column <= userInput-row; column++)  {
            printf(" ");
        }
        // Loop to print stars in a row
        for (column = 1; column <= 2*row - 1; column++)
            printf("*");
        printf("\n");

    }

    return 0;
}

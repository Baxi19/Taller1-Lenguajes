#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*Structs*/
struct student{
    char name[50];
    int age;
    float weight;
};

/* function declaration */
struct student getInformation();

int main() {
    printf("\n**********************************************************\n");
    printf("Ejercicio # 1 \n");
    int row, column, userInput;
    printf("Ingrese un numero de filas para crear una piramide \n");
    scanf("%d", &userInput);
    // Loop to print rows
    for (row = 1; row <= userInput; row++){

        // Loop to print spaces in a row
        for (column = 1; column <= userInput-row; column++)  {
            printf(" ");
        }
        // stars in a row
        for (column = 1; column <= 2*row - 1; column++)
            printf("*");
        printf("\n");

    }
    /*----------------------------------------------------------------------------------------------------------------*/
    printf("\n**********************************************************\n");
    printf("Exercise # 2 \n");
    struct student s;
    int userOption = 1;

    for (int j = 0; j < userOption; ++j) {

        s = getInformation();

        printf("\nInformacion de estudiante");
        printf("\nNombre: %s", s.name);
        printf("\nEdad: %d", s.age);
        printf("\nPeso: %f", s.weight);

        printf("\nDesea editar al estudiante nuevamente?(0 = no)");
        scanf("%d", &userOption);
        if(userOption == 1){
            j--;
        }
    }

    return 0;
}


struct student getInformation(){
    struct student s1;

    printf("\nIngrese un nombre: ");
    scanf ("%s", s1.name);

    printf("\nIngrese una edad (Numero sin decimales) : ");
    scanf("%d", &s1.age);

    printf("\nIngrese el peso (Numero con decimales): ");
    scanf("%f", &s1.weight);

    return s1;
}
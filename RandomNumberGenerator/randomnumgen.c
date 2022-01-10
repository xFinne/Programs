#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void print(int *input) {

    printf("\n");
    printf("------------------------\n");
    printf("|  Number generator  |\n");
    printf("|      Version 0.1     |\n");
    printf("------------------------\n");
    printf("\n");

    printf("Length of number? \n");

    scanf("%d", input);

    printf("\n");

}

int main() {

    int temp;
    int t;
    int f;
    int *input = &f;

    print(input);

    if(f <= 0) {

        printf("Input has to be over 0\n");  
        printf("Quitting program\n");
        printf("----------------\n");
        system("pause");
        return 0;
    }
    
    printf("Generated number: ");

    for(t = 0; t <= f - 1;t++) {

        temp = (rand() % 10);
        printf("%d", temp);
    }
    printf("\n");
    system("pause");    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

//make certain numbers removable

void print(int *input) {

    char yn[1];
    const char y[1] = {'y'};
    int xc;
    int *pxc = &xc;

    printf("\n");
    printf("------------------------\n");
    printf("|   Number generator   |\n");
    printf("|      Version 0.1     |\n");
    printf("------------------------\n");
    printf("\n");

    printf("Length of number? \n");

    scanf("%d", input);
    printf("\n");

    printf("Exclude numbers? (y/n) \n");

    scanf("%s", yn);
    printf("\n");

    int res = strcmp(yn, y);

    if(res == -1) {
        printf("What number to exclude? \n");
        scanf("%d", &xc);
        fill_array(&pxc, &input);
    } else {
        fill_array(&pxc, &input);
    }
}

int fill_array(int **pxc, int **input) {

    srand(time(NULL));
    int numbers[**input];

    for(int i = 0; **input > i; i++) {   //fill array
        numbers[i] = (rand() % 10);
        while(numbers[i] == **pxc) {
                numbers[i] = (rand() % 10);
        }
    }
    printf("Generated number: \n");

        for(int e = 0; **input > e; e++) {   //print array
        printf("%d", numbers[e]);
    }
    return 1;
}

int main() {

    int f;
    int *input = &f;

    print(&input);

// fix!!!
//    if(f != sizeof(int)) {
//
//        printf("Input has to be over 0 and an integer\n");  
//       printf("Quitting program\n");
//        printf("----------------\n");
//        system("pause");
//        return 0;
//    }

    printf("\n");
    system("pause"); 
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "functions.h"

int main(void){

    char userInput[250];
    char keyStroke = '\0';

    printf("Enter a sample text:\n");
    fgets(userInput, 250, stdin);

    printf("\n");
    printf("You entered: %s\n", userInput);

    PrintMenu();

    while(keyStroke != 'q'){
        printf("Choose an option:\n");
        scanf(" %c", &keyStroke);

        if ((keyStroke == 'c') || (keyStroke == 'w') || (keyStroke == 'f') || (keyStroke == 'r') || (keyStroke == 's')){
            ExecuteMenu(keyStroke, userInput);
            PrintMenu();
        }
    }

    return 0;
}
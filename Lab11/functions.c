#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#include "functions.h"

void PrintMenu(){
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n\n");

}

void ExecuteMenu(char keyStroke, char* userInput){
    if(keyStroke == 'c'){
        printf("Number of non-whitespace characters: %d\n\n", GetChars(userInput));
    }
    else if(keyStroke == 'w'){
        printf("Number of words: %d\n\n", GetWords(userInput));
    }
    else if(keyStroke == 'f'){
        FixCapitals(userInput);
    }
    else if(keyStroke == 'r'){
        ReplaceExclamation(userInput);
        printf("Edited text: %s\n\n", userInput);
    }
    else if(keyStroke == 's'){
        ShortenSpaces(userInput);
        printf("Edited text: %s\n\n", userInput);
    }
}
int GetChars(const char* userInput){
    int count = 0;

    for(int i = 0; i < strlen(userInput); ++i){
        if((userInput[i] != ' ') || (userInput[i] != '\n') || (userInput[i] != '\t') || (userInput[i] != '\0')){
            ++count;
        }
    }
    return count;
}

int GetWords(const char* userInput){
    int count = 0;
    bool spaceFound = false;

    for(int i = 0; i < strlen(userInput); ++i){
        if(spaceFound == false){
            if(isspace(userInput[i])){
                spaceFound = true;
                ++count;
            }
        }
        if(spaceFound == true){
            if(!isspace(userInput[i])){
                spaceFound = false;
            }
        }
    }
    return count;
}

void FixCapitals(char* userInput){
    bool needToFix = false;

    userInput[0] = toupper(userInput[0]);

    for(int i = 0; i < strlen(userInput); ++i){
        if(needToFix == true){
            if(!isspace(userInput[i])){
                userInput[i] = toupper(userInput[i]);
                needToFix = false;
            }
            
        }
        if((userInput[i] == '.') || (userInput[i] == '!') || (userInput[i] == '?')){
            needToFix = true;
        }
    }
}
void ReplaceExclamation(char* userInput){
    for(int i = 0; i < strlen(userInput); ++i){
        if(userInput[i] == '!')
            userInput[i] = '.';
    }
}
void ShortenSpaces(char* userInput){
    int j = 0;
    char alteredInput[250];

    for(int i = 0; i < strlen(userInput); ++i){
        if(userInput[i] == ' '){
            alteredInput[i] = userInput[i];
            ++j;
                while(isspace(userInput[i])){
                    ++i;
                }
            --i;
        }
        else{
            alteredInput[j] = userInput[i];
            ++j;
        }
    }

    alteredInput[j] = '\0';
    strcpy(userInput, alteredInput);

}
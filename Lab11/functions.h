#include <string.h>
#include <stdio.h>

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

void PrintMenu();
void ExecuteMenu(char keyStroke, char* userInput); 
int GetChars(const char* userInput);
int GetWords(const char* userInput);
void FixCapitals(char* userInput);
void ReplaceExclamation(char* userInput);
void ShortenSpaces(char* userInput);

#endif
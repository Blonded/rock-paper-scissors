// Simple rock paper scissors game in C
#include <stdio.h>
#include <string.h>

int main(void){
    char player_choice[20];
    printf("Welcome to the Rock Paper Scissors Game! \n");
    printf("Type rock, paper, or scissors: ");

    // take users input
    if(scanf("%19s", player_choice) != 1){
        printf("Input error.\n");
        return 1;
    }

    printf("You chose: %s\n", player_choice);

    return 0;
}
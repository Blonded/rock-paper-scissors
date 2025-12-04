// Simple rock paper scissors game in C
#include <stdio.h>
#include <string.h>

// helper function for main
int choice_to_code(const char *choice){
    if(strcmp(choice, "rock") ==0) {
        return 0;
    } else if (strcmp(choice, "paper") == 0){
        return 1;
    } else if (strcmp(choice, "scissors") == 0){
        return 2;
    } else {
        return -1;
    }
}

int main(void){
    char player_choice[20];
    printf("Welcome to the Rock Paper Scissors Game! \n");
    printf("Type rock, paper, or scissors: ");

    // take users input
    if(scanf("%19s", player_choice) != 1){
        printf("Input error.\n");
        return 1;
    }

    int player_code = choice_to_code(player_choice);

    if (player_code == -1){
        printf("Invalid choice: %s\n", player_choice);
        return 1;
    }

    // printf("You chose: %s\n", player_choice);
    printf("You chose: %s (code %d)\n", player_choice, player_code);


    return 0;
}
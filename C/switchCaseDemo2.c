/*
This demo will basically go over function modulation. With
a switch case structure implemented within main.
*/

#include <stdio.h>

void displayDescription(void)
{
    printf("This demo will basically go over function modulation. With\n");
    printf("a switch case structure implemented within main.\n");
}

void playgame()
{
    printf("Play game called");
}

void loadgame()
{
    printf("Load game called");
}

void playmultiplayer()
{
    printf("Play multiplayer called");
}

int main()
{
    int input;

    displayDescription();

    printf("\n1. Play game\n");
    printf("2. Load game\n");
    printf("3. Play multiplayer\n");
    printf("4. Exit\n");
    scanf("%d", &input);
    switch(input)
    {
        case 1: playgame();
                break;
        case 2: loadgame();
                break;
        case 3: playmultiplayer();
                break;
        case 4: printf("Thanks for playing!\n");
                break;
        default: printf("Bad input, exiting...");
                 break;
    }
    getchar();
}


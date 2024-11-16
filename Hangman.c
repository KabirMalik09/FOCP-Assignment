#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<string.h>

char words[10]={ 
    "programming"
    "computer"
    "keyboard"
    "hangman"
    "algorithm"
    "variable"
    "function"
    "pointer"
    "array"
    "language"
}

void displayHangman(int tries){

switch(tries)
{
    case 0:
        printf("        |\n");
        printf("        |\n");
        printf("        |\n");
        break;

    case 1:
        printf("   o    |\n");
        printf("        |\n");
        printf("        |\n");
        break;

    case 2:
        printf("   o    |\n");
        printf("   |    |\n");
        printf("        |\n");
        break;

    case 3:
        printf("   \\o/    |\n");
        printf("     |    |\n");
        printf("    / \\   |\n");
        break;

    }
}

int main()
{
    srand(time(NULL));
    char word[50];
    char guessed[50];
    int wordlen , tries=0 , i , correctGuess=0;

    strcpy(word , words[rand() % 10]);
    wordlen = strlen(word);

    for(i=0 ; i < wordlen ; i++)
    {
        guessed[i] = '_';
    }
    guessed[wordlen] = '\0';

    printf("Welcome to Hangman!\n");
    printf("Guess the Word : %s\n", guessed);

    while(tries < 3)
    {
        char guess;
        printf("\n Enter a Letter : ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        int found = 0;
        for(i=0 ; i < wordlen ; i++)
        {
            if(word[i] == guess && guessed[i] != guess)
            {
                guessed[i] = guess;
                found = 1;
                correctGuess++;
            }

        }
        
        if(!found)
        {
            tries++;
            displayHangman(tries);
            printf("Incorrect guess! %d tries left", 3 - tries);
        }   else{
            printf("Correct guess!!\n");
        }
        printf("Word : %s\n",guessed);

        if(correctGuess == wordlen){
            printf("Congo!! you have guessed the word : %s\n",word);
            break;
        }
    
    }
    if(tries == 3){
        printf("Sorry you have run out of tries. The word was : %s\n", word);
        displayHangman(tries);
    }
    
    return 0;
}



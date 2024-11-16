#include<stdio.h>
int main()
{
    char user,comp;
    int c , flagA=0 , flagB=0 , i;
    
    printf("enter 'R' for Rock, 'S' for Scissor, 'P' for Paper.");
    for( i=0;i<=2;i++)
    {
        printf("\nenter(R , S , P) : ");
        scanf(" %c", &user);
        printf("\nenter no. for computer choice from 0-100:");
        scanf(" %d", &c);

        if(c<=33 && c>=0)
		{
            comp='R';
        }
        else if(c>33 && c<=66)
		{
            comp='P';
        }
        else if(c>66 && c<=100)
		{
            comp='S';
        }

        if (user=='R' && comp=='P'){
            printf("\ncomputer wins this round");
            flagB++;
        }
        else if (user=='R' && comp=='S'){
            printf("\nuser wins this round");
            flagA++;
        }
        else if (user=='R' && comp=='R'){
            printf("\nits a tie");
        }
        else if (user=='P' && comp=='P'){
            printf("\nits a tie");
        }
        else if (user=='P' && comp=='S'){
            printf("\ncomputer wins this round");
            flagB++;
        }
        else if (user=='P' && comp=='R'){
            printf("\nuser wins this round");
            flagA++;
        }
        else if (user=='S' && comp=='P'){
            printf("\nuser wins this round");
            flagA++;
        }
        else if (user=='S' && comp=='S'){
            printf("\nits a tie");
        }
        else if (user=='S' && comp=='R'){
            printf("\ncomputer wins this round");
            flagB++;
        }
    }
    if(flagA>flagB)
    printf("\nUser wins the game");
    else if(flagA<flagB)
    printf("\nComputer wins the game");
    else
    printf("\nThe game is a tie");


return 0;
}
#include<stdio.h>
#include <stdlib.h>

// Function prototypes
int rules();
int round1();

int main(){
    // Display game rules
    rules();
    printf("\n\n");
    
    // Start the first round of the game
    round1();
    return 0;
}

// Function definition for round1
int round1(){
    // User input for name
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\n\n");

    // User input for initial deposit
    int deposit1;
    printf("Enter the amount of money to deposit: ");
    scanf("%d", &deposit1);
    printf("\n\n");

    printf("Your current balance is $%d", deposit1);
    printf("\n\n");

    // User input for betting amount
    int bet1; 
    printf("%s, Enter money to bet : $", name);
    scanf("%d", &bet1);
    printf("\n\n");

    // Check if bet exceeds deposit
    if(bet1 > deposit1){
        printf("Money Exceeds your balance\n");
        printf("Enter Again: $");
        scanf("%d", &bet1);
    }

    printf("\n\n");
    
    // Computer generates a random number between 0 and 9
    int computer1;
    computer1 = rand()%10;

    // User input for guessing the number
    int guess1;
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess1);

    printf("\n\n");

    // Check if guess exceeds the allowed range
    if (guess1>10){
        printf("Number Exceeds 10\n");
        printf("Enter Again: ");
        scanf("%d", &guess1);
    }

    printf("\n\n");

    // Check if user's guess matches computer's number
    if (guess1 == computer1){
        printf("You have won $%d", bet1);
        printf("\n\n");
        
        int bet2;
        bet2 = bet1 * 10;

        int new_won;
        if(bet1 == deposit1){
            new_won = bet2 + 0;
        }
        else{
            new_won = bet2 + deposit1;
        }
        printf("You have won $%d as total", new_won);

    }
    else if (guess1 != computer1)
    {
        printf("You have lost $%d", bet1);
        printf("\n\n");
        printf("The correct number is : %d", computer1);
        printf("\n\n");
    }
        int new_los;
        new_los = deposit1 - bet1;

        printf("Now you have $%d as a balance", new_los);
          
        printf("\n\n");

        // Check if the user has run out of money
        if(new_los == 0)
        {
            printf("Sir, you have $0 as a balance\n");
            printf("You have no more money to play\n");
            printf("Have a nice day");
        }
        else{
            // User decision to continue or quit
            int decision;
            printf("Press 1 for YES\n");
            printf("Press 2 for NO\n\n");

            printf("Do you want to continue (Y/N):");
            scanf("%d", &decision);
            printf("\n\n");

            // Continue the game
            if(decision == 1){
                // Display rules and current balance
                rules();
                printf("\n\n");
                printf("Now you have $%d as a balance", new_los);
                printf("\n\n");

                // User input for the second bet
                int bet3;
                printf("%s, Enter the money to bet: $", name);
                scanf("%d", &bet3);
                printf("\n\n");

                // Check if the bet exceeds the balance
                if(bet3 > new_los){
                    printf("Money Exceeds,\n");
                    printf("Enter Again : $");
                    scanf("%d", &bet3);
                }
                int guess2;
                printf("Enter a number from 1 to 10 : ");
                scanf("%d", &guess2);
                printf("\n\n");

                // Computer generates a random number (Hardcoded to 9 here, which should be randomized)
                int computer2;
                computer2 = 9; // This should ideally be rand() % 10 like before

                // Check if guess exceeds the allowed range
                if(guess2 > 10)
                {
                    printf("Number Exceeds,\n");
                    printf("Enter Again: $");
                    scanf("%d", &guess2);
                    printf("\n\n"); 
                }
                // Check if user's guess matches computer's number
                if(guess2 == computer2){
                    printf("You have won $%d", bet3);
                    printf("\n\n");

                    int b;
                    b = bet3 * 10;

                    int b1;
                    if(bet3 == new_los){
                        b1 = b + 0;
                    }
                    else{
                        b1 = b + new_los;
                    }
                    printf("You have won $%d as a total", b1);
                }
                else if(guess2 != computer2){
                    printf("You have lost $%d", bet3);
                    printf("\n\n");

                    int b2;
                    b2 = new_los - bet3;

                    printf("You have $%d as a total", b2);
                    printf("\n\n");

                    // Check if the user has run out of money
                    if(b2 == 0){
                        printf("Sir, you have $0 as a balance\n");
                        printf("You have no more money to play\n");
                        printf("Have a nice day!");
                    }
                }
            }
            // User decides to quit
            else if(decision == 2){
                printf("Have a nice day!");
            }
        }
    // End of round1 function
}

// Function definition for rules
int rules()
{
    // Print the rules of the game
    printf("----------------------------------------------------------------------------\n");
    printf("                         RULES\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("         1. Choose any number between 1 to 10\n");
    printf("         2. If you win you will get 10 times of money you bet\n");
    printf("         3. if you bet on the wrong number you will lose your betting amount\n");
    printf("------------------------------------------------------------------------------\n");
    return 0; // Missing return statement added
}

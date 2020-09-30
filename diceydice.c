#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

float main()
{
    int d1, d2, tot1, tot2, i=1;
    time_t t;
    char ans, resp;

do{
    srand(time(&t));

    printf("\n\n\t\t\t\t\t\t{//||\\}WELCOME!{//||\\}\n\n");
    printf("Press any key to roll the dice...\n\n\n\n");

    getch();

    d1=(rand()%6)+1;
    d2=(rand()%6)+1;
    tot1= d1+d2;

    //printf("%d %d %d\n\n", d1, d2, tot1);

    printf("The dice have been rolled!\n");
    printf("The first dice gave %d while the second one gave %d.\n", d1, d2);
    printf("This brings your total to %d.\n\n", tot1);

    printf("Predict whether the next roll of dice would give \na (H)igher or\na (L)ower or \nthe (S)ame\ntotal!\n");
    printf("\nGood Luck!\n");

    //printf("H, L, S?\n\n");
    do{
            printf("\nYour response: ");
            scanf("%c", &ans);
            ans= tolower(ans);

            if((ans != 'h')&&(ans != 'l')&&(ans != 's'))
        {
            printf("\nThis is not a valid response.\nYou have to answer in H, L or S; standing for Higher, Lower and Same\nTry again.\n\n");
        }

    }while((ans != 'h')&&(ans != 'l')&&(ans != 's'));

    printf("\n\n\nYour prediction has been noted!\nPress any key to roll the dice once more!\n\n");
    getch();

    d1= (rand()%6)+1;
    d2= (rand()%6)+1;
    tot2= d1+d2;

    //printf("%d %d %d\n\n", d1, d2, tot2);
    printf("The second roll of dice gave %d and %d;\nBringing your total to %d!\n\n", d1, d2, tot2);

    if(tot1==tot2)
    {
        if(ans=='s')
           {
               //printf("\n\nyou won!");
            printf("Congratulations! Your prediction was correct!\n\n\t\t\t\t\t\t!!!!YOU WON!!!!\n\n\n");
            printf("So you were correct this time, huh? Do you want to test your luck once more? (Y/N)\n");
            //scanf("%c", &resp);
           }
        else
            {
                //printf("\n\nYou lost!");
            printf("Sorry, your prediction was incorrect as %d is equal to %d.\n\n\t\t\t\t\t\t::::YOU LOST::::\n\n\n", tot1,tot2);
            printf("Don't worry! Trial number %d is the luckiest time, right? Do you want to test your luck once more? (Y/N)\n", i+1);
            //scanf("%c", &resp);
            }
    }
    if(tot2>tot1)
    {
        if(ans=='h')
           {
               //printf("\n\nYou won!");
            printf("Congratulations! Your prediction was correct!\n\n\t\t\t\t\t\t!!!!YOU WON!!!!\n\n\n");
            printf("So you were correct this time, huh? Do you want to test your luck once more? (Y/N)\n");
            //scanf("%c", &resp);
           }
        else
            {
                //printf("\n\nYou lost!");
                printf("Sorry, your prediction was incorrect as %d is higher than %d.\n\n\t\t\t\t\t\t::::YOU LOST::::\n\n\n", tot2,tot1);
            printf("Don't worry! Trial number %d is the luckiest time, right? Do you want to test your luck once more? (Y/N)\n", i+1);
            //scanf("%c", &resp);
            }
    }
    if(tot1>tot2)
    {
        if(ans=='l')
            {
                //printf("\n\nYou won!");
            printf("Congratulations! Your prediction was correct!\n\n\t\t\t\t\t\t!!!!YOU WON!!!!\n\n\n");
            printf("So you were correct this time, huh? Do you want to test your luck once more? (Y/N)\n");
            //scanf("%c", &resp);
            }
        else
            {
                //printf("\n\nYou lost!");
            printf("Sorry, your prediction was incorrect as %d is lower than %d.\n\n\t\t\t\t\t\t::::YOU LOST::::\n\n\n", tot2,tot1);
            printf("Don't worry! Trial number %d is the luckiest time, right? Do you want to test your luck once more? (Y/N)\n", i+1);
            //scanf("%c", &resp);
            }
    }

    scanf(" %c", &resp);
    i++;
    resp=tolower(resp);

}while(resp=='y');

    if(resp=='n')
    {
        printf("\n\nThanks for playing this game! Hope you had fun!\n\n\n\n\n\n");
    }

    return 0;
}

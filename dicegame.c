#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void main()
{
    int d1, d2, tot1, tot2, i=1;
    time_t t;
    char ans, resp;

    do{
    srand(time(&t));

    printf("\t\t\t\t{//||\\}WELCOME!{//||\\}\n\n");
    printf("Press any key to roll the dice...\n\n\n\n");
    //getch();

    d1= (rand()%6)+1;
    d2= (rand()%6)+1;

    tot1= d1 + d2;

    printf("The dice have been rolled!\n");
    printf("The first dice gave %d while the second one gave %d.\n", d1, d2);
    printf("This brings your total to %d.\n\n", tot1);

    printf("Predict whether the next roll of dice would give \na (H)igher or\na (L)ower or \nthe (S)ame\ntotal!\n");
    printf("\nGood Luck!\n");

   // do
    //{
        printf("\nYour response: ");
        scanf("%c", ans);
        ans= toupper(ans);
        /*if((ans != 'H')||(ans != 'L')||(ans != 'S'))
        {
            printf("\nThis is not a valid response.\nYou have to answer in H, L or S; standing for Higher, Lower and Same\nTry again.\n\n");
        }*/
    //}while((ans != 'H')&&(ans != 'L')&&(ans != 'S'));

    printf("\n\n\nYour prediction has been noted!\nPress any key to roll the dice once more!\n\n");

    //getch();

    d1= (rand()%6)+1;
    d2= (rand()%6)+1;

    tot2= d1+d2;

    printf("The second roll of dice gave %d and %d;\nBringing your total to %d!\n\n", d1, d2, tot2);

    if(tot1==tot2)
    {
        if(ans=='S')
        {
            printf("Congratulations! Your prediction was correct!\n\n\t\t\t!!!!YOU WON!!!!\n\n\n");
            printf("So you were correct this time, huh? Do you want to test your luck once more? (Y/N)");
            scanf("%c", &resp);
        }
        else
        {
            printf("Sorry, your prediction was incorrect as %d is not equal to %d.\n\n\t\t\t::::YOU LOST::::\n\n\n", tot1,tot2);
            printf("Don't worry! %dth time is the luckiest time, right? Do you want to test your luck once more? (Y/N)", i+1);
            scanf("%c", &resp);
        }
    }


    else if(tot1<tot2)
    {
        if(ans=='H')
        {
            printf("Congratulations! Your prediction was correct!\n\n\t\t\t!!!!YOU WON!!!!\n\n\n");
            printf("So you were correct this time, huh? Do you want to test your luck once more? (Y/N)");
            scanf("%c", &resp);
        }
        else
        {
            printf("Sorry, your prediction was incorrect as %d is not higher than %d.\n\n\t\t\t::::YOU LOST::::\n\n\n", tot1,tot2);
            printf("Don't worry! %dth time is the luckiest time, right? Do you want to test your luck once more? (Y/N)", i+1);
            scanf("%c", &resp);
        }
    }

    else if(tot1>tot2)
    {
        if(ans=='L')
        {
            printf("Congratulations! Your prediction was correct!\n\n\t\t\t!!!!YOU WON!!!!\n\n\n");
            printf("So you were correct this time, huh? Do you want to test your luck once more? (Y/N)");
            scanf("%c", &resp);
        }
        else
        {
            printf("Sorry, your prediction was incorrect as %d is not lower than %d.\n\n\t\t\t::::YOU LOST::::\n\n\n", tot1,tot2);
            printf("Don't worry! %dth time is the luckiest time, right? Do you want to test your luck once more? (Y/N)", i+1);
            scanf("%c", &resp);
        }
    }


    i++;
    resp=toupper(resp);

    }while(resp=='Y');

}

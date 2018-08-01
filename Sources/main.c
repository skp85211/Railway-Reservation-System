#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include"struct.h"
#include"func.h"

int main()
{
    struct passenger *head1,*head2;
    int count_seat,count_wait;
    int pnr=5555;
    head1=head2=NULL;
    count_seat=count_wait=0;
 g1: system("cls");
    printf("\n\n\n");
    printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t :::                                                                 :::\n");
    printf("\t\t :::                   WELCOME TO INDIAN                             :::\n");
    printf("\t\t :::                  RAILWAY RESERVATION                            :::\n");
    printf("\t\t :::                        SYSTEM                                   :::\n");
    printf("\t\t :::                                                                 :::\n");
    printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

    //display of 1st list of choice
    printf("\n\n\n");
    printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t :::                                                                 :::\n");
    printf("\t\t :::       1.) MENU                                                  :::\n");
    printf("\t\t :::       2.) ABOUT                                                 :::\n");
    printf("\t\t :::       3.) PREPARED BY....                                       :::\n");
    printf("\t\t :::       4.) EXIT                                                  :::\n");
    printf("\t\t :::                                                                 :::\n");
    printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    int choice1;
    printf("\n \b Press any of the following choice to proceed further : ");
    scanf("%d",&choice1);

    switch(choice1)
    {
        case 1: printf("\n\n\t\tProceeding to Menu.................");
                printf("\n\t\tPress any key to continue to menu ....");
                system("pause");
                goto g2;
                break;

        case 2: system("cls");
                printf("\n\n\n\n\t\t\t\t****ALL ABOUT INDIAN RAILWAY (IR)****");
                printf("\n\n\tIndia's national railway system operated by the Ministry of Railways.");
                printf("\n\tIt manages the fourth-largest railway network in the world by size, with 121,407 km of total track");
                printf("\n\tThe world's eighth-largest employer, it had 1.308 million employees as of March 2017.");
                printf("\n\tIn the year ending March 2018, IR is projected to carry 8.26 billion passengers\n\n\n\n\n\n");
                system("pause");
                goto g1;
                break;

        case 3: system("cls");
                printf("\n\n\n");
                printf("\t\t\t\t**** PROJECT ON INDIAN RAILWAY RESERVATION SYSTEM ****");
                printf("\n\t\t\t\t          **** PREPARED BY........... ****          ");
                printf("\n\n\n");
                printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\t\t :::                                                                 :::\n");
                printf("\t\t :::       NAME                         |   ENROLLMENT NUMBER        :::\n");
                printf("\t\t ::: -----------------------------------|--------------------------- :::\n");
                printf("\t\t :::     1.) SUNNY KUMAR PATHAK         |    9917013095              :::\n");
                printf("\t\t ::: -----------------------------------|--------------------------- :::\n");
                printf("\t\t :::                                                                 :::\n");
                printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                system("pause");
                goto g1;
                break;

        case 4: system("cls");
                printf("\n\n\n\t\t\tThanks For Using this System........");
                printf("\n\t\t\tHope to see you again.....\n\n\n\n");
                exit(0);
                break;
        default: printf("\n Wrong choice...... ");
                 printf("\n please Enter your choice from above menu....");
                 system("pause");
                 goto g1;
                 break;
    }
    g2: {system("cls");
        //display of 2ND list of choice for menu
        printf("\n\n\n");
        printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t :::                                                                 :::\n");
        printf("\t\t :::       1.) BOOK/RESERVE SEAT                                     :::\n");
        printf("\t\t :::       2.) CANCEL SEAT                                           :::\n");
        printf("\t\t :::       3.) DISPLAY MY RESERVATION STATUS                         :::\n");
        printf("\t\t :::       4.) DISPLAY SEAT AVAILABILITY                             :::\n");
        printf("\t\t :::       5.) BACK TO MAIN SCREEN                                   :::\n");
        printf("\t\t :::                                                                 :::\n");
        printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        int choice2;
        printf("\n \b Press any of the choice to do stated operation or activity : ");
        scanf("%d",&choice2);

        switch(choice2)
        {
            case 1: system("cls");
                    printf("\n\n\n\t\t\t Welcome to booking or reservation page of INDIAN RAILWAY \n\n\n");
                    booking(&head1, &head2, &count_seat, &count_wait, &pnr);
                    goto g2;
                    break;

            case 2: printf("\n Wait.........\n");
                    int pnr2,c;
                    printf("\nEnter pnr no. to cancel: \n");
                    scanf("%d",&pnr2);
                    c=check(&head1,&head2,pnr2);
                    if(c==1)
                        {
                            delete_node(&head1,pnr2);
                            count_seat--;
                        }
                    else if(c==2)
                    {
                        delete_node(&head2,pnr2);
                        count_wait--;
                    }
                    else
                    {
                        printf("\n INVALID PNR......\n");
                        system("pause");
                        goto g2;
                    }
                    if((count_seat<3) && (c==1))
                    {
                        upgrade(&head1,&head2,pnr2);
                    }
                    system("pause");
                    goto g2;
                    break;

            case 3: system("cls");
                    int pnr1;
                    printf("\n\n Enter your 4-digit pnr number : ");
                    scanf("%d",&pnr1);
                    display_reservation(&head1,&head2,pnr1);
                    system("pause");
                    goto g2;
                    break;
//
            case 4: display_train(&head1,&head2);
                    goto g2;
                    break;

            case 5: printf("\n\n\t\t Moving to Main Screen ........\n\n");
                    system("pause");
                    goto g1;
                    break;

            default: printf("\n Wrong choice...... ");
                     printf("\n please Enter your choice from above menu....");
                     system("pause");
                     goto g2;
                     break;
        }
    }
    return 0;
}

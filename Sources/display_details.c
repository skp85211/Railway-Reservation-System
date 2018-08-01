#include"struct.h"
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void display_reservation(struct passenger **head_ref1,struct passenger **head_ref2,int pnr)
{
    struct passenger *temp1=(*head_ref1);
    struct passenger *temp2=(*head_ref2);
    int flag=0;
    while((temp1)!=NULL)
    {
        if((temp1->pnr_no)==pnr)
        {
            printf("\n\n\t\tYour reservation details : \n");
            printf("\n\n\n");
        printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t :::                                                                 :::\n");
        printf("\t\t :::  Name : %s \t\t Age : %d                            :::\n",temp1->name,temp1->age);
        printf("\t\t :::  Gender : %c                                                     :::\n",temp1->gender);
        printf("\t\t :::  PNR NUMBER : %d                            \t\t     :::\n",temp1->pnr_no);
        printf("\t\t :::  Seat No. : %d                                 \t\t     :::\n",temp1->seat_no);
        printf("\t\t :::  Wish you a Happy and safe journey !!!               \t     :::\n");
        printf("\t\t :::                                                                 :::\n");
        printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        flag=1;
        }
        temp1=temp1->next;
    }
    while((temp2)!=NULL)
    {
        if((temp2->pnr_no)==pnr)
        {
            printf("\n\n\t\tYour reservation details : \n");
            printf("\n\n\n");
        printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t :::                                                                 :::\n");
        printf("\t\t :::  Name : %s \t\t Age : %d                            :::\n",temp2->name,temp2->age);
        printf("\t\t :::  Gender : %c                                                     :::\n",temp2->gender);
        printf("\t\t :::  PNR NUMBER : %d                            \t\t     :::\n",temp2->pnr_no);
        printf("\t\t :::  WaitList No. : %d                                 \t\t     :::\n",temp2->wl);
        printf("\t\t :::  Wish you a Happy and safe journey !!!               \t     :::\n");
        printf("\t\t :::                                                                 :::\n");
        printf("\t\t :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        flag=1;
        }
        temp2=temp2->next;

    }
    if(flag==0)
    {
        printf("\n PNR INVALID...\n\n");
    }
}

#include"struct.h"
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void delete_node(struct passenger **head_ref,int pnr)
{
    struct passenger *temp=(*head_ref);
    struct passenger *prev;
    printf("\n okay.....\n");

    if((temp!=NULL) && ((temp->pnr_no)==pnr))
    {
        (*head_ref)=temp->next;
        free(temp);
        printf("\n Booking cancelled ----....\n");
    }
    else
    {
        prev=temp;
        temp=temp->next;
        while(temp!=NULL)
        {
            if(temp->pnr_no==pnr)
            {
                prev->next=temp->next;
                free(temp);
                temp=NULL;
                printf("\n Booking cancelled ----....\n");
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        temp=(*head_ref);
        while(temp!=(prev->next))
        {
            if(temp->seat_no!=NULL)
                (temp->seat_no)--;
            else
                (temp->wl)--;
            temp=temp->next;
        }
    }
}

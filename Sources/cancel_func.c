#include"struct.h"
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void upgrade(struct passenger **head1_ref,struct passenger **head2_ref,int pnr,int *count_s)
{
    struct passenger *temp1=(*head1_ref);
    struct passenger *temp2=(*head2_ref);
    struct passenger *prev,*temp;
    printf("\n OKAY.......\n");

    if(temp2==NULL)
        return;
    else if(temp2->next==NULL)
    {
        (*head2_ref)=temp2->next;
        temp2->next=(*head1_ref);
        (*head1_ref)=temp2;
        temp2->seat_no=3;
        (*count_s)++;
    }
    else
    {
        while(temp2->next!=NULL)
        {
            prev=temp2;
            temp2=temp2->next;
        }
        prev->next=temp2->next;
        temp2->next=(*head1_ref);
        (*head1_ref)=temp2;
        temp2->seat_no=3;

        temp=(*head2_ref);
        while(temp!=NULL)
        {
            (temp->wl)--;
            temp=temp->next;
        }
        (*count_s)++;
        printf("\n UPGRADED....\n");
    }
}

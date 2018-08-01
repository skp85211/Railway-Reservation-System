#include"struct.h"
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void booking(struct passenger **head1_ref, struct passenger **head2_ref, int *count_s, int *count_w, int *pnr)
{
    struct passenger *temp1=(struct passenger*)malloc(sizeof(struct passenger));
    struct passenger *temp2=(struct passenger*)malloc(sizeof(struct passenger));
int c;
   b1: if((*count_s)<3)
    {
        printf("\n Seats available....");
        printf("\nEnter Name of passenger : ");
        scanf("%s",(temp1->name));
        printf("\n Enter age of passenger : ");
        scanf("%d",&(temp1->age));
       b2: printf("\n Enter gender of passenger (M/F) : ");
        scanf(" %c",&(temp1->gender));
       // if(((temp1->gender)!='M')||((temp1->gender)!='m')||((temp1->gender)!='F')||((temp1->gender)!='f'))
       // {
         //   printf("\n INVALID INPUT");
           // goto b2;        }
             //   else{
        temp1->wl=0;
        (*count_s)++;
        (*pnr)++;
        temp1->seat_no=(*count_s);
        temp1->pnr_no=(*pnr);
        temp1->next=(*head1_ref);
        (*head1_ref)=temp1;
        system("cls");
        printf("\n\n\n BOOKING SUCCESSFULL......");
        printf("\n\n Your allotted PNR-NUMBER is %d",temp1->pnr_no);
        printf("\n Use it for further enquiry..");
        system("pause");}
    //}
    else if(((*count_s)>=3) && ((*count_w)<3))
    {
        printf("\n\n Seats are full, if you want to continue with waiting list enter 1 else 2 : ");
        scanf("%d",&c);
        if(c==1)
        {
        printf("\nEnter Name of passenger : ");
        scanf("%s",(temp2->name));
        printf("\n Enter age of passenger : ");
        scanf("%d",&(temp2->age));
        printf("\n Enter gender of passenger (M/F) : ");
        scanf(" %c",&(temp2->gender));
        temp2->seat_no=0;
        (*count_w)++;
        (*pnr)++;
        temp2->wl=(*count_w);
        temp2->pnr_no=(*pnr);
        temp2->next=(*head2_ref);
        (*head2_ref)=temp2;
        printf("\n Waiting seat booked successfully..");
        printf("\n\n Your allotted PNR-NUMBER is %d",temp2->pnr_no);
        printf("\n Use it for further enquiry..");
        system("pause");
        }
        else if (c==2)
        {
            printf("\n Thank You :) ");
            system("pause");
        }
        else{printf("\n INVALID CHOICE...\n");
            system("pause");}
    }
else{
    printf("\n\n Seat and waiting list both are full....\n\n REGRET....");
    system("pause");
}
}

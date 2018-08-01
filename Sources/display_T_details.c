#include"struct.h"
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void display_train(struct passenger **head_ref1,struct passenger **head_ref2)
{
    int c_s=0,c_w=0;
    struct passenger *temp1=(*head_ref1);
    struct passenger *temp2=(*head_ref2);
    while((temp1)!=NULL)
    {
        c_s++;
        temp1=temp1->next;
    }
    while((temp2)!=NULL)
    {
        c_w++;
        temp2=temp2->next;
    }
    printf("\n\n\t\tTrain current status......");
    printf("\n\n\t\tTotal seats in train is 3");
    printf("\n\n\t\tNo. of Seats reserved : %d",c_s);
    printf("\n\t\tNo. of Seats available : %d",3-c_s);
    printf("\n\n\t\tNo. of waitlist ticket booked : %d",c_w);
    printf("\n\t\tNo. of waitlist ticket available : %d\n",3-c_w);
    system("pause");

}

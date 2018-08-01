#include"struct.h"
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int check(struct passenger **head_ref1, struct passenger **head_ref2,int pnr)
{
    struct passenger *temp1=(*head_ref1);
    struct passenger *temp2=(*head_ref2);
    int flag=0;
    while(temp1!=NULL)
    {
        if(temp1->pnr_no==pnr)
        {
            flag=1;
        }
        temp1=temp1->next;
    }

    while(temp2!=NULL)
    {
        if(temp2->pnr_no==pnr)
        {
            flag=2;
        }
        temp2=temp2->next;
    }
    return flag;
}

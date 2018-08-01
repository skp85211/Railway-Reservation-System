#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
struct passenger
{
    char name[20],gender;
    int age,seat_no,wl;
    int pnr_no;
    struct passenger *next;
};

#endif // STRUCT_H_INCLUDED

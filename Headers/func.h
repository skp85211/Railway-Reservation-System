#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

void booking(struct passenger **head1_ref, struct passenger **head2_ref, int *count_s, int *count_w,int *pnr);
void display_reservation(struct passenger **head_ref1,struct passenger **head_ref2,int pnr);
void display_train(struct passenger **head_ref1,struct passenger **head_ref2);
void upgrade(struct passenger **head1_ref,struct passenger **head2_ref,int pnr);
int check(struct passenger **head_ref1, struct passenger **head_ref2,int pnr);
void delete_node(struct passenger **head_ref,int pnr);

#endif // FUNC_H_INCLUDED

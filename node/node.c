#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *next;
}NODE;

int main(void)
{
    int i=0;
    NODE *head=NULL, *pf, *pb;

    for(i=0; i<=5; i++)
    {
        pb=(NODE*) malloc(sizeof(NODE));

        if(i==1) 
        {
            pf=head=pb;
        }
        else
        {
            pf->next=pb;
            pf->data=i;
            pb->next=NULL;
            pf=pb;
        }
    }

    while(head->next != NULL)
    {
      printf("%d\n", head->data);
      head=head->next;
    }

    return 0;
}

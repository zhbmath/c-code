#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
  int data;
  struct node *next;
}NODE;

static int create_node(NODE** head);

int create_node(NODE** head)
{
    int i=0;
    NODE  *pf, *pb;

    for(i=0; i<=5; i++)
    {
      pb = (NODE*)malloc(sizeof(NODE));

      if (NULL==pb)
      {
          exit(1);
          printf("allocate failed");
      }

      memset(pb, 0, sizeof(NODE));

      if(i==0)
      {
          pf=*head=pb;
          pb->data=i;
          pb->next=NULL;
      }
      else
      {
          pf->next=pb;
          pf->data=i;
          pb->next=NULL;
          pf=pb;
      }
    }

    return 0;
}

int main(void)
{
    NODE *head=NULL;
    create_node(&head);

    while(head->next != NULL)
    {
      printf("%d\n", head->data);
      head=head->next;
    }
}

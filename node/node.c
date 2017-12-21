#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int id;
  struct node *next;
}NODE;

int main(void)
{
  int i=0;
  NODE *head=NULL, *pf, *pb;

  for(i=1; i<=3; i++)
  {
      pb=(NODE*) malloc(sizeof(NODE));

      if(i==1) 
      {
          pf=head=pb;
      }
      else
      {
          pf->next=pb;
          pf->id=i;
          pb->next=NULL;
          pf=pb;
      }
  }

  while(head->next != NULL)
  {
    head++;
    printf("%d\n", head->id);
  }

  return 0;
}

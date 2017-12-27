#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node * prev;
    struct node * next;
} NODE;

int main() {
   int i;
   NODE *head, *tail, *p;
   
   for(i=1; i<=10; i++)
   {
       NODE *p = (NODE*) malloc(sizeof(NODE));

       if(i==1)
       {
           head=tail=p; 
           head->prev=NULL;
           tail->next=NULL;
       }
       else
       {
          p->data=i;
          p->next=NULL;
          p->prev=tail;
          tail->next=p;
          tail=p;
       }
   }

   while (head->next != NULL)
   {
      head = head->next;
      printf("%d\n", head->data);
   }

   while (tail->prev != NULL)
   {
      printf("%d\n", tail->data);
      tail = tail->prev;
   }

   return 0;
}

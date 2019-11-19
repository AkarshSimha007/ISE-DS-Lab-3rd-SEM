#include<stdio.h>
#include<stdlib.h>

struct node
{ int data;
  struct node *next;
};
struct node *first=NULL;
struct node *ptr,*cur=NULL;

void create()
{
  ptr=(struct node *)malloc(sizeof(struct node));
  printf("Enter the data\n");
  scanf("%d",&ptr->data);
     if(first==NULL)
     { ptr->next=NULL;
	first=ptr;
     }
   else 
  { cur=first;
     while(cur->next!= NULL)
      { cur=cur->next;
      }
      cur->next=ptr;
      ptr->next=NULL;
  }
}

void delany()
{ if(first==NULL)
   return;
  struct node *prev=first;
  struct node *node=first->next;
  while(prev!=NULL&&node!=NULL)
 { prev->next=node->next;
   free(node);
   prev=prev->next;
   if(prev!=NULL)
   node=prev->next;
 }
}

int main()
{  int a,i;
	printf("Enter the number of nodes\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
  	  create();
	}
 printf("Original list is\n");
  ptr=first;
  while(ptr->next!=NULL)
 { printf("%d\n",ptr->data);
   ptr=ptr->next;
 } printf("%d",ptr->data);
printf("\n");


      delany();
      ptr=first;
     printf("Output is\n");
  while(ptr->next!=NULL)
 { printf("%d\n",ptr->data);
   ptr=ptr->next;
 }
 printf("%d",ptr->data);
printf("\n");
}




	


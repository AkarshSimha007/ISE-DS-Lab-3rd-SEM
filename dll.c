#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *llink;
  struct node *rlink;
};
struct node *start=NULL;
struct node *ptr,*temp;
 

void insert_beg()
{
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data\n");
  scanf("%d",&temp->data);
  temp->llink=NULL;
  temp->rlink=NULL;
   if(start==NULL)
      { start=temp;
      }
	else
	{ temp->rlink=start;
	  start->llink=temp;	
	  start=temp;
	}
}


void insert_end()
{ 
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data\n");
  scanf("%d",&temp->data);
  temp->llink=NULL;
  temp->rlink=NULL;
   if(start==NULL)
      { start=temp;
      }
   else
  { ptr=start;
    while(ptr->rlink!=NULL)
	{ptr=ptr->rlink;
	}
    ptr->rlink=temp;
    temp->llink=ptr;
    temp->rlink=NULL;
  }
}
 
void del_beg()
{ if(start==NULL)
   printf("The list is empty\n");
   else
  { ptr=start;
    start=ptr->rlink;
	free(ptr);
  }
}

  void delete_end()
   { if(start==NULL)
       { printf("The list is empty\n");
       }
      else
     { ptr=start;
	while(ptr->rlink!=NULL)
	{ ptr=ptr->rlink;
	}
       ptr->llink->rlink=NULL;
	free(ptr);
     }
  }


void display()
{ struct node *temp=start;  
 if(temp==NULL)
   printf("The list is empty\n");
    else
    { while(temp!=NULL)
	{printf("%d--->",temp->data);
		temp=temp->rlink;
        }
    }
  printf("\n");
}
      


 void main()
{ int ch;
    while(1)
   { printf("1.Insert at first\n2.Insert at end\n3.Delete at begining\n4.Delete at end\n5.Display\n6.Exit\n");
     scanf("%d",&ch);
      switch(ch)
	{ case 1:insert_beg();break;
	  case 2:insert_end();break;
          case 3:del_beg();break;
          case 4:delete_end();break;
	  case 5:display();break;
	  case 6:exit(0);
	  default:printf("Entered choice not valid\n");
		   break;
        }
   }
}

    




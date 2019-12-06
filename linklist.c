//Circulat Linked List
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 struct node
{
	int data;
	struct node *link;
};
struct node *temp,*last=NULL,*ptr;

void insert_end()
{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter Data:");
scanf("%d",&temp->data);
temp->link=NULL;
 if(last==NULL)
  {
	last=temp;
	last->link=last;
  }
 else
   {temp->link=last->link; 
    last->link=temp;
    last=temp;
   }
}


void insert_beg()
{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter Data:");
scanf("%d",&temp->data);
temp->link=NULL;

	if(last==NULL)
	 {last=temp;
	  last->link=last;
         }

	else
	{
	 temp->link=last->link;
	 last->link=temp;
	}
}

void delete_beg()
{ if(last==NULL)
   printf("Empty\n");
  else
  {
    ptr=last->link;
    last->link=last->link->link;
printf("NODE deleted successfully\n");
    free(ptr);
  }
}


void delete_end()
{  if(last==NULL)
	printf("Empty\n");
   else 
	{ ptr=last->link;
 	   while(ptr->link!=last)
	     { ptr=ptr->link;
             }

	ptr->link=last->link;
printf("NODE deleted successfully\n");
	free(last);
	last=ptr;
}
}


void display()  
{  
    struct node *ptr;  
    ptr=last;  
    if(last == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr -> link != last)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> link;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  

 

void main()

{   int ch;
    printf("\n 1.Insertion at end \n 2.Insertion at beginning \n 3.Deletion at beginning\n 4.Deletion at end");


    while (1)

    {

        printf("\n Enter your choice:");

        scanf("%d", &ch);

        switch(ch)

        {

        case 1:insert_end();
		break;

        case 2:insert_beg();
		break;

        case 3:delete_beg();
		break;

        case 4:delete_end();
		break;

	case 5:display();
		break;
        default:exit(0);

        }

    }

}



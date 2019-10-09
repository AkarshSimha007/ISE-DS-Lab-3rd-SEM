#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int q[SIZE],front=-1,rear=-1,i,ele,ditem;

void enqueue()
{
    if(rear==SIZE-1)
    printf("Queue is Full\n");
    else
    { printf("Enter the Element to be inserted:");
      scanf("%d",&ele);
    }
      if(front==rear==-1)
        front=rear=0;
      else 
        rear++;
       q[rear]=ele;
       printf("\n");
    
}


void dequeue()
{ if(front==-1)
   printf("Queue is empty\n");
   else
  { ditem=q[front];
   printf("Deleted Element is %d\n",ditem); 
   if(front==rear)
   front=rear=-1;
   else
   front++;
  }
}

void display()
{
    if(rear==-1)
    printf("Queue is empty\n");
    else
    for(i=front;i<=rear;i++)
    printf("%d\t",q[i]);
}



void main()
{ int ch;
    while(1)
    {
        printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:enqueue();
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
            case 4:exit(0);
                break;
            default:printf("Invalid option chosen\n");
        }
            
        
    }
}

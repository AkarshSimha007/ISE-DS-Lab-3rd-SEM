#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *llink;
  struct node *rlink;
};
struct node *ptr,*root=NULL,*parent,*temp;
 void create()
{ temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data\n");
  scanf("%d",&temp->data);
  temp->llink=NULL;
  temp->rlink=NULL;
if(root==NULL)
  root=temp;
 else
 { ptr=root;
   while(ptr!=NULL)
  {parent=ptr;
   if(ptr->data==temp->data)
    {printf("Node exists\n");
      return;
    }
   else
   { if(temp->data<ptr->data)
     ptr=ptr->llink;
     else
     ptr=ptr->rlink;
   }
 if(parent->data<temp->data)
    parent->rlink=temp;
   else
    parent->llink=temp;
  }
 }
}

void inorder(struct node*tree)
{ if(tree!=NULL)
  { inorder(tree->llink);
    printf("%d",tree->data);
    inorder(tree->rlink);
  }
}

void main()
{ int ch;
  
   while(1)
  { printf("1.Create Node\n2.Display\n3.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
   switch(ch)
 { case 1:create();break;
   case 2:inorder();break;
   case 3:exit(0);
 }
}
}









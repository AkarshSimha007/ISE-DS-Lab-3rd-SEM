#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 30
char s[max],infix[max],postfix[max],ch,temp;
int top=-1,i=0,j=0;


void push(char ch)
{
 top=top+1;
 s[top]=ch;
}

char pop()
{
char temp;
temp=s[top--];
return temp;
}

int isoperator(ch)
{ if(ch=='+'||ch=='*'||ch=='-'||ch=='/'||ch=='^')
	return 1;
   else return 0;
}

int precedence(char ch)
{ switch(ch)
 { case '^':return 4;
	     break;
   case '*':
   case '/':return 3;
	     break;
   case '+':
   case '-': return 2;
	      break;
   default: return 1;
 }
}


void main()
{ printf("Enter the string\n");
    gets(infix);
  while(infix[i]!='\0')
   { ch=infix[i];
     if(isalpha(ch))
      { postfix[j]=ch;
        j++;
      }
    else if(ch=='(')
     { push(ch);
     }
    else if(isoperator(ch)==1)
     {if(ch!='^')
       {while(top!=-1&&(precedence(s[top])>=precedence(ch)))
		{postfix[j]=pop();
			j++;
                }
       }
		push(ch);
     }
	
     else if(ch==')')
	{ while(s[top]!='(')
	  {postfix[j]=pop();
		j++;
	  }
    temp=pop();
        }
    else printf("Invalid character\n");
	i++;
    }
  while(top>-1)
  { postfix[j]=pop();
	j++;
  } 
   postfix[j]='\0';
   printf("postfix expression is:%s\n",postfix);
}


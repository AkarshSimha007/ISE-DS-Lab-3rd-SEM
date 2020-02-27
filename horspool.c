#include<stdio.h>
#include<string.h>
int  t[200];
void shifttable(char p[])
{ 
int i,j; 
  
  int m=strlen(p);
 for (i=0;i<128;i++)
  t[i]=m;
 for(j=0;j<m-1;j++)
  t[p[j]]=m-1-j;
}

int StringMatching(char p[],char s[])
{   int i,j,k;
    int n=strlen(p);
    int m=strlen(s);
    
    
	i=m-1;
   while(i<n)
  {
    k=0;
    while((k<=m-1)&&(p[i-k]==s[m-1-k]))
     k=k+1;
     if(k==m)
      return (i-m+1);
     else
       i=i+t[p[i]];
  }
    return -1;
}


void main()
{ char p[128],s[128];
  printf("Enter text and search string\n");
  gets(p);
  gets(s);
  shifttable(p);
  int pos=StringMatching(p,s);
if(pos==-1)
  {printf("String not Found\n");
 
  }
else {printf("String found\n");
     printf("%d\n",pos+1);
  }
}


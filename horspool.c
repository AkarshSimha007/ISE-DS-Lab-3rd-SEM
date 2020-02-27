#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int  t[200];
void shifttable(char original[])
{ 
int i,j; 
  
  int m=strlen(original);
 for (i=0;i<128;i++)
  t[i]=m;
 for(j=0;j<m-1;j++)
  t[original[j]]=m-1-j;
}

int StringMatching(char original[],char search[])
{   int i,j,k;
    int n=strlen(original);
    int m=strlen(search);
    
    
	i=m-1;
   while(i<n)
  {
    k=0;
    while((k<=m-1)&&(original[i-k]==search[m-1-k]))
     k=k+1;
     if(k==m)
      return (i-m+1);
     else
       i=i+t[original[i]];
  }
    return -1;
}


void main()
{ char original[128],search[128];
  printf("Enter original text"); 
  gets(original);
printf("Enter and search string\n");
  gets(search);
  shifttable(search);
  int pos=StringMatching(original,search);
if(pos==-1)
  {printf("String not Found\n");
 
  }
else {printf("String found\n");
     printf("%d\n",pos+1);
  }
}

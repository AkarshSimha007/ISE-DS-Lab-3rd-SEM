#include<stdio.h>
void toh(int n,char source,char temp,char dest)
 { if(n==1)
    {printf("Move disc from %c to %c\n",source,dest);
    }
else
    { toh(n-1,source,dest,temp);
       printf("Move disc from %c to %c\n",source,dest);
      toh(n-1,temp,source,dest);
    }
} 

void main()
{ int n;
	printf("Enter the number of discs\n");
	scanf("%d",&n);
   toh(n,'A','B','C');
}


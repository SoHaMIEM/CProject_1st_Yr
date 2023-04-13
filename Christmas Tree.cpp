#include <stdio.h>
#include <conio.h>
int main()
{
     	int n,i,j,k,l,m,s,h;
    	printf("Enter no of leaves");
    	scanf("%d",&l);
    	printf("Enter no of legs");
    	scanf("%d",&s);
    	for(i=1;i<=l;i++)
    	{
			if(i!=l)
			{
		      for(j=1;j<l-i+1;j++)
		      {
			   printf(" ");
		      }
		      if(i!=1)
			  {  
		          printf("*");
		      }
		      for(k=1;k<i;k++)
		      {
		          printf(" ");
		      }
		      for(m=2;m<i;m++)
		      {
		          printf(" ");
		      }
		      printf("*");
		      for(n=1;n<l-i+1;n++)
		      {
		          printf(" ");
		      }
		    }
	        else
		    {
		        for(h=1;h<l*2;h++)
		        {
		            printf("*");
		        }
		    }
	        printf("\n");   
        }
		for(i=1;i<=s;i++)
		{
			for(j=1;j<(l*2-1)/2;j++)
			{
				printf(" ");
			}
			printf("|");
			if(i!=s)
			{
			printf(" ");
		    } 
			else
			{
				printf("_");
			}
			printf("|");
			printf("\n"); 
	    }
}



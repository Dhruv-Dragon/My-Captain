#include<stdio.h>

int main()
{
	
	int x,y,n;
	
	printf("Number of Rows:  ");
	
	scanf("%d",&n );
	
	for(x=0;x<n;x++)
	{
		for(y=0;y<=x;y++)
		
		{
			printf("01");
		}
		printf("\n");	
  }

}
 

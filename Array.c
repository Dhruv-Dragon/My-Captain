#include <stdio.h>

int main()

{
  int arr1[3][3],x,y,sum;
  
       printf("Input elements in the matrix:\n");
       
  for(x=0;x<3;x++)
  {
      for(y=0;y<3;y++)
      {
	      printf("\nElement - [%d],[%d]: ",x,y);
	      
	      scanf("%d",&arr1[x][y]);
      }
  }  
 
 printf("\nThe Matrix is: \n");
 
  for(x=0;x<3;x++)
  {
      printf("\n");
      
      for(y=0;y<3;y++)
      
	   {
      	 printf("%d\t",arr1[x][y]); 
	   }    
  }
  
  {
  	sum=sum+arr1[0][0]+arr1[1][1]+arr1[2][2];
  }
    
    printf("\n\nSum of all diagonal elements: %d",sum);
    
}

#include <stdio.h>

int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;

    printf("Enter any two numbers to find Lcm.\n\nFirst Number:");
    
    scanf("%d", &num1);
    
    printf("\nSecond Number:");
   
    scanf("%d", &num2);
   
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("\nLCM of %d and %d = %d", num1, num2, LCM);
    
    return 0;
}
int lcm(int x, int y)
{
    static int multiple = 0;
    
    multiple += y;
    
  
    if((multiple % x == 0) && (multiple % y == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(x, y);
    }
}

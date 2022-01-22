#include<stdio.h> 

 int sum(int n,int s); 
 int main() 
 { 
   int n,s=0; 
   printf("Input number whose Sum of Digits is needed: "); 
   
   scanf("%d",&n);   
   
 printf("\nSum of Digits: %d",sum(n,s)); 
   
   return 0; 
    
 } 
int sum(int n,int s) 
 { 
   int x,y; 
   y=n%10; 
   x=n/10; 
 s=s+y; 
   if(x!=0) 
   sum(x,s); 
   else  
   return s; 
 }

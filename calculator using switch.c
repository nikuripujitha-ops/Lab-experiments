# include<stdio.h>
#include<math.h>
int main()
{
int ch; float a,b;
 printf (" enter2 numbers ");
 scanf("%f%f",&a,&b);
 printf ("1.add 2.sub 3.mul 4.div");
 scanf("%d",&ch);
 switch (ch)
 {
 case1:printf("result=%.2f",a+b);break;
 case2:printf("result =%.2f",a-b);break;
 case3:printf(" result=%.2f",a*b);break;
 case4:if(b==0) printf ("division by zero is not pass ");
 default:printf("invalid option ");
 }
 
 
 
  

 
}   
  
   
    
   
     
     
       
     
   
    
   
   
  
  
 
  
  






    
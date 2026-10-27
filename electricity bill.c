# include<stdio.h>
int main()
{
 float units,bill=0;
 printf ("enter units");
 scanf("%f",& units);
 if(units<=100)bill=units*1.50;
 else if(units<=200)bill=100*1.50+(units -100)*2.50;
 else if(units<=500)bill=100*1.50+100*2.50+(units-200);
 else bill=100*1.50+100*2.50+300*4.00+(units -500);
 printf ("bill=%2f",bill);
 
 
 
 
  

 
}   
  
   
    
   
     
     
       
     
   
    
   
   
  
  
 
  
  






    
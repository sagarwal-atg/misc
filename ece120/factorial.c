/*
 *	
 *  
 Shubhankar Agarwal sagrwl11
 Factorial!: Computes the factorial of a positive integer
 *
 */

#include <stdio.h>

#include <stdio.h>
  
int main()
{  int r1,r2,r3,i;
   double eq_res[17]
   
  
   for (r1 = 0; r1 <= 30000; r1++)
   {
       for (r2 = 0; r2 <= 30000; r2++)
       {    
           for (r3 = 0; r3 <= 30000; r3++)
           {
               
               eq_res[0] = r1;
                eq_res[1] = r2;
                eq_res[2] = r3;
                eq_res[3] = r1+r2+r3;
                eq_res[4] = (r1*r2*r3)/(r1*r2+r2*r3+r1*r3);
                eq_res[5] = r1+r2;
                eq_res[6] = r1+r3;
                eq_res[7] = r2+r3;
                eq_res[8] = (r1*r2)/(r1+r2);
                eq_res[9] = (r1*r3)/(r1+r3);
                eq_res[10] = (r2*r3)/(r2+r3);
                eq_res[11] = r1+ (r2*r3)/(r2+r3);
                eq_res[12] = r2 + (r1*r3)/(r1+r3);
                eq_res[13] = r3 + (r1*r2)/(r1+r2) ;
                eq_res[14] = (r1 *(r2+r3) )/(r1+r2+r3);
                eq_res[15] = (r2 * (r1+r3))/ (r1+r2+r3);
                eq_res[16] = (r3 * (r1+r2))/ (r1+r2+r3);
               
                for( i = 0 ; i < 17 ; i++)
                {   printf("%d %d  %d\n" , r1 ,r2 , r3);
                    printf("%lf\t " , eq_res[i]);
                }
               
               }
           }
       }
 printf("\n");
 reutrn 0; 
    }
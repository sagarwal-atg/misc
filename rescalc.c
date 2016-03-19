#include <stdio.h>
#include <stdlib.h>

int main()
{
 double eq_res[17] ;
 double *final_res;
 double r1[10] = {1, 100 , 1000 , 2500 , 5000, 10000, 15000, 20000 , 25000, 30000};
 double r2[10] = {1, 100 , 1000 , 2500 , 5000, 10000, 15000, 20000 , 25000, 30000};
 double r3[10] = {1, 100 , 1000 , 2500 , 5000, 10000, 15000, 20000 , 25000, 30000};
 final_res = ( double* )malloc (1000 * sizeof( double ) );

int count = 0;
 for( int i = 0; i < 10; i++)
{
     for (int j = 0; j < 10 ; j++)
 {
         for( int k =0 ; k < 10; k++)
    {
            eq_res[0] = r1[i];
            eq_res[1] = r2[j];
            eq_res[2] = r3[k];
            eq_res[3] = r1[i]+r2[j]+r3[k];
            eq_res[4] = (r1[i]*r2[j]*r3[k])/(r1[i]*r2[j]+r2[j]*r3[k]+r1[i]*r3[k]);
            eq_res[5] = r1[i]+r2[j];
            eq_res[6] = r1[i]+r3[k];
            eq_res[7] = r2[j]+r3[k];
            eq_res[8] = (r1[i]*r2[j])/(r1[i]+r2[j]);
            eq_res[9] = (r1[i]*r3[k])/(r1[i]+r3[k]);
            eq_res[10] = (r2[j]*r3[k])/(r2[j]+r3[k]);
            eq_res[11] = r1[i]+ (r2[j]*r3[k])/(r2[j]+r3[k]);
            eq_res[12] = r2[j] + (r1[i]*r3[k])/(r1[i]+r3[k]);
            eq_res[13] = r3[k] + (r1[i]*r2[j])/(r1[i]+r2[j]) ;
            eq_res[14] = (r1[i] *(r2[j]+r3[k]) )/(r1[i]+r2[j]+r3[k]);
            eq_res[15] = (r2[j] * (r1[i]+r3[k]))/ (r1[i]+r2[j]+r3[k]);
            eq_res[16] = (r3[k] * (r1[i]+r2[j]))/ (r1[i]+r2[j]+r3[k]);

            int a;
            for(int i2 = 0; i2 < 17; i2++)
            {
               for(int j2 =0; j2 < 16; j2++)
               {   if (eq_res[i2] > eq_res[j2])
                    {
                         a =  eq_res[i2];
                        eq_res[i2] = eq_res[j2];
                        eq_res[j2] = a;
                    }
                }
            }
            double res_diff[17];
            for(int i1 = 0 ; i1 < 16 ; i1++)
           {
              res_diff[i1] = eq_res[i1+1] - eq_res[i1];

           }
             for(int i3 = 0; i < 17; i3++)
             {
                for(int j3 =0; j < 16; j3++)
                {   if (res_diff[i3] > res_diff[j3])
                     {
                         int b =  res_diff[i3];
                         res_diff[i3] = res_diff[j3];
                         res_diff[j3] = b;
                     }
                 }
             }
             int sum = 0;
             for(int i4 = 0; i4 < 17 ; i4++)
             {
               sum += res_diff[i4];

             }

              sum = (sum / 17 );



              final_res[count] = sum;
              printf("%lf    and     %d\n", final_res[count] , count);
              count++;

    }
  }
 }
 for(int i5 = 0; i5 < 1000; i5++)
 {
    for(int j5 =0; j5 < 999; j5++)
    {   if (final_res[i5] > final_res[j5])
         {
             int c =  final_res[i5];
             final_res[i5] = final_res[j5];
             final_res[j5] = c;
         }
     }
 }
 printf("--------------------\n");
 printf("%lf\n",final_res[0] );
 free(final_res);
 return 0;
}

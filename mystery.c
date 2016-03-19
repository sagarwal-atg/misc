/* mystery.c */
#include <stdio.h>

int main () {
	int x = 0 ,y = 0,z = 0,f = 0;
    printf("\nTruth Table\n");
    printf("x y z   f\n");
    
    for(x =0; x<=1 ; x++)
    {
        for(y =0; y<=1 ; y++)
        {
            for(z =0; z<=1 ; z ++)
            {
                f = ((!x && y && !z));
                printf("%d %d %d   %d\n",x, y , z, f);
            }
        }
    }
	return 0;
	}

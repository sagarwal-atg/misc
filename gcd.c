#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int num[n];
    for(int y = 0; y < n; y++){
      num[y]= 0;
    }
for(int i= 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
for(int x = 0; x < n;x++){
        while(num[x] != 0)
            {   int num2 = num[x];
                printf("%.0lf",fmod(num2,2));
                num[x] = num[x]/2;
            }
     printf("\n");
    }
    return 0;
}

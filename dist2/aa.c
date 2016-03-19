
#include <stdio.h>
#include <stdlib.h>

int derp(x, n){
if (n == 0)
return 1;
if (n % 2 == 0)
return derp(x^2, n/2);
return x * derp(x^2, (n-1)/2);
};

int main {
 printf("%d\n",derp(2,12);
return 0;
}

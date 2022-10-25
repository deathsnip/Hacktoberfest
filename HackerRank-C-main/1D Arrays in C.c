#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int a;
    scanf("%u",&a);
    unsigned  int b[a],sum=0;
    for (int i=0; i<a; i++) {
        scanf("%u",&b[i]);
        sum+=a[i];
    }
    printf("%u",sum);  
    return 0;
}

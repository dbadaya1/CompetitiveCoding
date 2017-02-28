#include <stdio.h>

unsigned long long mod(unsigned long long n) {
	int c = 1,i = 0;
	while(i<n) {
		i++;
		c = (c*2) % 1000000007;
	}
	return c;
}
 

 unsigned long long modular_pow(unsigned long long exponent) {
    unsigned long long result = 1;
	unsigned int base = 2;
    while (exponent > 0) {
        if (exponent % 2 == 1)
           result = (result * base) % 1000000007;
        exponent = exponent >> 1;
        base = (base * base) % 1000000007;
    }
    return result;
  }
 int main() {
unsigned int cases;
 scanf("%d",&cases);
 int i;
 unsigned long long n,array[cases];
 for(i = 0;i<cases;i++) {
 	scanf("%llu",&n);
 	if(n == 1) {
 		array[i] = 1;
 		continue;
 	}
 	if(n == 2) {
 		array[i] = 3;
 		continue;
 	}
 	//result = (n+1)*(2<<n-3);
 	array[i] = (((n+1)%1000000007)*modular_pow(n-2))%1000000007;
 }
 for(i = 0;i<cases;i++) {
 	 printf("Case %d: %d\n",i+1,array[i]);

 }
 return 0;
 }
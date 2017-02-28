#include <stdio.h>

unsigned long long modular_pow(unsigned long long base,unsigned long long exponent) {
    unsigned long long result = 1;
	//unsigned long long base = 2;
    while (exponent > 0) {
        if (exponent % 2 == 1)
           result = (result * base) % 1000000007;
        exponent = exponent >> 1;
        base = (base * base) % 1000000007;
    }
    return result;
  }

int main() {
	unsigned int n,l;
	//unsigned long long array[1000];
	while(1) {
	scanf("%d %d",&n,&l);
	if(n || l) {
	//unsigned long long result = ((n*(pow(n,l) - 1))/(n - 1))%1000000007;
	unsigned long long result = modular_pow(n-1,1000000005)*(modular_pow(n,l+1) - n%1000000007)%1000000007;
		printf("%llu\n",result);

	}
	else {
		break;
	}
}
	return 0;
}
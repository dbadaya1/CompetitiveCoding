#include <stdio.h>
#include <string.h>

int isAlpha(char a) {
	return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z');
}
int main() {
		char a[] = "te%$st&";
		int front = 0,end = strlen(a) - 1;
		int i = 0,temp;
		
		
		while(front < end) {

			if(isAlpha(a[front]) && isAlpha(a[end])) {
				temp = a[front];
				a[front] = a[end];
				a[end] = temp;
				front++;
				end--;
				//printf("here");
			}
			
				if(!isAlpha(a[front]))
					front++;
				 if(!isAlpha(a[end]))
					end--;
			
//			printf("front = %d end = %d",front,end);

		}
		
		
		for(i = 0;i<strlen(a);i++) {
			printf("%c",a[i]);
		}
		return 0;
}
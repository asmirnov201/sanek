#include <stdio.h>
int main() {
	int n, i = 1;
	printf("Enter a number:");
	scanf("%d",&n);
	while (i <= 10) {
	printf("%d x %d = %d\n", n, i, n * i);	
	i = i + 1;	
	}
	return 0;
}

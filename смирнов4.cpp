#include <stdio.h>
int main () {
int n[100];
	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; i = i + 1) {
		scanf("%d", &n[i]);
	}
   int sum = 0;
	for (int i = 0; i < q; i = i + 1) {
    sum = sum + n[i];
	}
		printf("summa: %d\n", sum);
		return 0;
		

	
	
	
	
	
	
	
	
}

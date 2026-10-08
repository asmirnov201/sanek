#include <stdio.h>
int main () {
	int n[100];
	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; i = i + 1) {
		scanf("%d", &n[i]);
	}
	int max = n[0];
	for (int i = 1; i < q; i = i + 1) {
 if (n[i] > max) {
	 max = n[i];
	 
 }
	}
	printf("summa: %d\n", max);
	return 0;
}

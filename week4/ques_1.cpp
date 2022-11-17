#include <stdio.h>
int main(){
	int n, m, f1=1, f2=0, f = 1; 
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		f2+=i;
		f1=f1*i;
	}
	printf("F1(n) = %d\nF2(n) = %d\n", f1, f2);
	printf("Enter m: ");
	scanf("%d", &m);
	for(int i = 1; i <= m; i++){
		f = f * n;
	}
	printf("Result: %d", f);
	return 0;
	
}

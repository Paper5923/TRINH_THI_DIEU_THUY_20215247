#include <stdio.h>
int main(){
	int e = 12, b = 12, k, i, j;
	while(e--) printf("-");
	printf("BANG CUU CHUONG");
	while(b--) printf("-");
	printf("\n");
	printf("%c", 201);
	for( k = 1; k <= 36; k++){
		if( k==13 || k==25){
			printf("%c", 203);
		}
		
		printf("%c", 205);
		
	}
	int a[10][10];
	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
			a[j][i] = i*j;
	    }
	}
	printf("%c", 187);
	
	// in tung hang bang 1 2 3
		printf("\n");
	for(i=1; i<=9; i++){
		for( j=1; j<=3; j++){
			printf("%c %d x %d = %-2d ", 186, j, i , a[j][i] );
		}
		printf("%c\n", 186);
	}
	for(i=1; i<=3; i++){
		if( i==1) printf("%c", 204);
		else printf("%c", 206);
		int d=12;
		while(d--) printf("%c", 205);
	}
	printf("%c", 185);
//	for(int i=1; i<=12*3; i++){
//		if( i==13 || i==25){
//			printf("%c", 203);
//		}
//		
//		printf("%c", 205);
//		
//	}
printf("\n");
	for(i=1; i<=9; i++){
		for(j=4; j<=6; j++){
			printf("%c %d x %d = %-2d ", 186, j, i , a[j][i] );
		}
		printf("%c\n", 186);
	}
	for(i=1; i<=3; i++){
		if( i==1) printf("%c", 204);
		else printf("%c", 206);
		int d=12;
		while(d--) printf("%c", 205);
	}
	printf("%c", 185);
	
	
	/// in 7 8 9
	printf("\n");
	for(i=1; i<=9; i++){
		for( j=7; j<=9; j++){
			printf("%c %d x %d = %-2d ", 186, j, i , a[j][i] );
		}
		printf("%c\n", 186);
	}
	for(i=1; i<=3; i++){
		if( i==1) printf("%c", 200);
		else printf("%c", 202);
		int d=12;
		while(d--) printf("%c", 205);
	}
	printf("%c", 188);
}

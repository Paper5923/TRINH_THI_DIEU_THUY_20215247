#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float delta = b * b - 4 * a * c;
	if( delta < 0) printf("No solution\n");
	else if( delta == 0) printf("Answer: x = %.2f", -b/(2 * a));
	else 
	{ 
	    float cdelta = sqrt(delta);
	    printf("Answer: x1 = %.2f, x2 = %.2f", ( -b - cdelta)/( 2 * a),  ( -b + cdelta)/( 2 * a)  );
    }
}

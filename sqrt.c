#include <stdio.h>
#include <math.h>

int main() {
    float sqrt(float x) {
	float e = 0.000001, g2 = x/2,  g1;
	do {
	    g1 = g2;
	    g2 = (g1 + x/g1)/2;
	} while(((g2 - g1)/g2) * ((g2 - g1)/g2));
	return g2;
    }
    return 0;
}


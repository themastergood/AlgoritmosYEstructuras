#include <stdio.h>


int main()
{
	int a,b;
    float c,d;

    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d %d\n", a + b, a - b);
    
    scanf("%f", &c);
    scanf("%f", &d);
    printf("%.1f %.1f", c + d, c - d);
        
    return 0;
}

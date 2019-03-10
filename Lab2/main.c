 #include <stdio.h>
 int main(void)
 {
	float x;
	float z;
	float s;
	int c;
	int i;
	int n;
	int sign;

	printf("  n = ");
	scanf("%d", &n);
	printf("  x = ");
	scanf("%f", &x);

	s = 0;
	sign = 1;
	i = 0;
	c = 1.0;
	z = 1.0;
	n = n * 2;

	while (i != n)
	{
		s = s + z / c * sign;
        z = z * x * x;
		i = i + 2;
		c = c * (i - 1) * i;
		sign = -sign;
	}
	printf("  s = %f\n", s);
	return(0);
}


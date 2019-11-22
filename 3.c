# include <stdio.h>
# include <stdlib.h>
main (void)
{
	int a,b,c,ab,ac,bc;
	printf("Digite o numero a: ");
	scanf("%d",&a);
	printf("Digite o numero b: ");
	scanf("%d",&b);
	printf("digite o numero c: ");
	scanf("%d",&c);	
	ab = a + b;
	ac = a + c;
	bc = b + c;

	if (ab > c || bc > a || a+c > b )
	
		if(a == b && a == c && b == c)
			printf("equilatero\n");
		if((a == b && a != c && b!= c )||(a == c && a != b && c != b) || (b == c && b != a && c != a))
			printf("isosceles\n");
		if(a != b && a != c && c != b)
			printf("escaleno\n");
	else

	system("pause");  
	return 0;
	
}



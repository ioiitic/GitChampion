#include <stdio.h>

void f3()
{
	float a,b;
	printf("Enter two integers: ");
	scanf("%f %f",&a,&b);
	printf("Hieu hai so: %f",a-b);
}
int main()
{
    printf("Hello F-Code:\n");
    f1();
    f2();
    f3();
    f4();
    return 0;
}
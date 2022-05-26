#include <stdio.h>


	 void f4(){
	 	int x,y;
	 	printf("Nhap 2 so a va b : \n");
	 	scanf("%d",&x);
	 	scanf("%d",&y);
	 	printf(" tich cua 2 so la %ld",x*y);
	 }

void f2() {
    int x, y;
    printf("Input x,y: ");
    scanf("%d%d", &x, &y);
    int sum = x + y;
    printf("Sum = %d", sum);
}


int main()
{
    printf("Hello F-Code:\n");
   // f1();
    //f2();
   // f3();
    f4();//
    return 0;
}

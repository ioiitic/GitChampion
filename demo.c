#include <stdio.h>

void f1(){
    printf("GitChampion!\n");

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
    f1();
    f2();
    f3();
    f4();
    return 0;
}
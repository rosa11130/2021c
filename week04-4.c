// 100-90 A+
// 89-80   A
// 79-70   B
// 69-60   C
// 59-       D
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n );
    if( n<=100 && n>=90) printf("A+");
    if( n<=89 && n>=80) printf("A");
    if( n<=79 && n>=70) printf("B");
    f( n<=69 && n>=60) printf("C");
    f( n<=59 ) printf("D");
}

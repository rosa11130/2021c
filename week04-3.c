//90�H�W (A+)
//�ѤU��, 80�H�W (A)
//�ѤU��, 70�H�W (B)
//�ѤU��, 60�H�W (C)
//�ѤU��,  (D)

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n );
    if(n>=90) printf("A+");
    else if (n>=80) printf("A");
    else if (n>=70) printf("B");
    else if (n>=60) printf("C");
    else printf("D");
}

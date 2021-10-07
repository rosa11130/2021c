//90쩑쨁 (A+)
//넘짾ず, 80쩑쨁 (A)
//넘짾ず, 70쩑쨁 (B)
//넘짾ず, 60쩑쨁 (C)
//넘짾ず,  (D)

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

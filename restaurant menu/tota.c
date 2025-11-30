#include <stdio.h>
int main()
{
    int a, b, rem;
    printf("ENTER THE NUMBER A :%d\n", a);
    printf("Enter the number b : %d\n", b);
    scanf("a=%d b=%d", &a, &b);
    rem = a % b;
    printf("YOUR REMAINDER IS : %d\n", rem);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int i, j;
    int vet[10] = { [0 ... 9] = '*' };
    for(i=9; i>=0; i--)
    {
        for(j=i; j>=0; j--)
        {
            printf("%c", vet[j]);
        }
        printf("\n");
    }
    return 0;
}
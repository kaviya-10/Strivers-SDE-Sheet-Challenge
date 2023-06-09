#include <stdio.h>
void Pascal(int n)
{
    for (int i = 1; i <= n; i++,printf("\n"))
    {

        int p = 1;
        for (int j = 1; j<= i; j++)
        {
            printf("%d ", p);
            p = p * (i- j) / j;
        }

    }
}

int main()
{
    int n;
    scanf("%d",&n);
    Pascal(n);
    return 0;
}

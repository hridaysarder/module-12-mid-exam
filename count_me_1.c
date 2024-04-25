#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0 && ar[i] % 3 == 0)
        {
            count1++;
        }
        else if (ar[i] % 2 == 0)
        {
            count1++;
        }
        else if (ar[i] % 3 == 0)
        {
            count2++;
        }
    }
    printf("%d %d", count1, count2);
    return 0;
}
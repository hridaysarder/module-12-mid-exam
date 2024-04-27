#include <stdio.h>
int main()
{
    char n[100001];
    scanf("%s", n);
    int count = 0;
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] != 'a' && n[i] != 'e' && n[i] != 'i' && n[i] != 'o' && n[i] != 'u')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
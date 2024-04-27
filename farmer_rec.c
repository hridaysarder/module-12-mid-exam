#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int time = (m1 * d) / (m1 + m2);
        int days = d - time;
        printf("%d\n", days);
    }
    return 0;
}
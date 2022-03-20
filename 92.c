#include <stdio.h>
int main()
{
    printf("rohan karayat\n");
    int N, i, j, is_up = 1, is_low = 1, a;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a);
            if (j > i && a != 0)
                is_low = 0;
            if (j < i && a != 0)
                is_up = 0;
        }
    }
    if (is_up == 1 && is_low == 1)
        printf("2");
    else if (is_low == 1)
        printf("-1");
    else if (is_up == 1)
        printf("1");
    else
        printf("0");
    return 0;
}

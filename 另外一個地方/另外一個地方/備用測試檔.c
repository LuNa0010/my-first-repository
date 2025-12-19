#include <stdio.h>
#include <stdlib.h>

void acc()
{
    int a = 1, sum = 0;
    while (a < 31)
    {
        sum += 100 * 100;
        a++;
    }
    printf("陌生人要給富豪:%d 元\n", sum);

    double x = 0.01;
    for (int i = 0; i < 30; i++)
    {
        x *= 2.0;
    }
    /* 使用 double 並用 "%.0f" 避免某些編譯器對 "%Lf" 的支援問題 */
    printf("百萬富翁要給陌生人:%.0f 元\n", x);
}

int main(void)
{
    acc();
    return 0;
}

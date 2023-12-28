#include <stdio.h>
#include <stdlib.h>

int main()
{
    int second, minute, hour;
    printf("Enter second(s): ");
    scanf("%d", &second);

    hour = second / 3600; // 4700 / 3600 = 1.305555555555556 (lấy 1)
    second %= 3600; // 4700 % 3600 = 1 dư 1100 (lúc này second = 1100) (% là chia lấy dư)

    minute = second / 60; // 1100 / 60 = 18.33333333333333 (lấy 18)
    second %= 60; // 1100 % 60 = 18 dư 20 (lúc này second = 20)

    printf("%02d:%02d:%02d", hour , minute, second);
    return 0;
}

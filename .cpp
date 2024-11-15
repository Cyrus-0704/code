#include <stdio.h>

int main()
{
    int a, b, count = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        int temp = i;

        // 先进行简单判断，跳过明显不含8或肯定含8的数
        if (temp < 8)
        {
            continue;
        }
        else if (temp >= 80 && temp < 89)
        {
            count++;
            continue;
        }

        // 利用整数除法和取余特性检查是否含8
        while (temp > 0)
        {
            if (temp % 10 == 8 || (temp / 10) % 10 == 8)
            {
                count++;
                break;
            }
            temp /= 10;
        }
    }

    printf("%d", count);

    return 0;
}
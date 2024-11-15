#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 判断一个数是否为素数
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    int sqrtN = sqrt((double)n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// 计算一个数的逆序数
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

// 判断一个数是否为反素数
int isAntiprime(int n) {
    int reversed = reverseNumber(n);
    if (isPrime(n) && isPrime(reversed) && n!= reversed) {
        return 1;
    }
    return 0;
}

int main() {
    int n, k, count = 0;
    scanf("%d %d", &n, &k);

    for (int i = n;; i++) {
        if (isAntiprime(i)) {
            printf("%d\n", i);
            count++;
        }
        if (count > k) {
            break;
        }
    }

    return 0;
}
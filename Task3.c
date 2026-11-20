//вариант 6
#define _CRT_SECURE_NO_WARNINGS
#define N 100
#include <stdio.h>
#include <math.h>
#include <locale.h>
int find_min_multiple(double *a, int n, int k)
{
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (fmod(a[i], k) == 0)
            if (pos == -1 || a[i] < a[pos])
                pos = i;
    }
    if (pos == -1)
        return -1;
    return pos + 1;
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    double array[N];
    int n, k, number;
    printf("Введите n (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > N)
        return 0;
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &array[i]);
    }
    printf("Введите целое k (не 0): ");
    scanf("%d", &k);
    if (k == 0)
    {
        printf("k не должно быть равно 0.\n");
        return 0;
    }
    number = find_min_multiple(array, n, k);
    if (number == -1)
        printf("Подходящих элементов нет.\n");
    else
        printf("Номер элемента: %d\nЗначение: %.2f\n", number, array[number - 1]);
    return 0;
}
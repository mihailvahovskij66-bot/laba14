#define _CRT_SECURE_NO_WARNINGS
#define N 100
#include <stdio.h>
#include <locale.h>
double sum_elements(double* a, int begin, int end)
{
    double sum = 0;
    for (int i = begin; i <= end; i++)
        sum = sum + a[i];
    return sum;
}
int find_element(double* a, int n, double element)
{
    for (int i = 0; i < n; i++)
        if (a[i] == element)
            return i;
    return -1;
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    double array[N], element;
    int n, begin, end, index;
    printf("Введите размер массива (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > N)
        return 0;
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &array[i]);
    }
    printf("Введите begin и end (индексы от 0 до %d): ", n - 1);
    scanf("%d %d", &begin, &end);
    if (begin < 0 || end >= n || begin > end)
    {
        printf("Неверные индексы!\n");
        return 0;
    }
    printf("Сумма: %.2f\n", sum_elements(array, begin, end));
    printf("Введите элемент для поиска: ");
    scanf("%lf", &element);
    index = find_element(array, n, element);
    if (index == -1)
        printf("Элемент не найден.\n");
    else
        printf("Индекс элемента: %d\n", index);
    return 0;
}
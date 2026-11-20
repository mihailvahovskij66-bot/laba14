#define _CRT_SECURE_NO_WARNINGS
#define N 100
#include <stdio.h>
#include <locale.h>
double* full_elements(double* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    return a;
}
int put_elements(double* a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    printf("\n");
    return n;
}
double* calc_elements(double* a, int n)
{
    for (int i = 0; i < n; i++)
        a[i] = -a[i];
    return a;
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    double array[N];
    int n;
    printf("Введите размер массива (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > N)
        return 0;
    full_elements(array, n);
    printf("Исходный массив:\n");
    put_elements(array, n);
    calc_elements(array, n);
    printf("После смены знака:\n");
    put_elements(array, n);
    return 0;
}
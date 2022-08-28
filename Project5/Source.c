#include <stdio.h>
#include <stdlib.h>
#define N 10

void print_array(int A[]) {
  printf_s("Массив:\n");
  for (int i = 0; i < N; i++) printf_s("%3d ", A[i]);
  printf_s("\n");
}

void puts_array(int A[]) {
  printf_s("\nВведите 10 чисел: \n");
  for (int i = 0; i < N; i++) {
    printf_s(": ");
    scanf_s("%d", &A[i]);
  }
  printf_s("\n");
}

int function_44(void) {
  int i = 0, j = 0, n = N, k = 0, A[N] = {0}, B[N] = {0};
  puts_array(A);
  printf_s("Массив A:\n");
  for (int i = 0; i < N; i++) printf_s("%3d ", A[i]);
  printf_s("\n");

  for (j = 0; n != 0; j++) {
    for (k = 0, i = 1; i < n; i++)
      if (A[i] < A[k]) k = i;
    B[j] = A[k];
    for (; k < n - 1; k++) A[k] = A[k + 1];
    n--;
  }

  printf_s("Массив B:\n");
  for (int i = 0; i < N; i++) printf_s("%3d ", B[i]);
  printf_s("\n");
}

int main(void) {

  printf_s(" Введите число повторов функций: \n: ");
  int m;
  scanf_s("%d", &m);
  for (int i = 0; i < m; i++) {
    function_44();
  }
  return 0;
}
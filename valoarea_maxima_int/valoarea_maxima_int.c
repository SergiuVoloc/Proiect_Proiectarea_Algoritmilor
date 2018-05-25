#include <stdio.h>

int gaseste_maxim_int(int[], int);

int main() {
  int c;
  int sir[100];
  int lung;
  int locatia;
  int maxim;

  printf("Dati numarul de monede\n");
  scanf("%d", &lung);

  printf("Introduceti valorile pentru fiecare moneda\n", lung);

  for (c = 0; c < lung; c++)
    scanf("%d", &sir[c]);

  locatia = gaseste_maxim_int(sir, lung);
  maxim  = sir[locatia];

  printf("Locatia elementului maxim este = %d si valoarea  = %d.\n", locatia + 1, maxim);
  return 0;
}

int gaseste_maxim_int(int a[], int n) {
  int c, max, indice;

  max = a[0];
  indice = 0;

  for (c = 1; c < n; c++) {
    if (a[c] > max) {
       indice = c;
       max = a[c];
    }
  }

  return indice;
}

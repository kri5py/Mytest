#include<stdio.h>
void remdupl(double a[], int size);
int main() {
   double arr[20];
int i, j, k, size=5;

//   printf("\nEnter array size : ");
//   scanf("%d", &size);

   printf("\nAccept Numbers : ");
   for (i = 0; i < size; i++)
      scanf("%lf", &arr[i]);

   printf("\nArray with Unique list  : ");
   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < size; k++) {
               arr[k] = arr[k + 1];
            }
            size--;
         } else
            j++;
      }
   }

   for (i = 0; i < size; i++) {
      printf("%lf ", arr[i]);
   }

   return (0);
}

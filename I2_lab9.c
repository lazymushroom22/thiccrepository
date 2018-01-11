#include<stdio.h>

int binarySearch(int arr[], int left, int right, int x)
{
  while (left <= right)
  {
    int m = left + (right-left)/2;

    if (arr[m] == x)
        return m;
    if (arr[m] < x)
        left = m + 1;
    else
         right = m - 1;
  }

  return -1;
}

int main(void)
{
    //*Metoda eficienta, fara pierdere de memorie. Se vor introduce elementele direct in codul sursa.
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x;
   printf("What number do you wish to find?\n");
   scanf("%d",&x);
   int result = binarySearch(arr, 0, n-1, x);
   if(result==-1)
        printf("Element is not present in array");
   else
        printf("Element is present at position %d", result);
}

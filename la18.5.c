#include <stdio.h>
 
int recursiveMax(int[], int);
int max(int, int);
 
int main()
{
  int a ;
  printf("size of array:");
  scanf("%d",&a);
  int arr[a];
  for(int i=0; i<a; i++){
  scanf("%d",&arr[i]);
  }
  
  int max = recursiveMax(arr, a);
  printf("Maximum element: %d\n", max);
}
 
int recursiveMax(int* arr, int length)
{
  if (length == 1)
    return arr[0];
  return max(recursiveMax(arr, length - 1), arr[length - 1]);
}
 
int max(int n1, int n2)
{
  return n1 > n2 ? n1 : n2;
}

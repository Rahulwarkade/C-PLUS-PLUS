#include <stdio.h>
void printArray(int *arr,int size)
{
  for(int i=0; i<size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void merge(int *arr,int low,int mid, int high)
{
 int i = low;
 int j = mid+1;
 int k= low;
 int B[100];
 while(i<=mid && j<= high)
 {
   if(arr[i]<arr[j])
   {
     B[k] = arr[i];
     k++; i++;
   }
   else
   {
     B[k] = arr[j];
     k++; j++;
   }
 }
 while(i<=mid)
 {
   B[k] = arr[i];
   k++; i++;
 }
 while(j<=high)
 {
   B[k] = arr[j];
   k++; j++;
 }

 for(int i = low; i<= high; i++)
 {
   arr[i] = B[i];
 }
}
void mergeSort(int *arr,int low,int high)
{
int mid;
if(low<high)
{
mid = (low+high)/2;
mergeSort(arr, low, mid);
mergeSort(arr, mid+1, high);
merge(arr,low,mid,high);
}
}
int main(void) 
{
  // int A[] = {23,345,34,21,89,87,86,11,1,2,3};
  int A[] = {9, 1, 4, 14, 4, 15, 6};
  int n = 7;
  printArray(A,n);
  mergeSort(A,0,n-1);
  printArray(A,n);
  return 0;
}

#include <stdio.h>
void showtime(int *arr, int size){
  for(int i=0; i<size; i++) printf("%d ",arr[i]);
  printf("\n");
}
void deletion(int *arr,int index,int size){
  for(int i=index; i<size-1; i++){
    arr[i] = arr[i+1];
  }
}
int main(void) {

int arr[11] = {34,34,234,34,312,6,8834,34,3432,10};
int size = 10;
int index = 7;
showtime(arr,size);
deletion(arr,index,size);
size -= 1;
showtime(arr,size);
return 0;
}

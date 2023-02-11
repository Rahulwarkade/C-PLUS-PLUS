#include <stdio.h>
void out(int *arr){
  for(int i=0; i<6; i++){
  printf("%d  ",arr[i]);
  }
  printf("\n");
}
void  inInsertion(int *arr,int index,int lement,int size){
  if(index>=size){
    printf("Insertion is not possible\n");
  }
      for(int i=size; i<=index; i++){
        arr[i] = arr[i+1];
      }
      arr[index] = lement;
}
void showtime(int *arr2,int size){
  for(int i=0; i<size; i++){
    printf("%d  ",arr2[i]);
  }
   printf("\n");
}
int main(void) {
 int arr[6] = {23,24,35,45,39,34};
 //out(arr);
 // Intsertion
 int arr2[10] = {3,234,34,35,3,34,23,233};
 int index = 3;
 int lement = 24;
 int size = 8;
 showtime(arr2,size);
 inInsertion(arr2,index,lement,size);
 size += 1;
 showtime(arr2,size);
 return 0;
}

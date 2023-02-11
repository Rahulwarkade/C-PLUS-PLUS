#include <stdio.h>
#include<stdlib.h>
struct abstruct {
int totalSize;
int usedSize;
int *ptr;
};
void creatArray(struct abstruct *m,int tsize,int usize){
  (*m).totalSize = tsize;
  (*m).usedSize = usize;
  (*m).ptr = (int *)malloc(tsize*sizeof(int));
}
void setV(struct abstruct *m){
  printf("Enter your marks in maths and chamistry \n");
  int n;
  for(int i=0; i<m->usedSize; i++){
    scanf("%d",&(*m).ptr[i]);
    //(*m).ptr[i] = n;
    printf("%d ",(*m).ptr[i]);
  }
}
int main(void) {
struct abstruct marks;
creatArray(&marks,100,20);
setV(&marks);
return 0;
}

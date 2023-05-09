#include<stdio.h>
void reverse_indices(int ar[], int n, int i){
if(i==n) return;
reverse_indices(ar, n, i+1);
if(i%2==0){
    printf("%d ", ar[i]);
}



}
int main(){
  int N;
  scanf("%d", &N)        ;
  int ar[N];
  for(int i=0; i<N; i++){
    scanf("%d", &ar[i]);
  }
  reverse_indices(ar, N,0);
  return 0;
}

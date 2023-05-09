#include<stdio.h>
void print_one_to_N(int n, int i){
    if(i==n+1) return;
    printf("%d\n",i);
    print_one_to_N(n,i+1);
}
int main(){
  int N;
  scanf("%d",&N);
  print_one_to_N(N, 1);


  return 0;
}

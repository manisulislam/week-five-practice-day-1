#include<stdio.h>
void print_N_to_one(int n, int i){
    if(i==n+1) return;
    print_N_to_one(n, i+1);
    if(i==1) printf("%d", i);
    else{
      printf("%d ", i);

    }

}
int main(){
  int N;
  scanf("%d",&N)        ;
  print_N_to_one(N,1);

  return 0;
}

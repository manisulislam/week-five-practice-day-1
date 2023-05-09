#include<stdio.h>
long long int  summation(long long int ar[], int n, int i){
    if(i>=n){
        return 0;
    }
    long long int result=summation(ar,n, i+1);
    return ar[i]+result;
    
}
int main(){
  int N;
  scanf("%d", &N)        ;
  long long int ar[N];
  for(int i=0; i<N; i++){
    scanf("%lld", &ar[i]);
  }
  long long int sum_result=summation(ar, N, 0);
  printf("%lld", sum_result);
  return 0;
}

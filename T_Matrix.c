#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d", &N)        ;
  int a[N][N];
  for(int i=0; i<N; i++){
    for(int j=0; j<N;j++){
        scanf("%d",&a[i][j]);
    }
  }
  int primary_sum=0, secondary_sum=0;
  //primary diagonal
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        if(i==j){
            primary_sum=primary_sum+a[i][j];
        }
    }
  }
  //secondary diagonal
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        if(i+j==N-1){
            secondary_sum=secondary_sum+a[i][j];
        }
    }
  }
  int result= primary_sum-secondary_sum;

  int value= abs(result);
  printf("%d", value);
  // if(result<0){
  //   int total_value= result*(-1);
  //   printf("%d", total_value);
  // }
  // else{
  //   printf("%d", result);
  // }


  return 0;
}

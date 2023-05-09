#include<stdio.h>
int main(){
  int N,M;
  scanf("%d %d", &N, &M);
  int a[N][M];
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
        scanf("%d", &a[i][j]);
    }
  }
  int X;
  scanf("%d", &X);
  int flag=1;
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
        if(a[i][j]==X){
            flag=0;
        }
    }
  }
  if(flag==1){
    printf("will take number");
  }
  else if(flag==0){
    printf("will not take number");
  }



  return 0;
}

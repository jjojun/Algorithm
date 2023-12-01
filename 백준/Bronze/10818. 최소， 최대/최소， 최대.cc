#include<stdio.h>

int main(){
  int num = 0; // 배열의 갯수
  int crt = 0; // 비교 저장소
  int i = 0;
  scanf("%d", &num);
  int arr[num];
    for(i = 0; i < num; i++){
      scanf("%d", &arr[i]);
    }
    crt = arr[0];
  
    for(int j = 0; j < num; j++){
      if(arr[j] < crt){
        crt = arr[j];
    }
  }
  printf("%d ", crt);
  crt = arr[0];
    for(int k = 0; k < num; k++){
      if(arr[k] > crt){
        crt = arr[k];
      }
    }
  printf("%d", crt);
}
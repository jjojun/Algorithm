#include<stdio.h>

int main(){
  int num = 0; // 배열의 갯수
  int cnt = 0; // 비교 갯수
  scanf("%d %d", &num, &cnt);
  int arr[num];

  for(int i = 0; i < num; i++){
    scanf("%d", &arr[i]);
  }

  for(int j = 0; j < num; j++){
    if(arr[j] < cnt){
      printf("%d ", arr[j]);
    }
  }
}
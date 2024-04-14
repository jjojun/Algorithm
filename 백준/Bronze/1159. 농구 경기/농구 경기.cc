#include <stdio.h>

int main(){
	int num;
	char name[150][30];
	int arr[27] = { };
	int flag = 0;
	int i;
	scanf("%d", &num);
	for(i = 0; i < num; i++){
		scanf("%s", name[i]);
		arr[name[i][0] - 97]++;
	}
	for(i = 0; i < 26; i++){
		if(arr[i] >= 5){
			printf("%c", i + 97);
			flag++;
		}
	}
	if(flag == 0)
		printf("PREDAJA");
}
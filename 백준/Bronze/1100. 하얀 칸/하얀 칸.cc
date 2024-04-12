#include <stdio.h>

int main(){
	int cnt = 0;
	char str[9][9];
	
	for(int i = 0; i < 8; i++){
		scanf("%s", &str[i]);
	}
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if ((i + j) % 2 == 0 && str[i][j] == 'F'){
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}
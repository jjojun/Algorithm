#include <stdio.h>
#include <stdlib.h>

//int main() {
//    int T;
//    scanf("%d", &T);
//
//    int results[T];
//
//    for (int t = 0; t < T; t++) {
//        int N;
//        scanf("%d", &N);
//
//        int applicants[N][2];
//
//        for (int i = 0; i < N; i++) {
//            scanf("%d %d", &applicants[i][0], &applicants[i][1]);
//        }
//
//        for (int i = 0; i < N - 1; i++) {
//            for (int j = 0; j < N - i - 1; j++) {
//                if (applicants[j][0] > applicants[j + 1][0]) {
//                    int temp_document = applicants[j][0];
//                    int temp_interview = applicants[j][1];
//                    applicants[j][0] = applicants[j + 1][0];
//                    applicants[j][1] = applicants[j + 1][1];
//                    applicants[j + 1][0] = temp_document;
//                    applicants[j + 1][1] = temp_interview;
//                }
//            }
//        }
//
//        int count = 1;
//        int min_interview = applicants[0][1];
//
//        for (int i = 1; i < N; i++) {
//            if (applicants[i][1] < min_interview) {
//                min_interview = applicants[i][1];
//                count++;
//            }
//        }
//
//        results[t] = count;
//    }
//
//    for (int t = 0; t < T; t++) {
//        printf("%d\n", results[t]);
//    }
//
//    return 0;
//}


//int main() {
//    int n, check;
//    char name[51][51];
//	char output[51];
//	
//    scanf("%d", &n);
//    if(n == 1){
//    	for(int i=0; i<n; i++){
//    		scanf("%s", name[i]);
//		}
//		printf("%s", name);
//	}
//	else{
//    	for(int i=0; i<n; i++){
//    		scanf("%s", name[i]);
//		}
//    	for(int j=0; j<51; j++) {
//        	check = 1;
//        	for(int i=1; i<n; i++){
//				if(name[i][j] != name[0][j]){
//					check = 0;
//				}
//        		if(check){
//        			output[j] = name[0][j];
//				}
//        		else output[j] = '?';
//        	}
//    	}
//    	printf("%s", output);
//	}
//}

int main(){
	int test = 0;

	scanf("%d", &test);
	for(int i = 0; i < test; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		int task = a;
		for(int j = 1; j < b; j++){
			task = task * a % 10;
		}
		if(task % 10 == 0){
			printf("%d\n", 10);
		}
		else{
			printf("%d\n", task % 10);
		}
	}
}
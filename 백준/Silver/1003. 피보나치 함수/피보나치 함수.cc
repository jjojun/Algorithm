#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<pair<int, int>> results(41, {0, 0});
    
    // 피보나치 수열을 계산하고 0과 1의 호출 횟수를 미리 저장
    results[0] = {1, 0};  // fibonacci(0)
    results[1] = {0, 1};  // fibonacci(1)
    
    for (int i = 2; i <= 40; ++i) {
        results[i].first = results[i - 1].first + results[i - 2].first;
        results[i].second = results[i - 1].second + results[i - 2].second;
    }

    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n;
        cout << results[n].first << " " << results[n].second << endl;
    }

    return 0;
}
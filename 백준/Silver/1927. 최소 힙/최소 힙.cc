#include<iostream>
#include<queue>
using namespace std;

int N;

priority_queue<int, vector<int>, greater<int>> Queue;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        if (a == 0) {
            if (Queue.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << Queue.top() << "\n";
                Queue.pop();
            }
        }
        else {
            Queue.push(a);
        }
    }
    return 0;
}
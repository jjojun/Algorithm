#include <iostream>
#include <queue>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  queue<int> Queue;

  cout << '<';
  for (int i = 1; i <= n; i++)
    Queue.push(i);

  while (!Queue.empty()){
    for (int i = 0; i < k - 1; i++){
      Queue.push(Queue.front());
    Queue.pop();
    }
    cout << Queue.front();
    Queue.pop();

    if (Queue.empty()) cout << '>';
    else cout << ", ";
  }
  return 0;
}
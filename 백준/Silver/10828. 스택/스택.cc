#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> stack;      
  int N;             
  string command;    
  int num;      
  int result = 0;    

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> command;

    if (command == "push") {
      cin >> num;
      stack.push(num);
    }

    else if (command == "pop") {
      if (stack.size() == 0) {
        result = -1;
        cout << result << endl;
      }
      else {
        result = stack.top();
        cout << result << endl;
        stack.pop();
      }
    }

    else if (command == "size") {
      cout << stack.size() << endl;
    }
  
    else if (command == "empty") {
      if (stack.size() == 0) {
        result = 1;
        cout << result << endl;
      }
      else {
        result = 0;
        cout << result << endl;
      }
    }

    else if (command == "top") {
      if (stack.size() == 0) {
        result = -1;
        cout << result << endl;
      }
      else {
        result = stack.top();
        cout << result << endl;
      }
    }
  }

  return 0;
}
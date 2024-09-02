#include <iostream>
#include <queue>

using namespace std;

int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> Queue;
    string command;
    int t, cnt;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> command;

        if (command == "push") {
            cin >> cnt;
            Queue.push(cnt);
        }
        else if (command== "pop") {
            if (Queue.empty()) {
                cout << "-1" << '\n';
            } else {
                cout << Queue.front() << '\n';
                Queue.pop();
            }
        }
        else if (command == "front") {
            if (Queue.empty()) {
                cout << "-1" << '\n';
            }
            else {
                cout << Queue.front() << '\n';
            }
        }
        else if (command == "back") {
            if (Queue.empty()) {
                cout << "-1" << '\n';
            }
            else {
                cout << Queue.back() << '\n';
            }
        }
        else if (command == "size")
            cout << Queue.size() << '\n';
        else if (command == "empty")
            cout << Queue.empty() << '\n';
        else if (command == "top") {
            if (Queue.empty()) {
                cout << "-1" << '\n';
            }
            else {
                cout << Queue.front() << '\n';
            }
        }
    }



    return 0;
}
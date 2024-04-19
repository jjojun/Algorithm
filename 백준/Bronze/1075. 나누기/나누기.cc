#include <iostream>
using namespace std;

int N, F;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> F;

	N = N / 100 * 100;
	
	for (int i = 0; i < 100; i++) {
		int temp = N + i;
		if (temp % F == 0) {
			if (i < 10) {
				cout << "0" << i << "\n";
			}
			else cout << i << "\n";
			return 0;
		}
	}
}
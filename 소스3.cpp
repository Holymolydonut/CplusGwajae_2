#include <iostream> 
using namespace std;

int main() {
	int m, n;
	int a = 0;

	cin >> n;
	cin >> m;

	cout << "N���� " << n << ", M���� " << m << endl;

	for (int i = 1; i <= n; i++) {
		if (i % m == 0) {
			a = a + i;
		}

	}
	cout << a;

	return 0;
}
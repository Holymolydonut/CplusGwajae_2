#include <iostream> 
using namespace std;

int main() {

	char a;
	char daemun[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int count = 0;
	int num = 0;
	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	while (cin >> a) {
		for (int i = 0; i < 26; i++) {
			if (daemun[i] == a) {
				cout << "Check to alphabet" << endl;
				num -= 1;
				break;
			}
		}
		switch (a){
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			count += 1;
			break;
		default:
			num += 1;
			break;
		}
	}
	cout << "����: " << count << endl;
	cout << "����: " << num << endl;
	return 0;
}
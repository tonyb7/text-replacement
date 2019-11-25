#include <iostream>

using namespace std;

int main()
{
	char c;
	while (cin >> noskipws >> c) {
		cout << c;
		if (c == 'v') {
			int num;
			cin >> num;
			cout << num;
			cout << "[t]";
		}
	}

	return 0;
}

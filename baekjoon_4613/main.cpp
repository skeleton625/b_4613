#include <iostream>
#include <string.h>
using namespace std;

char n[256];
int m;
int main() {
	cin.getline(n, 256);
	while (n[0] != '#') {
		for (int i = 0; i < strlen(n); i++) {
			if(n[i] >= 65 && n[i] <= 90) m += (n[i] - 64) *(i + 1);
		}
		cout << m << endl;
		cin.getline(n, 256);
		m = 0;
	}
	return 0;
}
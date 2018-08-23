#include <cstdio>

char n[256];
int m;
int main() {
	while (gets_s(n)) {
		if (n[0] == '#') break;
		for (int i = 0; n[i]; i++) m += (n[i] != ' ' ? (n[i] - 64)*(i + 1) : 0);
		printf("%d\n", m);
		m = 0;
	}
	return 0;
}
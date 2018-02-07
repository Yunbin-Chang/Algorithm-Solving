#include "stdafx.h"

bool kangaroo(int x1, int v1, int x2, int v2) {
	// Complete this function
	if ((x1 - x2) % (v2 - v1) == 0 && (x1 - x2) / (v2 - v1) >= 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int x1;
	int v1;
	int x2;
	int v2;
	scanf_s("%d %d %d %d", &x1, &v1, &x2, &v2);
	bool result = kangaroo(x1, v1, x2, v2);
	
	printf("%s", result ? "YES" : "NO");
	return 0;
}
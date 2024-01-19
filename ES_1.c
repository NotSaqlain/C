#include <stdio.h>
#include <stdbool.h>

bool is_pari(int n);

int main() {
	int k = 0;
	for (int i = 0; k < 100; i++) {
		if (is_pari(i)) {
			printf("%d ", i);
			k++;
		}
	}


	return 0;
}

bool is_pari(int n) {
	if (n%2==1) {
		return true;
	} else {
		return false;
	}
}

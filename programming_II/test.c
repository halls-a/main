#include <stdio.h>

void copy_array(int from[], int to[], int sz) {

	for (int i = 0; i < sz; i++) {
		to[i] = from[i];
	}

}

#ifdef DEBUG

int test_copy_array(void) {

#define LEN 5

	int x[LEN] = { 1, 2, 3, 4, 5 };
	int y[LEN] = { 0 };

	copy_array(x, y, LEN); // x�迭, y�迭, �迭 ũ�� ���ڰ����� ����

	for (int i = 0; i < LEN; i++) { // ���� ������ Ȯ��
		if (y[i] != x[i]) {
			return -1;
		}
	}

	return 0;
}
#endif

int main() {

	test_copy_array();

	return 0;
}

// ���� : ppt�� ���� ������ �� ���̵� 123 �� ������ Ǯ��
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

	copy_array(x, y, LEN); // x배열, y배열, 배열 크기 인자값으로 전달

	for (int i = 0; i < LEN; i++) { // 오류 없는지 확인
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

// 과제 : ppt에 나온 문제들 중 난이도 123 두 문제씩 풀기
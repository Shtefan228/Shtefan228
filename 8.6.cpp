#include <stdio.h>

#define N 3
#define M 3

int input_matr(float mas[N][M]) {
	for (size_t i = 0; i < N; i++) {
		for (size_t j = 0; j < M; j++) {
			printf("\na[%zu][%zu] =", i, j);
			scanf_s("%d", &mas[i][j]);

		}
	}
	return 0;
}
void output(float mas[N][M]) {
	for (size_t i = 0; i < N; i++) {
		printf("\n");
		for (size_t j = 0; j < M; j++) {
			printf("\ta[%zu][%zu] = %d", i, j, mas[i][j]);


		}
	}

}

float sub_diag(float inp_matr[N][M], int k) {
	float res = 0.f;
	for (size_t i = 0; i < N; i++) {
		if ((i - k >= 0) && (i - k <= M)) {
			res += inp_matr[i][i - k];
		}
	}
	return res;
}

int main() {
	float mas[N][M];
	input_matr(mas);
	int k;
	scanf_s("%d", &k);

	output(mas);

	printf("\n sub=%f", sub_diag(mas, k));

}
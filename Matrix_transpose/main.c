#include <stdio.h>
#include <Windows.h>
#define MAX_TERMS 100

struct element{
	int row;
	int col;
	int value;
};

// 포인트를 이용한 전치행렬
void swap(int *px, int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int rows = 0;
	int cols = 0;
	int terms = 0;

	struct element A[MAX_TERMS];

	printf("Enter the size of rows and columns, the number of non-zero terms(Ex.0 0 0) : ");
	
	// 값 받기
	scanf_s("%d %d %d", &rows, &cols, &terms);

	printf("Enter row, column, and value pairs in order(Ex.0 0 0) : \n");

	if (terms > 0) {
		for (int i = 0; i < terms; i++) {
			scanf_s("%d %d %d", &A[i].row, &A[i].col, &A[i].value);

			// 전치 시키기
			swap(&A[i].row, &A[i].col);
		}
	}
	else printf(" 모든 항이 0입니다.\n");

	printf("The transposed matrix is : \n");
	// 전치 행렬 출력
	printf("-------------------\n");
	if (terms > 0) {
		for (int i = 0; i < terms; i++) 
		printf("%d %d %d\n", A[i].row, A[i].col, A[i].value);
	}
	printf("-------------------\n");

	system("pause");
	return 0;
}
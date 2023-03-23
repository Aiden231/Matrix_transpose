#include <stdio.h>
#define MAX_TERMS 100

// 0이 아닌 값 저장
typedef struct {
	int row;
	int col;
	int value;
}element;

typedef struct sparseMatrix {
	element data[MAX_TERMS];
	int rows;
	int cols;
	int terms;
}SparseMatrix;

SparseMatrix matrix_transpose(SparseMatrix A)
{
	
}

// 행렬 출력
void matrix_print(SparseMatrix a)
{
	printf("----------------------------\n");
	for (int i = 0; i < a.terms; i++) {
		printf("%d, %d, %d", a.data[i].row, a.data[i].col, a.data[i].value);
	}
	printf("----------------------------\n");
}

int main()
{
	SparseMatrix m = {
		{{0,3,7}, {1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2}}, // data
		6, // rows
		6, // cols
		7 //terms
	};

	SparseMatrix result;
	result = matrix_transpose(m);

	matrix_print(m);
	matrix_print(result);

	return 0;
}
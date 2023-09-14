#include "matrix.h"

TMatrix::TMatrix(int r)
{
	row = r;
	col = r;
	data = new double* [row];
	for (int j = 0; j < row; j++) {
		data[j] = new double[col];
		for (int i = 0; i < col; i++) {
			data[j][i] = 0.0;
		}
	}
	return;
};

void TMatrix::fill()
{
	for (int j = 0; j < row; j++) {
		for (int i = 0; i < col; i++) {
			cout << "element [" << j << "][" << i << "] = ";
			cin >> data[j][i];
		}
	}
	return;
}

void TMatrix::display()
{
	printf("Matrix: \n");
	for (int j = 0; j < row; j++) {
		for (int i = 0; i < col; i++) {
			printf("%5.0f ", data[j][i]);
		}
		cout << "\n";
	}
	return;
}

TMatrix::~TMatrix()
{
	for (int j = 0; j < row; j++) {
		delete data[j];
	}
	delete[] data;
};

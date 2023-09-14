#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

using namespace std;

class TMatrix
{
	int row, col;
	double** data;
public:
	TMatrix(int r = 2);
	~TMatrix(void);
	void fill();
	void display();
};

#endif


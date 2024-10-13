#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int a[10][10];

public:
    // Constructor to initialize rows and columns
    Matrix(int r, int c) : rows(r), cols(c) {}

    void getData();  // Function to display the matrix
    void setData();  // Function to input data into the matrix
    void Multiplication(Matrix &m);  // Function to multiply two matrices
};

void Matrix::getData() {
    cout << "Matrix (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void Matrix::setData() {
    cout << "Enter elements for the matrix (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }
}

void Matrix::Multiplication(Matrix &m) {
    if (cols != m.rows) {
        cout << "Error! Columns of first matrix must be equal to rows of second matrix." << endl;
        return;
    }

    Matrix result(rows, m.cols);  // Create a result matrix

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            result.a[i][j] = 0;  // Initialize result element
            for (int k = 0; k < cols; ++k) {
                result.a[i][j] += a[i][k] * m.a[k][j];
            }
        }
    }
    result.getData();  // Display the result
}

int main() {
    int row1, col1, row2, col2;
    cout << "Enter Row1, Col1, Row2, Col2: ";
    cin >> row1 >> col1 >> row2 >> col2;

    Matrix a(row1, col1);
    Matrix b(row2, col2);

    a.setData();  // Set data for the first matrix
    b.setData();  // Set data for the second matrix
    a.Multiplication(b);  // Multiply the matrices

    return 0;
}


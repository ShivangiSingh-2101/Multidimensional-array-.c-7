#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n";
        return 0;
    }

    vector<vector<int>> A(rows1, vector<int>(cols1));
    vector<vector<int>> B(rows2, vector<int>(cols2));
    vector<vector<int>> C(rows1, vector<int>(cols2, 0));

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> A[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> B[i][j];

    // Multiply matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    cout << "Resultant Matrix after multiplication:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

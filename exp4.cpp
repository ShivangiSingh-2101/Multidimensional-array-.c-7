//Shivangi Singh
//2407023148
//B3
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int main_sum = 0, secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        main_sum += matrix[i][i];               // main diagonal
        secondary_sum += matrix[i][n - 1 - i];  // secondary diagonal
    }

    cout << "Sum of main diagonal elements: " << main_sum << endl;
    cout << "Sum of secondary diagonal elements: " << secondary_sum << endl;

    return 0;
}
/*Output
Enter the size of the square matrix (n x n): 2
Enter the elements of the matrix:
4
18
21
44
Sum of main diagonal elements: 48
Sum of secondary diagonal elements: 39
  */


=== Code Execution Successful ===

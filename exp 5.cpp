//ShivangI Singh
//24070123148
//B3
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> transpose(n, vector<int>(m));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*Output
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the matrix:
3
4
6
7
Transpose of the matrix is:
3 6 
4 7 
*/

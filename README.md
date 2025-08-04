Program 1
Aim:
Write a C++ program to accept a matrix from the user and display the matrix.

Theory:
A matrix is a two-dimensional array consisting of rows and columns. In programming, matrices are commonly represented using two-dimensional arrays or vectors. This program takes input from the user for the size of the matrix (number of rows and columns) and then reads the elements row-wise. After storing the elements in a 2D vector, it displays the matrix in a formatted way.
In C++, a 2D matrix can be implemented using either:
A 2D array (fixed size),
Or a vector of vectors for dynamic size.
Here, vector<vector<int>> is used for flexibility to handle matrices of any size. The program prompts the user for input and then prints the matrix as it is.

Algorithm:
- Start.
- Ask the user to enter the number of rows (rows).
- Ask the user to enter the number of columns (cols).
- Declare a 2D vector (or array) to store the matrix elements.
- For each row from 0 to rows-1:
- For each column from 0 to cols-1:
- Input the element at [row][column].
- Display the matrix by printing each element in row-wise order.
- End.

 Program 2
Aim:
Write a C++ program to add two matrices and display the result.
Theory:
Matrix addition is the operation of adding two matrices by adding the corresponding elements together. For two matrices to be added, they must have the same dimensions (same number of rows and columns).
Algorithm:
- Start.
- Input the number of rows (rows) and columns (cols).
- Input the elements of the first matrix A.
- Input the elements of the second matrix B.
- For each element position (i, j):
- Calculate sum matrix element C[i][j] = A[i][j] + B[i][j].
- Display the resultant matrix C.
- End.
  Program 3
Aim:
Write a C++ program to multiply two matrices and display the result.
Theory:
Matrix multiplication is not element-wise. To multiply two matrices:

 Algorithm:
- Start.
- Input dimensions of matrix A (rows1, cols1).
- Input dimensions of matrix B (rows2, cols2).
- Check if cols1 == rows2. If not, multiplication is not possible.
- Input matrix A elements.
- Input matrix B elements.
- For each i in 0 to rows1-1 and j in 0 to cols2-1:
- Initialize C[i][j] = 0
- For each k in 0 to cols1-1, do C[i][j] += A[i][k] * B[k][j]
- Print resulting matrix C.
- End.
 Program 4
 Aim:
Write a C++ program to calculate the sum of the main diagonal and secondary diagonal elements of a square matrix.
Theory:
In a square matrix of size n x n:
Main diagonal (also called the primary diagonal): elements from top-left to bottom-right
→ Positions where row index = column index, i.e., matrix[i][i]

Secondary diagonal: elements from top-right to bottom-left
→ Positions where row index + column index = n - 1, i.e., matrix[i][n-1-i]

Algorithm:
- Start.
- Input the size n of the square matrix.
- Declare a 2D array or vector of size n x n.
- Input all matrix elements.
- Initialize main_sum = 0 and secondary_sum = 0.
- For each row i from 0 to n-1:
- Add matrix[i][i] to main_sum
- Add matrix[i][n - 1 - i] to secondary_sum
- Display the diagonal sums.
- End.

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
Aim:
Write a C++ program to add two matrices and display the result.
Theory:
Matrix addition is the operation of adding two matrices by adding the corresponding elements together. For two matrices to be added, they must have the same dimensions (same number of rows and columns).
Algorithm:
-Start.
-Input the number of rows (rows) and columns (cols).
-Input the elements of the first matrix A.
-Input the elements of the second matrix B.
-For each element position (i, j):
- Calculate sum matrix element C[i][j] = A[i][j] + B[i][j].
- Display the resultant matrix C.
-End.


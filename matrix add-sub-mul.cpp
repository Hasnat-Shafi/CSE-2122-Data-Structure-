#include <bits/stdc++.h>
using namespace std;
void inputMatrix(int matrix[10][10], int rows, int cols, string name)
{
     cout << "Enter elements of string " << name << "(" << rows << "x" << cols << ")" << ":" << endl;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cin >> matrix[i][j];
          }
     }
}
void print(int matrix[10][10], int rows, int cols, string name)
{
     cout << "string name : " << name << endl;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cout << matrix[i][j] << ' ';
          }
          cout << endl;
     }
}

int main()
{
     int A[10][10], B[10][10], sum[10][10], substract[10][10], product[10][10];
     int rowsA, rowsB, colsA, colsB;
     cout << "Enter the elements of rows and cols of matrix A" << endl;
     cin >> rowsA >> colsA;
     cout << "Enter the elements of rows and cols of matrix B" << endl;
     cin >> rowsB >> colsB;
     inputMatrix(A, rowsA, colsA, "matrixA");
     print(A, rowsA, colsA, "matrixA");
     inputMatrix(B, rowsA, colsA, "matrixB");
     print(B, rowsA, colsA, "matrixB");

     if (rowsA == rowsB && colsA == colsB)
     {
          for (int i = 0; i < rowsA; i++)
          {
               for (int j = 0; j < colsA; j++)
               {
                    sum[i][j] = A[i][j] + B[i][j];
               }
          }
          print(sum, rowsA, colsA, "Addition : A+B ");
          for (int i = 0; i < rowsA; i++)
          {
               for (int j = 0; j < colsA; j++)
               {
                    substract[i][j] = A[i][j] - B[i][j];
               }
          }
          print(substract, rowsA, colsA, "Subtraction : A-B ");
     }
     else
     {
          cout << "Addition and subtraction not possible." << endl;
     }
     if (colsA == rowsB)
     {
          for (int i = 0; i < rowsA; i++)
          {
               for (int j = 0; j < colsB; j++)
               {
                    product[i][j] = 0;
               }
          }
          for (int i = 0; i < rowsA; i++)
          {
               for (int j = 0; j < colsB; j++)
               {
                    {
                         for (int k = 0; k < colsA; k++)
                         {
                              product[i][j] += A[i][k] * B[k][j];
                         }
                    }
               }
          }
          print(product, rowsA, colsB, "Multiplication A * B : ");
     }
     else
     {
          cout << "Multiplication not possible " << endl;
     }

     return 0;
}
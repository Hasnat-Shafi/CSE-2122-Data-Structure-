#include <bits/stdc++.h>
using namespace std;
// Copy elements of a 2D array into a 1D/linear array and print the elements of group 3 from the 1D array.
int main()
{
     const int row = 4;
     const int col = 4;
     int twoD[row][col] = {
         {1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15, 16}};
     int oneD[row * col];
     int index = 0;
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               oneD[index++] = twoD[i][j];
          }
     }
     
     for (int i = 0; i < row * col; i++)
     {
          cout << oneD[i] << ' ';
     }
     cout << endl;
     int group = 3;
     int start = (group - 1) * col;
     int end = start + col;
     for (int i = start; i < end; i++)
     {
          cout << oneD[i] << ' ';
     }
     cout << endl;
}
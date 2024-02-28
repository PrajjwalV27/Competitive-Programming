// Given a 2-D matrix of dimensions 'N' x 'M', each row of the matrix is sorted in non-decreasing order, and each column is sorted in non-decreasing order.

#include <bits/stdc++.h> 
bool findInMatrix(int x, vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int row = 0, col = m-1;
    while(row < n && col >= 0){
        if (arr[row][col]==x) return true;
        else if(arr[row][col]<x) row++;
        else col--;
    }
    return false;
}

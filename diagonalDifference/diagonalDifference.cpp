//@autor: Guillermo Andres Urbano
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void printArray(vector<int> array);
void printMatrix(vector<vector<int>> matrix);
int diagonalDifference(vector<vector<int>> matrix);

int main(){

  vector<int> row1{11,2,4};
  vector<int> row2{4,5,6};
  vector<int> row3{10,8,-12};
  vector<vector<int>> matrix{row1, row2, row3};
  printMatrix(matrix);
  cout << diagonalDifference(matrix) << endl;
  return 0;
}

int diagonalDifference(vector<vector<int>> matrix){
  int diagonalLeft = 0;
  int diagonalRight = 0;
  int diagonalDifference = 0;
  for(int left=0,right=matrix.size()-1; left < matrix.size(); left++,right--){
    //El primer left ira iterando sobre las rows
    //Second right go to iterator until the columns
    diagonalLeft += matrix.at(left).at(left);
    diagonalRight += matrix.at(left).at(right);
  }
  cout << "diagonalLeft: "<<diagonalLeft << endl;
  cout << "diagonalRight: " << diagonalRight << endl;
  diagonalDifference = abs( diagonalLeft - diagonalRight );
  return diagonalDifference;
}
    

 void printMatrix(vector<vector<int>> matrix){
  for(vector<int> array : matrix){
    printArray(array);
    cout<<endl;
  }
}

//cout << array; not exits method toString in data Structure yet. 
void printArray(vector<int> array){
  //This is for-each in c++, is like iterator
  for(int x : array){
    cout << x << ", ";
  }
}

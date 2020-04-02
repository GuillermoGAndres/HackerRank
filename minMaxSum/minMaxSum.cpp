//@author: Guillermo Andres Urbano
#include <iostream>
#include <vector>

using namespace std;
void printVector(vector<int> arr);
void minMaxSum(vector<int> arr);

int main(){
  vector<int> array{793810624, 895642170, 685903712, 623789054,468592370};
  //OUTPUT: 2572095760 2999145560
  printVector(array);
  minMaxSum(array);
  return 0;
}

/*
Funcion going print single line with two vulues space-separate
long integer
*/
void minMaxSum(vector<int> arr){
  long long sum = 0; //64 integer 64bits
  int min = arr.at(0);
  int max = arr.at(0);
  vector<int>::iterator aux;
  //Method greedy, we hava to find optime solucion
  //Choose smaller and gratest
  //First to find maxime so it want say that all are menores
  for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++){
    if(*it >= max){
      max = *it;
      aux = it;
    }
  }
  arr.erase(aux);
  printVector(arr);
  //Add all number because all are smaller than max
  for(int item : arr){
    sum += item;
  }
  cout << "sumMin: " << sum << endl;
  //Now, add our value missing max
  arr.push_back(max);
  printVector(arr);
  sum = 0;
  //To find el menor
  for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++){
    if(*it <= min){
      min = *it;
      aux = it;
    }
  }
  arr.erase(aux);
  printVector(arr);
  for(int item : arr){
    sum += item;
  }
  cout <<"sumMax: " << sum <<endl;
}
    
    
    
      
void printVector(vector<int> arr){
  for(int i : arr){
    cout << i << ", ";
  }
  cout<<endl;
}

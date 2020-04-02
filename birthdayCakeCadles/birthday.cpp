#include <iostream>
#include <vector>

using namespace std;
void printArray(vector<int> a);

int main(){
  short numCandles = 0;
  vector<int> arr;
  cin >> numCandles;
  for(int i=0; i<numCandles; i++){
    int item;
    cin >> item;
    arr.push_back(item);
  }
  printArray(arr);
  cout << arr.at(0);
  
  return 0;
}

void printArray(vector<int> a){
  for(int x : a){
    cout << x << " ,";
  }
  cout << endl;
}

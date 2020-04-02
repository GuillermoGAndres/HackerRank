#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> array{3,3,10,2,20,40,30,40,30, 40, 200, 43, 4,3, 200, 3, 4,200,34,33,2,2};
  int max=array[0];
  int numMax=0;
  for(int i=1; i< array.size(); i++){
    if(array.at(i) > max){
      max = array[i];
      numMax = 1;
    }else if(array[i] == max){
      numMax++;
    }
  }
  cout << max << endl;
  cout << numMax <<endl;
  return 0;
}

      
  

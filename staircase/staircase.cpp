#include <iostream>

using namespace std;
void staircase(short n);

int main(){
  short n; //0 < n < 100
  cin >> n;
  staircase(n);
  return 0;
}

void staircase(short n){
  string symbol = "#";
  char symb = '#';
  char space = ' ';
  /*
  //This comporte n^2 n cuadratic 
  for(short i=0; i < n; i++){
    for(short j=0; j<i+1; j++){
      cout << symbol;
    }
    cout << endl;
  }
  */
  /*
  //This manner will be lineal w(o) = n
  for(short i=0; i < n; i++){
    cout << symbol << endl;
    //concatenate string
    symbol += "#";
  }
  */
  
  for(int i=n; i >0; i--){
    //This for I can that going draw space
    for(int j=0; j < i-1; j++){
      cout << space;
    }
    //This for I can draw cats
    for(int k=i-1; k < n; k++){
      cout << symb;
    }
    cout << endl;
  }
  
}

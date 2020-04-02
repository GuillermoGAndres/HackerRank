#include <bits/stdc++.h>
#include <ostream>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
  char symb = '#';
  char space = ' ';
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

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  staircase(n);

  return 0;
}

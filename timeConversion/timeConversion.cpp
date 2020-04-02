#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
  /*
   * Write your code here.
   */
  string hours="";
  string min="";
  string seg="";
  string expresion;
  for(char letter : s){
    if(letter == ':'){
      break;
    }
    hours += letter;
  }
  int a = stoi(hours) + 12;
  string b = std::to_string(a);
  cout << b << endl;
  return s;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  // getline(cin, s);

  //string result = timeConversion(s);
  string result = timeConversion("07:05:45PM");

  fout << result << "\n";

  fout.close();

  return 0;
}

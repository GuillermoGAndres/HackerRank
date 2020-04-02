#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {

  //Fisrt I have that know how much number positives, negatives and zero;
  int positives = 0;
  int negatives = 0;
  int zeros = 0;
  //Iterator above array
  vector<int>::iterator it = arr.begin();
  while(it != arr.end()){
    int item = *it;
    if(item > 0){
      positives += 1;
    }else if( item < 0){
      negatives++;
    }else{
      zeros += 1;
    }
    it++;
  }
  /*
    cout << zeros << endl;
    cout << arr.size() << endl; //La divicion de 2 enteros -> entero 
    cout << (float) zeros / arr.size() << endl; //flotanta/entero -> float
    float result = zeros / (float) arr.size();*/
  // cout << fixed << result << endl; //casteo a zero
  float result = positives / (float) arr.size();
  cout << fixed << setprecision(6) << result << endl;
  result = negatives / (float) arr.size();
  cout << fixed << setprecision(6) << result << endl;
  result = zeros / (float) arr.size();
  cout << fixed << setprecision(6) << result << endl;
}

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string arr_temp_temp;
  getline(cin, arr_temp_temp);

  vector<string> arr_temp = split_string(arr_temp_temp);

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    int arr_item = stoi(arr_temp[i]);

    arr[i] = arr_item;
  }

  plusMinus(arr);

  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
										return x == y and x == ' ';
									      });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}

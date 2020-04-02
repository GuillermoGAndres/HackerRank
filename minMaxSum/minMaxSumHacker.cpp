#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
  long long sum = 0;
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
  //printVector(arr);
  //Add all number because all are smaller than max
  for(int item : arr){
    sum += item;
  }
  cout <<sum << " ";
  //Now, add our value missing max
  arr.push_back(max);
  //printVector(arr);
  sum = 0;
  //To find el menor
  for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++){
    if(*it <= min){
      min = *it;
      aux = it;
    }
  }
  arr.erase(aux);
  //printVector(arr);
  for(int item : arr){
    sum += item;
  }
  cout<< sum <<endl;
}

int main()
{
  string arr_temp_temp;
  getline(cin, arr_temp_temp);

  vector<string> arr_temp = split_string(arr_temp_temp);

  vector<int> arr(5);

  for (int i = 0; i < 5; i++) {
    int arr_item = stoi(arr_temp[i]);

    arr[i] = arr_item;
  }

  miniMaxSum(arr);

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

//@author Guillermo Andres Urbano
#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;
void printArray(vector<int> array);
vector<int> readInputsTerminal();
void plusMinus(vector<int> arr);

int main(){
  //vector<int> array = readInputsTerminal(); You wish read terminal
  vector<int> array{-4, 3, -9, 0, 4, 1}; //Initializing the array
  printArray(array);
  plusMinus(array);
  return 0;
}

/*CHALLENGE
  Find fraction*/
void plusMinus(vector<int> arr){
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
//Read inputs from terminal
vector<int> readInputsTerminal(){
  int n; // 0 < n < 100
  cin >> n; //n := number cases
  vector<int> array(n); //define lenght of n elements with initiazation zero 0
  for(short i=0; i < n; i++){
    int number;
    cin >> number;
    // array.push_back(number); los podrias atras de los n element initialized
    array[i] = number;
  }
  return array;
}

void printArray(vector<int> array){
  for(int item : array){
    cout << item << ", ";
  }
  cout<<endl;
}

    

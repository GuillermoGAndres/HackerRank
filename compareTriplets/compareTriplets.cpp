#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> readInputsTerminal();
void printDataStructure(vector<vector<int>> dataStructure);
vector<int> compareTriplets(vector<int> array1, vector<int> array2);


int main(){
  vector<vector<int>> dataStructure = readInputsTerminal();
  printDataStructure(dataStructure);
  vector<int> array = compareTriplets(dataStructure.at(0), dataStructure.at(1));
  cout << array[0] << " ";
  cout << array[1];
  return 0; 


/*TARGET
The target is understand that is one number isnt more than other number 
so could be less than otro or equal to.
*/
vector<int> compareTriplets(vector<int> array1, vector<int> array2){
  short pointsAlice=0, pointsBob=0;
  vector<int> dataStructure;
  for(int i=0; i < 3; i++){
    if(array1[i] > array2[i])
      pointsAlice++;
    else if ( array1[i] < array2[i]) //significa que solo hay dos opciones o que es menor o que es igual, so decidimos
      pointsBob++;
  }
  dataStructure.push_back(pointsAlice);
  dataStructure.push_back(pointsBob);
  return dataStructure;
}



/* Shape STATIC (BY VALUE)
Read the inputs from term
Return in vector with the inputs
*/
vector<vector<int>> readInputsTerminal(){
  vector<vector<int>> dataStructure;
  vector<int> array1;
  vector<int> array2;
  //int cases;
  //cin >> cases; 
  //In this cases, one case have two enputs Alice and bob rates, every cases with have three values
  //First read the inputs of Alice
  for(int i=0; i<3; i++){
    int item;
    cin >> item;
    array1.push_back(item);
  }
  
  for(int i=0; i<3; i++){
    int item;
    cin >> item;
    array2.push_back(item);
  }
  dataStructure.push_back(array1);
  dataStructure.push_back(array2);
  return dataStructure;
}

void printDataStructure(vector<vector<int>> dataStructure){
  vector<vector<int>>::iterator it = dataStructure.begin();
  cout << "[ ";
  while( it != dataStructure.end()){
    cout << "[ ";
    vector<int>::iterator itt = (*it).begin();
    while( itt != (*it).end() ){
      cout << *itt << ", ";
      itt++;
    }
    cout << "] ";
    it++;
  }
  cout << "] "<< endl;
}
  

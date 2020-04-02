//@author: Guillermo Andres Urbano
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void readInputsTerminal(vector<long>* dataStructure);
void printDataStructure(vector<long>* dataStructure);
long long int aVeryBigSum(vector<long>* array);
void readInputsFile(vector<long>* dataStructure, string path);

int main(){
  vector<long>* array = new vector<long>; //You are creatting a type dynamically with pointer
  //readInputsTerminal(array); //First shape until the terminal
  readInputsFile(array, "sampleInput.txt"); //Second shape until the extern file
  printDataStructure(array);
  long long sum = aVeryBigSum(array); //Is the same long long = long long int, prepocesador lo poner automaticamente
  cout << sum << endl;
  return 0;
}

/*TARGET
Return the sum the items of array 
*/
long long int aVeryBigSum(vector<long>* array){
  long long int sum=0;
  for(vector<long>::iterator i=array->begin(); i != array->end(); i++){
    sum += *i;
  }
  return sum;
}
  
/*
Read the inputs from terminal will be of way DINAMIC (by reference)
Going to need one data Structure like parameter
*/
void readInputsTerminal(vector<long>* dataStructure){
  short cases=0;
  cin >> cases;
  for(short i=0; i<cases; i++){
    long item;
    cin >> item;
    dataStructure->push_back(item);
  }
  //return dataStructure; ya no regrearia nada porque ya el vector original fue modificado.
}

void readInputsFile(vector<long>* dataStructure, string path){
  ifstream file(path); // is the same file.open(path);
  string line;
  int cases=0;
  int numLine=0;
  //vector<int> dataStructure;
  //cout << "dataStructure: " << dataStructure.size() << endl;
  if(file.is_open()){
    while(getline(file, line)){
      numLine++;
      if(numLine == 1){
	//Those want to say that we have read numbers cases
	//Tenemos que convertir ese string en un numero
	cases = stoi(line);
      }else{
	//Se tiene que analizar la linea para obtener solamente los numeros y
	//no los espacios, lo mas facil que se me ocurre en la mente
	//partiendo con la premisa es que un numero es todo hasta que llegue al
	//espacio
	string number = "";
	for(string::iterator it = line.begin(); it != line.end(); it++){
	  if(*it != ' '){//comparamos caracter by caracter because return char *it
	    number.push_back(*it);
	  }
	  else{
	    //Significa que ya acabo el numero y ya podemos verlo como todo un
	    //numero completo.
	    dataStructure->push_back(stoi(number));
	    number = ""; //Se inicializa desde cero.
	  }
	}
	//Se quedo el ultimo numero de agregarse porque se acaba la cadena
	//You should add 
	dataStructure->push_back(stoi(number));
	number = "";
      }	
    }
    file.close();
  }
  else{
    cout << "No se pudo abrir el archivo" << endl;
  }

  //cout << "dataStructure: " << dataStructure.size() << endl;
  //return dataStructure;
}
  
  
void printDataStructure(vector<long>* dataStructure){
  vector<long>::iterator it = dataStructure->begin();
  while( it != dataStructure->end() ){
    cout << "| " << *it << " | ";
    it++;
  }
  cout<<endl;
}


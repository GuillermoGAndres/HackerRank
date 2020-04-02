#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
//Declaraciones deben de ir abajo namespace sino tendria que poner std::vector
int simpleArraySuma(vector<int> array);
vector<int> readFileInputs();
void printDataStructure(vector<int> dataStructure);

int  main(){
  cout << "Leyendo las inputs in terminal " << endl;
  int casos;
  cin >> casos;
  //Crar el arreglo del tamaño casos (vector)
  vector<int> array;
  /*test: array.push_back(44);
    cout << array.at(0) << endl;*/
  for(int i=0; i < casos; i++){
    int item;
    cin >> item;
    array.push_back(item);
  }
  //Para probar un iterardor
  /*
  vector<int>::iterator it = array.begin();
  while(it != array.end()){
    cout << "it = " << *it << endl;
    it++;
  }
  */
  cout << simpleArraySuma(array) << endl;

  cout << "******************************************* " << endl;
  cout << "Solve this wiht files separates INPUT/OUTPUT !" << endl;
  cout << "Leyendo las inputs desde un archivo separado " << endl;
  array = readFileInputs();
  //Lets print data strucuture
  printDataStructure(array);
  cout << simpleArraySuma(array) << endl;
  return 0;
}

int simpleArraySuma(vector<int> array){
  int suma = 0;
  vector<int>::iterator it = array.begin();
  while(it != array.end()){
    cout << "it = " << *it << endl;
    suma  += *it;
    it++;
  }
  return suma;
}

//Para probar nuestros casos pruebas sin tener que escribir en la terminal( llamada
//entrada estandar)mejor las leerremos de un archivo, el cual contendra las entradas
//y en otro archivos sacaremos las salidas, asi que crearemos funciones que hagan eso

vector<int> readFileInputs(){
  ifstream file ("sampleInput.txt");
  string line;
  int cases=0;
  int numLine=0;
  vector<int> dataStructure;
  cout << "dataStructure: " << dataStructure.size() << endl;
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
	    dataStructure.push_back(stoi(number));
	    number = ""; //Se inicializa desde cero.
	  }
	}
	//Se quedo el ultimo numero de agregarse porque se acaba la cadena
	//You should add 
	dataStructure.push_back(stoi(number));
	number = "";
      }	
    }
    file.close();
  }
  else{
    cout << "No se pudo abrir el archivo" << endl;
  }

  cout << "dataStructure: " << dataStructure.size() << endl;
  return dataStructure;
}

//Imprime el contenido de tu estructura de datos
//In this case it will be a vector<type>
void printDataStructure(vector<int> dataStructure){
  vector<int>::iterator it = dataStructure.begin();
  while( it !=  dataStructure.end() ){
    cout << "| " << *it << " |" ;
    it += 1;
  }
  cout<<endl;
}

   

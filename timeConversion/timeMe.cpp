#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */

    string hour = s.substr(0,s.find(":"));
    string format;
    size_t pos = s.find("PM");
    //Una forma de hacerlo
    if(pos != string::npos){
	format = s.substr(pos);
    }else{
	pos = s.find("AM");
	format = s.substr(pos);
    }
    /* Una segunda forma de hacerlo 
    try{
    format = s.substr(s.find("PM"));
    }catch(out_of_range a){
    //cout << "Hola" << endl;
    format = s.substr(s.find("AM"));
    }
    */
    cout << hour << endl;
    cout << format << endl;
    if(format == "AM"){
	if(hour == "12")
	    //Significa que en hora militar se reinica desde 0
	    cout << s.replace(0, s.find(":"), "00") <<endl;
	else
	    //Significa que en hora militar es la misma solo sin AM
	    cout << s.replace(pos,3, "") << endl;
    }else{
	//Quiere decir que el formato es PM
	if(hour == "12")
	    //Significa que en hora militar es la misma pero sin el PM
	    cout << s.replace(pos,3,"") << endl;
	else{
	    //Significa que debemos de sumarle 12 horas
	    //Ahora solo lo remplazamos y quitamos AM o PM
	    string newHour = to_string( (stoi(hour) + 12) );
	    string newTime = s.replace(0, s.find(":"), newHour);
	    cout << s.replace(0, s.find(":"), newHour).replace(pos,3, "") << endl;
	}
    }
    return "";
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    // getline(cin, s);

    //string result = timeConversion(s);
    string result = timeConversion("01:05:45PM");

    fout << result << "\n";

    fout.close();

    return 0;
}

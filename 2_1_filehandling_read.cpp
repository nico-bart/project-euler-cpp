// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
	string wholefile = "";
  ifstream myfile ("example.txt");

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
			wholefile += line;
      //cout << line << '\n';
    }
		cout << wholefile;
    myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}

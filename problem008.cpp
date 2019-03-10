#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

//using namespace std;

std::string ExePath() {
    char buffer[MAX_PATH];
    GetModuleFileName( NULL, buffer, MAX_PATH );
    std::string::size_type pos = std::string( buffer ).find_last_of( "\\/" );
    return std::string( buffer ).substr( 0, pos);
}

int main()
{
	// check working directory
	std::cout << "My directory is " << ExePath() << "\n";

	// read file problem008.dat and save without \n in string wholefile
	std::string line;
	std::string wholefile = "";
  std::ifstream myfile ("problem008.dat", std::ios::in);

  if (myfile.is_open())
  {
    while ( getline (myfile, line) )
    {
			wholefile += line;
      //cout << line << '\n';
    }
		// std::cout << wholefile;
    myfile.close();
  }
  else std::cout << "Unable to open file";

	std::string::size_type sz;
	// for (int i=0; i < wholefile.)
	std::string temp = wholefile.substr(0, 13);
	std::cout << temp.length();
	int tempInt = std::stoi(temp, &sz);
	std::cout << tempInt;
}


//
// int main () {
//   std::ofstream myfile;
//   myfile.open ("example2.txt", std::ios::out | std::ios::app);
//   if (myfile)
//   {
//     myfile << "Writing this to a file.\n";
//     myfile.close();
//   }
//   else
//   {
//     std::cout << "Error opening example.txt\n" << std::endl;
//   }

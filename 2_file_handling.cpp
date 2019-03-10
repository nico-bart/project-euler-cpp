// basic file operations
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

int main () {
	std::cout << "My directory is " << ExePath() << "\n";

  std::ofstream outputFile;
  outputFile.open ("example.txt", std::ios::out | std::ios::app);

  if (outputFile.is_open())
  {
		for (int i = 0; i < 5; i++)
		{
				outputFile << "Writing this to a file." << i << "\n";
		}
  }
  else
  {
    std::cout << "Error opening example.txt\n" << std::endl;
  }
	outputFile.close();

  return 0;
}

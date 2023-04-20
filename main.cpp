#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(){
  string filename;
  ifstream iFile;

  cout << "Filename: ";
  cin >> filename;

  iFile.open(filename);

  if (iFile.fail()){
    cout << "File failed to open." << endl;

    return 1;
  }
  cout << "File has opened." << endl;
  vector<string> contents;
  string line;

  // while(!iFile.eof()){
  //   getline(iFile, line);
  //   cout << line << endl;
  //   contents.push_back(line);
    
  // }
  

  iFile.close();

  for(auto fileLine : contents){
    cout << fileLine << endl;
  }

  return 0;
}
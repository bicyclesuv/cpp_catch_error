#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
  ofstream fs;
  try{
    fs.open("./ord.txt");
      }   catch (const runtime_error &e){
	 cerr<<e.what()<<"error comes\n";
	 //      throw runtime_error("hello error hapens");
  }
  string str;
  cin>>str;
  fs<<str;
  fs.close();
  return 0;
}
  

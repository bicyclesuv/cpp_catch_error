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


  int abc= 6;
  string str2;
  try {
    str2 = abc;
  } catch (const exception ce){
    cout<<ce.what()<<"cannot simply cast a int to a sring"<<endl;
  }
  cout<<str2;
  cout<<"run to here"<<endl;
  return 0;
}
  

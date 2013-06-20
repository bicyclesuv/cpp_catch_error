#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

double dfactor(double x, double y)
{
  double z;
  if(y == 0)
    {
      throw y;
    }
  return x/y;
}
int main()
{
  double factored = 0;
  double m = 3,n = 2;
  cin>>m>>n;
  try {
    factored = dfactor(m,n);
    cout<<"quotien of "<<m<<"and "<<n<<"is "<<factored<<endl;

cin>>m>>n;
    factored = dfactor(m ,n);
  } catch(double){
    cout<<"err while dividing."<<endl;
    
  }
  return 0;
}
  

  

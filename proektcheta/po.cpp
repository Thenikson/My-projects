#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,y;
int x=0;
cout<<"Vavedete stoinosti na a, b, c (y=axx+bx+c)"<<endl;
cin>>a>>b>>c;
do
{y=(a*(x++)*(x))+(b*(x))+c;
  cout<<"Y= "<<y<<endl;
  if(y==0)
  {
   //cout<<"Y=0"<<endl;
   break;}
}
while(x<5);

return 0;
}

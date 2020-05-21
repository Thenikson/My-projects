#include<iostream>
using namespace std;

  class Fraction
    {
        int n, d;
    public:
        Fraction(int x, int y) : n(x), d(y) {}
        int eqal() {return n%d; }
    };



int main()
{
   int a,b;
   cout<<"vavedete chislata"<<endl;
   cout<<"a=";
   cin>>a;
   cout<<"b=";
   cin>>b;

   Fraction fun(a,b);
   if(fun.eqal()==0)
    cout<<"delqt secelochisleno"<<endl;
   else
    cout<<"ne se delqt celochisleno"<<endl;
    return 0;
}

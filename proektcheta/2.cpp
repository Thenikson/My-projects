#include <iostream>
using namespace std;
int main()
{
char a, b;
cout<<"Vavedete 2 simvola ot klaviaturata"<<endl;
cin>>a>>b;
if((a==b)||(b==a))
cout<<"Dvata simvola sa ednakvi";
else
cout<<"Dvata simvola ne sa ednakvi";
return 0;
}

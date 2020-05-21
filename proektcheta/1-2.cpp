#include <iostream>
using namespace std;
int main()
{
int n, m;
cout<<"Vuvedete 2 nomera za da se izchisli broq na kolchetata mejdu tqh i razstoiqnieto \nrazstoqnieto mejdu 2 kolcheta e: 1m"<<endl;
cin>>m>>n;
if(m>n)
{
cout<<"Broqt na kolchetata mejdu dvata nomera e: "<<(m-n)-1<<endl;
cout<<"Razstoqnieto mejdu dvete kolcheta e: "<<m-n<<"m"<<endl;
}
else if(n>m)
{
cout<<"Broqt na kolchetata mejdu dvata nomera e: "<<(n-m)-1<<endl;
cout<<"Razstoqnieto mejdu dvete kolcheta e: "<<n-m<<"m"<<endl;
}
return 0;
}

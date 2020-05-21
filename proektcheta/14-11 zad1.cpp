#include <iostream>
using namespace std;
int main()
{
int x, y, z;
cout<<"Vavedete duljina, shirochina i visochina na tuhlata, chiito stoinosti sa pod 100"<<endl;
cout<<"Duljina: "<<endl;
cin>>x;
cout<<"Shirochina: "<<endl;
cin>>y;
cout<<"Visochina"<<endl;
cin>>z;
if(x>100||y>100||z>100)
cout<<"Stoinostite sa nad 100"<<endl;
if(x<100&&y<100&&z<100){
//cout<<"Lamarinniqt list ima minimalna plosht na shirochinata po duljinata: "<<2*x+2*y<<" kv.sm"<<endl;
//cout<<"Lamarinniqt list ima minimalna plosht na shirochinata po visochinata: "<<2*z+2*y<<" kv.sm"<<endl;
//cout<<"Lamarinniqt list ima minimalna plosht na visochinata po duljinata: "<<2*x+2*z<<" kv.sm"<<endl;
cout<<"Lamarinniqt list ima minimalna plosht: "<<((2*x+2*y)+1)+((2*z+2*y)+1)+((2*x+2*z)+1)<<endl;}
return 0;
}

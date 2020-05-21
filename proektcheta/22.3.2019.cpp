#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack <int> stack;
	int a, b, c;
	cout<<"chislo i sistema =";
	cin>>a>>b;
	while(a)
	{
		c=a%b;
		a=a/b;
		stack.push(c);
	}
	while(!stack.empty())
	{
		c=stack.top();
		stack.pop();
		if(c>=10) 
		cout<<char(65+c-10);
		else 
		cout<<c;
		}
		return 0;
}


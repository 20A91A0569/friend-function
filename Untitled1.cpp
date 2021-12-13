#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y;
	public:
		void get()
		{
			cout<<"enter x,y values:";
			cin>>x>>y;
			}	
			friend void sum(sample s);
};
void sum(sample s)
{
	cout<<"sum of x and y="<<s.x+s.y;
}
int main()
{
	sample s;
	s.get();   
	sum(s);
	return 0;
}

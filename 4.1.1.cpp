#include <iostream>
using namespace std;

class Calculator
{ 
	private:
	int num;
	
	public:
	float add(float x , float y);
{
	return x+y;
}
	float add(float x, float y, float z);
{
	return x+y+z; 
}
};
 	int main()
{
	Calculator cal;
	cout<<"The addn 1 is : "<<cal.add(3,7);
	cout<<"The addn 2 is : "<<cal add(2,3,4);
	return 0;
}

#include <iostream>
using namespace std;
class Person
{
	public:
	void walk()
{
	cout<< "The person is walking";
}
};
class student : public Person
{
	public:
	void walk()
{
	cout<< "The student is walking";
}
};
int main()
{
Person *ptr;
student s;
ptr=&s;
ptr-> walk();
return 0;
}

//thi is another example

//sadly Kings are out of playoffs

#include <iostream>
#include <string>

//add "thing"

class Cosa
{
public:
	Cosa() { std::cout << "Default" << std::endl; }

	Cosa(int a) { std::cout << "Param" << std::endl; }
protected:
	int x;
};
//committed

//do inheritance
class ColorCosa : public Cosa
{
	std::string color;	//By default it's private
	//In a class, if you forget to add "private" and add a field (int, string, etc)
public:
	ColorCosa(int a) 
	{ 
		x = 0; //to fix this error, you can make a getter function in Cosa, make them friends, OR make the private in Cosa protected
		color = "no color";
	}
};

//add a flavor
class FlavorCosa : public Cosa
{
	std::string flavor;

};

int main()
{
	std::cout << "Hello world!" << std::endl;
	return 0;
}
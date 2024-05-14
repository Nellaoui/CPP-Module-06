#include <random>
#include <ctime>
#include <iostream>



class Base
{
public:
	virtual ~Base();
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

Base::~Base() {}

Base* generate(void)
{
	std::srand(std::time(0));

	int randomNumber;
	randomNumber = std::rand() % 3;
	switch (randomNumber)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
		break;

	default:
		return 0;
	}
}

void identify(Base* p)
{
	if (p == NULL)
	{
		std::cout << "somthing went wrong" << std::endl;
		return ;
	}
	if (A *a = dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (C *c = dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unkown" << std::endl;

}

void identify(Base& p)
{
	char  type = '0';
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		type = 'A';

	}
	catch(const std::bad_cast &e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		type = 'B';

	}
	catch(const std::bad_cast &e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		type = 'C';

	}
	catch(const std::bad_cast &e){}

	if (type != '0')
		std::cout << "The type is : <" << type << ">" << std::endl;
	else
		std::cout << "Unkown Type" << std::endl;
}

int main()
{
	Base a;
	Base *b;
	b = generate();
	std::cout << "before generate : " << b << std::endl;
	b = generate();
	std::cout << "after generate :"  << b << std::endl;
	identify(b);
	identify(*b);
	// delete b;


	// a.print();
}

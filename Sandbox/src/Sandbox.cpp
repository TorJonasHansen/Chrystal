#include <Chrystal.h>

class Sandbox : public Chrystal::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Chrystal::Application* Chrystal::CreateApplication()
{
	return new Sandbox();
}
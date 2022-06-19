#include <Gec.h>

class Sandbox : public Gec::Application
{
public:
	Sandbox(){}

	~Sandbox(){}
};

Gec::Application* Gec::CreateApplication()
{
	return new Sandbox();
}
#pragma once

#ifdef GC_PLATFORM_WINDOWS

extern Gec::Application* Gec::CreateApplication();

int main(int argc, char** argv)
{	
	printf("GEC started");
	auto app = Gec::CreateApplication();
	app->Run();
	delete app;
}

#endif
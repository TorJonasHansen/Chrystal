#pragma once

#ifdef CH_PLATFORM_WINDOWS
	
extern Chrystal::Application* CreateApplication();

int main()
{
	printf("Initialized Chrystal!");
	auto application = Chrystal::CreateApplication();
	application->Run();
	delete application;
}

#endif

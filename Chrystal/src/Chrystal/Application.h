#pragma once

#include "Core.h"

namespace Chrystal {

	class CHRYSTAL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}


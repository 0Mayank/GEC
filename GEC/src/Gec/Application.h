#pragma once

#include "Core.h"

namespace Gec {

	class GEC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

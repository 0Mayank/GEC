#pragma once

#ifdef GC_PLATFORM_WINDOWS
	#ifdef GC_BUILD_DLL
		#define GEC_API __declspec(dllexport)
	#else
		#define GEC_API __declspec(dllimport)
	#endif
#else
	#error Gec only supports Windows
#endif
#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_DLL_EXPORT
		#define CHRYSTAL_API __declspec(dllexport)
	#else
		#define CHRYSTAL_API __declspec(dllimport)
	#endif
#endif

#pragma once

#if defined(CH_PLATFORM_WINDOWS) && defined(CH_DLL_EXPORT)
	#define CHRYSTAL_API __declspec(dllexport)
#elif defined(CH_PLATFORM_WINDOWS)
	#define CHRYSTAL_API __declspec(dllimport)
#else
	#define CHRYSTAL_API
#endif
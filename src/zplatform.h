#ifndef __ZEBRA_PLATFORM_H__
#define __ZEBRA_PLATFORM_H__

#include "zglobal.h"

ZEBRA_BEGIN_NAMESPACE

// only support linux now
#ifdef __linux__
	#include <stdint.h>
#else
	#error
#endif

#ifdef __linux__
	typedef int8_t int8;
	typedef int16_t int16;
	typedef int32_t int32;
	typedef int64_t int64;

	typedef uint8_t uint8;
	typedef uint16_t uint16;
	typedef uint32_t uint32;
	typedef uint64_t uint64;
#else
	#error
#endif

ZEBRA_END_NAMESPACE

#endif
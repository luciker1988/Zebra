#ifndef __ZEBRA_IO_MULTIPLEXER_H__
#define __ZEBRA_IO_MULTIPLEXER_H__

#include "zio_module_impl.h"

ZEBRA_BEGIN_NAMESPACE

	class IOMultiplexer
		:public IOModuleImpl
	{
	public:
		IOMultiplexer();
		virtual ~IOMultiplexer();
	};

ZEBRA_END_NAMESPACE

#endif
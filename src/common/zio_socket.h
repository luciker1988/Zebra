#ifndef __ZEBRA_IO_SOCKET_H__
#define __ZEBRA_IO_SOCKET_H__

#include "zio_module_impl.h"

ZEBRA_BEGIN_NAMESPACE

	class IOSocket
		:public IOModuleImpl
	{
	public:
		IOSocket();
		virtual ~IOSocket();
	};

ZEBRA_END_NAMESPACE

#endif
#ifndef __ZEBRA_IO_MANAGER_H__
#define __ZEBRA_IO_MANAGER_H__

#include "common/zio_module.h"

ZEBRA_BEGIN_NAMESPACE

	class IOMultiplexerImpl;

	class IOManager
		:public IOModule
	{
	public:
		IOManager();
		~IOManager();

	private:
		IOMultiplexerImpl *m_pImpl;
	};

ZEBRA_END_NAMESPACE

#endif
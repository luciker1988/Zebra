#ifndef __ZEBRA_IO_MULTIPLEXER_IMPL_H__
#define __ZEBRA_IO_MULTIPLEXER_IMPL_H__

#include "common/zio_multiplexer.h"

ZEBRA_BEGIN_NAMESPACE

	class IOModule;

	class IOMultiplexerImpl
		:public IOMultiplexer
	{
	public:
		IOMultiplexerImpl();

	private:
		IOModule* m_pModule;
	};

ZEBRA_END_NAMESPACE

#endif

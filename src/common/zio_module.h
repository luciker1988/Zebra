#ifndef __ZEBRA_IO_MODULE_H__
#define __ZEBRA_IO_MODULE_H__

#include "zplatform.h"

ZEBRA_BEGIN_NAMESPACE

	class IOModule
	{
	public:
		IOModule();
		virtual ~IOModule();

	private:
		IOModule(const IOModule&);
		IOModule& operator=(const IOModule&);
	};

ZEBRA_END_NAMESPACE

#endif

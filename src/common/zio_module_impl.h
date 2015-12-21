#ifndef __ZEBRA_IO_MODULE_IMPL_H__
#define __ZEBRA_IO_MODULE_IMPL_H__

#include "zplatform.h"

ZEBRA_BEGIN_NAMESPACE

	class IOModuleImpl
	{
	public:
		IOModuleImpl();
		virtual ~IOModuleImpl();

	private:
		IOModuleImpl(const IOModuleImpl&);
		IOModuleImpl& operator=(const IOModuleImpl&);
	};

ZEBRA_END_NAMESPACE

#endif 
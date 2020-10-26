#include "types.h"

namespace runtime
{
	class itree
	{
	public:
		// node manager ------------------------------
		virtual int32_t LoadTree() = 0;

		virtual void Release() = 0;

		virtual int32_t Run() = 0;
	};
}


#include "common.h"
#include "interfaces/inode.h"

namespace behavior_tree
{
	namespace runtime
	{
		class node : public inode
		{
		private:
			NodeID m_node_id;

			NodeType m_node_type;

		};
	}
}



namespace behavior_tree 
{

	namespace runtime
	{

		typedef uint32_t NodeID;

		enum class NodeType
		{
			INVALID = 0,
			ACTION,

			MAX,
		};

		class inode
		{
		public:
			virtual void Run() = 0;
		};

	}

}


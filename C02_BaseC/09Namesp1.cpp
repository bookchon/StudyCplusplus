#include <iostream>

namespace BestComIopl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

	namespace ProgComImpl
	{
		void SimpleFunc(void)
		{
			std::cout << "ProgCom�� ������ �Լ�" << std::endl;
		}
	}

	int main(void)
	{
		BestComIopl::SimpleFunc();
		ProgComImpl::SimpleFunc();
		return 0;
	}
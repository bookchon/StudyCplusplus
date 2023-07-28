#include <iostream>

namespace BestComIopl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

	namespace ProgComImpl
	{
		void SimpleFunc(void)
		{
			std::cout << "ProgCom이 정의한 함수" << std::endl;
		}
	}

	int main(void)
	{
		BestComIopl::SimpleFunc();
		ProgComImpl::SimpleFunc();
		return 0;
	}
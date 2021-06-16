#include <iostream>
#include "BSOD.hpp"


int main() {
	BSODWork::KillSystemProcess();
	//BSODWork::CriticalProcNtSet();
	//BSODWork::CriticalProcess();
	//BSODWork::HardError();

	std::cin.get();
	system("pause");

}

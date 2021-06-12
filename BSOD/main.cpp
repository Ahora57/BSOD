#include <iostream>
#include "BSOD.hpp"


int main() {
	BSODWork::KillSystemProcess();
	//BSODWork::CriticalProcess();
	//BSODWork::HardError();

	std::cin.get();
	system("pause");

}

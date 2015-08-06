#include "Console.h"
#include <iostream>

void Console::vStartUp()
{
	std::cout << "Starting Console..." << std::endl;
}
void Console::vShutDown()
{
	std::cout << "Shutting down & cleaning Console..." << std::endl;
}
void Console::getString(std::string x)
{
	this->m_pString = x;
	x = "";
}
void Console::writeToConsole()
{
	std::cout << this->m_pString << std::endl;
}

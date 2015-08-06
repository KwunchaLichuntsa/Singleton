#include "Console.h"

int main()
{
	gConsole::sGetInstance().vStartUp();
	gConsole::sGetInstance().getString("Text-to-Console...");
	gConsole::sGetInstance().writeToConsole();
	gConsole::sGetInstance().vShutDown();
	return 0;
}
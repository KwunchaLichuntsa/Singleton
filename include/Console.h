#ifndef CONSOLE_H
#define CONSOLE_H

#include "Singleton.h"
#include <string>

class Console : public Singleton<Console>, IManager
{
	friend class Singleton<Console>;

	public:
		void vStartUp() override;
		void vShutDown() override;
		void getString(std::string x);
		void writeToConsole();

	protected:
		Console(){}
		virtual ~Console(){}

	private:
		std::string m_pString;
};

typedef Singleton<Console> gConsole;

#endif // CONSOLE_H
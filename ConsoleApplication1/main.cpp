
#include "stdafx.h"


int main()
{
	SetConsoleOutputCP(932);
	_setmode(_fileno(stdout), _O_U16TEXT);
	std::wcout << L"Testing unicode -- English -- わとし -- Español." << std::endl;
    return 0;
}


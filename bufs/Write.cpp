#include "Write.h"

Write::Write()
{
	fullPath = "";
}

Write::Write(std::string path)
{
	fullPath = path;
}

void Write::WriteLine(const std::string line)
{
	if (fullPath.empty()) return;
	
	fb.open(fullPath, std::ios::out);
	std::ostream os(&fb);

	os << line << std::endl;

	fb.close();
}

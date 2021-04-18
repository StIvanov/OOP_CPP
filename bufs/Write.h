#pragma once
#include <string>
#include<fstream>
class Write
{
private:
	std::string fullPath;
	std::filebuf fb;
public:
	Write();
	Write(const std::string);
	void WriteLine(const std::string);
};


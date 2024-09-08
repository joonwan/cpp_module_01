#include "InputFileHandler.hpp" 
#include "prog.hpp"

InputFileHandler::InputFileHandler(char* fileName): fileName(fileName)
{
}

std::string &InputFileHandler::getContent()
{
    return this -> content;
}

bool InputFileHandler::readFile()
{
	int				size;
	std::ifstream	in;

	in.open(this -> fileName);
	if (!in.is_open())
	{
		openFileErrorMessage();
		return false;
	}
	
	in.seekg(0, std::ios::end);
	size = in.tellg();
	in.seekg(0, std::ios::beg);
	this -> content.resize(size);
	in.read(&this -> content[0], size);
	return true;
}
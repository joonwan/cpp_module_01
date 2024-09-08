#include "FileCreator.hpp"

bool FileCreator::createNewFile(char *fileName, std::string &content)
{
    std::ofstream out;
    std::string outFileName(fileName);

    outFileName.append(".replace");
    out.open(outFileName.c_str());
    if (!out.is_open())
    {
        createFileErrorMessage();
        return false;
    }
    out << content;
    return true;
}
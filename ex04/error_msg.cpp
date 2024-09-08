#include "prog.hpp"

void    invalidArgumentCountMessage()
{
    std::cerr << "invalid argument count" << std::endl;
}

void    openFileErrorMessage()
{
    std::cerr << "cannot open file" << std::endl;
}

void    createFileErrorMessage()
{
    std::cerr << "cannot create file" << std::endl;
}
#include "Harl.hpp"

void Harl::debug(void)
{

}

void Harl::info(void)
{

}

void Harl::warning(void)
{

}

void Harl::error(void)
{

}

void Harl::complain(std::string level)
{
    void (*f)();

    if (level == "DEBUG")
        f = debug;
    else if (level == "INFO")
        f = info;
    else if (level == "WARNING")
        f = warning;
    else if (level == "ERROR")
        f = error;
}
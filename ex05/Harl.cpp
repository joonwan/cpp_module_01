#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[DEBUG] : ";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO] : ";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING] : ";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR] : ";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i;

    i = 0;
    std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fp[4])(void);
    fp[0] = &Harl::debug;
    fp[1] = &Harl::info;
    fp[2] = &Harl::warning;
    fp[3] = &Harl::error;

    while (i < 4)
    {
        if (names[i] == level)
            (this ->*fp[i])();
        i++;
    }
}

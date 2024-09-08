#ifndef CONTENTCHANGER_HPP
# define CONTENTCHANGER_HPP


#include <string>
#include "InputFileHandler.hpp"
#include <iostream>


class ContentChanger{

    private:
        std::string	s1;
        std::string	s2;
	
	public:
		ContentChanger(char *c1, char *c2);
		void	changeContent(InputFileHandler &inputFileHandler);
};

#endif
#ifndef INPUTFILEHANDLER_HPP
# define INPUTFILEHANDLER_HPP

#include <string>
#include <fstream>

class InputFileHandler{

    private:
        char*		fileName;
        std::string	content;

    public:
        InputFileHandler(char* fileName);
        std::string	&getContent();
        bool		readFile();

        
};

#endif
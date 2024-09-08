#ifndef FILECREATOR_HPP
# define FILECREATOR_HPP

# include "prog.hpp"
# include <string>
# include <fstream>

class FileCreator{
    public:
        static bool createNewFile(char *fileName, std::string &content);
};

#endif
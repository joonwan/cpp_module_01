#include "ContentChanger.hpp"

ContentChanger::ContentChanger(char *c1, char *c2)
{
    this -> s1 = std::string(c1); 
    this -> s2 = std::string(c2);
}

void    ContentChanger::changeContent(InputFileHandler &inputFileHandler)
{
    int idx;
    std::string &content = inputFileHandler.getContent();
    
    while (true)
    {
        if (content.find(this -> s1) == std::string::npos)
            break ;
        idx = content.find(this -> s1);
        content.erase(idx, this -> s1.length());
        content.insert(idx, this -> s2);
    }
}


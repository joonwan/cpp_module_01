#include "prog.hpp"
#include "InputFileHandler.hpp"
#include "ContentChanger.hpp"
#include "FileCreator.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        invalidArgumentCountMessage();
        return (0);
    }

	InputFileHandler inputFileHandler(av[1]);
	if (!inputFileHandler.readFile())
		return (0);
	ContentChanger contentChanger(av[2], av[3]);
	contentChanger.changeContent(inputFileHandler);

	FileCreator::createNewFile(av[1], inputFileHandler.getContent());
}


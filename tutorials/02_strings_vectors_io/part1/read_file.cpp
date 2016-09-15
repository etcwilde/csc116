#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cout << "Usage " << argv[0] << " <filename>" << std::endl;
        exit(1);
    }
    std::string inputFileName = argv[1];

    std::cout << "File to read:  [" << inputFileName << "]" << std::endl;

    

    return 0;
}

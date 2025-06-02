#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <string>
#include <fstream>

class Replacer
{
private:
    std::string _inputFilename;
    std::string _outputFilename;
    std::string _searchStr;
    std::string _replaceStr;

public:
    Replacer(const std::string &filename, const std::string &s1, const std::string &s2);
    ~Replacer();

    bool replace();

private:
    std::string readFile(std::ifstream &inFile);
    bool writeFile(const std::string &content);
    std::string performReplace(const std::string &content);
};

#endif // REPLACER_HPP

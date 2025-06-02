#include "../includes/Replacer.hpp"
#include <iostream>
#include <sstream>

Replacer::Replacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : _inputFilename(filename), _outputFilename(filename + ".replace"),
      _searchStr(s1), _replaceStr(s2)
{
}

Replacer::~Replacer()
{
}

bool Replacer::replace()
{
    std::ifstream inputFile(_inputFilename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file: " << _inputFilename << std::endl;
        return false;
    }

    std::string content = readFile(inputFile);
    inputFile.close();

    content = performReplace(content);

    return writeFile(content);
}

std::string Replacer::readFile(std::ifstream &inFile)
{
    std::stringstream buffer;
    buffer << inFile.rdbuf();
    return buffer.str();
}

bool Replacer::writeFile(const std::string &content)
{
    std::ofstream outputFile(_outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error creating output file: " << _outputFilename << std::endl;
        return false;
    }

    outputFile << content;
    outputFile.close();
    return true;
}

std::string Replacer::performReplace(const std::string &content)
{
    if (_searchStr.empty())
        return content;

    std::string result;
    size_t lastPos = 0;
    size_t findPos;

    while ((findPos = content.find(_searchStr, lastPos)) != std::string::npos)
    {
        result.append(content, lastPos, findPos - lastPos);
        result.append(_replaceStr);
        lastPos = findPos + _searchStr.length();
    }
    result.append(content, lastPos, content.length() - lastPos);

    return result;
}

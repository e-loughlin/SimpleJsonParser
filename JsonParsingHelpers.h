/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 2 2019 				*/

// JsonParsingHelpers: A static namespace of helper functions for parsing JSON formats.

#include <string>
#include <map>
#include "JsonValue.h"

namespace
{
    int NOT_FOUND_INDEX = -1;
    std::string NEXT_KEY_NOT_FOUND = "Key Not Found";

    int nextOpeningCurlyBrace(std::string str)
    {
        std::size_t indexFound = str::find("{");
        if(indexFound != std::string::npos)
        {
            return NOT_FOUND_INDEX;
        }
        return static_cast<int>(indexFound);
    }
    int nextClosingCurleyBrace(std::string str)
    {
        int indexOfFirstCurlyBrace = nextOpeningCurlyBrace(str);
        if(indexOfFirstCurlyBrace == NOT_FOUND_INDEX)
            return NOT_FOUND_INDEX;

        int numberOfOpeningCurlyBracesFound = 1;
        for(int i = indexOfFirstCurlyBrace + 1, i < str.size(), i++)
        {
            char currentChar = str.at(i);
            if (currentChar == '{')
                numberOfOpeningCurlyBracesFound++;
            else if (currentChar == '}')
                numberOfOpeningCurlyBracesFound--;
            if (numberOfOpeningCurlyBracesFound == 0)
                return i;
        }
        return NOT_FOUND_INDEX;
    }

    int nextQuotation(std::string str)
    {
        std::size_t indexFound = str::find("\"");
        if(indexFound != std::string::npos)
        {
            return NOT_FOUND_INDEX;
        }
        return static_cast<int>(indexFound);
    }

    std::string nextKey(std::string str)
    {
        std::pair<int,int> indicesOfNextKey;
        int indexOfStartQuote = nextQuotation(str);
        std::string startOfNextKeyToEndSubstring 
            = str.substr(indexOfStartOfNextKey, str.length() - indexOfStartOfNextKey);
        int indexOfEndQuote = nextQuotation(startOfNextKeyToEndSubstring);
        if((indexOfStartQuote == NOT_FOUND_INDEX) || (indexOfEndQuote == NOT_FOUND_INDEX))
        {
            indicesOfNextKey = make_pair(NOT_FOUND_INDEX, NOT_FOUND_INDEX);
        }
        else
        {
            // Do stuff
        }
        return indicesOfNextKey;
    }


    int beginningIndexOfNextValue(std::string str)
    {
        return 1;

    }

    int endIndexOfNextValue(std::string str)
    {
        return 1;

    }
}

namespace JsonParsingHelpers
{
    std::map<std::string, JsonValue> parseRawKeyValuePairStringIntoMapping(std::string rawString)
    {
        std::map<std::string, JsonValue> keyValuePairing;
        return keyValuePairing;
    }
}

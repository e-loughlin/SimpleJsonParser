/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	May 30 2019 				*/

// JsonParser: Class for parsing JSON files.

#include "I_JsonParser.h"
#include <map>

class JsonParser : I_JsonParser
{
 public:
    explicit JsonParser();
    ~JsonParser();

 public:
    std::map<std::string, std::string> parseJson(std::string rawJsonObject) const override;
};
/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	May 30 2019 				*/

// I_JsonParser: Interface for JsonParser

#include <string>
#include <map>

class I_JsonParser
{
 public:
    virtual ~I_JsonParser(){}

 public:
    virtual std::map<std::string, std::string> parseJson(std::string rawJsonObject) const = 0;
};
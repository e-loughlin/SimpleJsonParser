/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 1 2019 				*/

// I_JsonParser: Interface for JsonObject

#include <string>
#include <map>

class I_JsonValue;

class I_JsonObject
{
 public:
    virtual ~I_JsonObject(){}

 public:
    virtual I_JsonValue value(std::string key);
};
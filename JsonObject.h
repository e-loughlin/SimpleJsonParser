
/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 1 2019 				*/

// JsonObject - Class which contains a mapping between keys and values.

#include "I_JsonObject.h"
#include <map>
#include <string>

class JsonValue;

class JsonObject : I_JsonObject
{
 public:
    explicit JsonObject(std::string rawValue);
    ~JsonObject();

 public:
    JsonValue value(std::string key) const override;

 private:
    std::map<std::string, JsonValue> keyValuePairs_;
};
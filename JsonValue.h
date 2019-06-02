
/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 1 2019 				*/

// JsonValue - The Value provided by the Key-Value pair Json system.
// This class holds a rawValue_ string which is converted to the requested
// type with its accessor functions.

#include "I_JsonValue.h"
#include <string>

class I_JsonObject;

class JsonValue : I_JsonValue
{
 public:
    explicit JsonValue(std::string rawValue);
    ~JsonValue();

 public:
    JsonObject toJsonObject() const override;
    std::string toString() const override;

 private:
    std::string rawValue_;
};
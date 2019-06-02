/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 1 2019 				*/

// I_JsonValue: Interface for JsonValue

#include <string>

class JsonObject;

class I_JsonValue
{
 public:
    virtual ~I_JsonValue(){}

 public:
    virtual JsonObject toJsonObject() const;
    virtual std::string toString() const;
};
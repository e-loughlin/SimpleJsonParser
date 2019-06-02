/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 1 2019 				*/

// I_JsonValue: Interface for JsonValue

#include <string>

class I_JsonValue
{
 public:
    virtual ~I_JsonValue(){}

 public:
    virtual std::string toString();
};
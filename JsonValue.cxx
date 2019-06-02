/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 1 2019 				*/

// JsonValue - The Value provided by the Key-Value pair Json system.

#include "JsonValue.h"
#include "JsonObject.h"
#include <map>
#include <string>

JsonValue::JsonValue(std::string rawValue)
: rawValue_(rawValue)
{
}

JsonValue::~JsonValue()
{
}

std::string JsonValue::toString() const
{
    return rawValue_;
}

JsonObject JsonValue::toJsonObject() const
{
    return JsonObject(rawValue_);
} 
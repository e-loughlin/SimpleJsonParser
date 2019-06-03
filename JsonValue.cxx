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
, string_("")
, jsonObject_(JsonObject())
{
    initializeValueType();
}

JsonValue::~JsonValue()
{
}

std::string JsonValue::toString() const
{
    return string_;
}

JsonObject JsonValue::toJsonObject() const
{
    return jsonObject_;
}

bool JsonValue::containsOnlyStringPrimitive() const
{
    std::string invalidStringPrimitiveCharacter = "{";
    return (rawValue_.find(invalidStringPrimitiveCharacter) == std::string::npos);
}

void JsonValue::initializeValueType() const
{
    if (containsOnlyStringPrimitive())
    {
        string_ = rawValue_;
    }
    else
    {
        jsonObject_ = JsonObject(rawValue_);
    }
}
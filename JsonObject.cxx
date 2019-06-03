/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	June 1 2019 				*/

// JsonObject - The Value provided by the Key-Value pair Json system.

#include "JsonObject.h"
#include <map>
#include <string>
#include "JsonParsingHelpers.h"

JsonObject::JsonObject()
: rawKeyValuePairs_("")
{
}

JsonObject::JsonObject(std::string rawKeyValuePairs)
: rawKeyValuePairs_(rawKeyValuePairs)
, keyValuePairs_(JsonParsingHelpers::parseRawKeyValuePairStringIntoMapping(rawKeyValuePairs_))
{
}

JsonObject::~JsonObject()
{
}


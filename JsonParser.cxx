/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	May 30 2019 				*/

// JsonParser: Class for parsing JSON files.

#pragma once

#include <JsonParser.h>
#include <map>
#include <string>

JsonParser::JsonParser()
{
}

JsonParser::~JsonParser()
{
}

std::map<std::string, std::string> JsonParser::parseJson(std::string rawJsonObject) const
{
    // First iteration - assume Json format is not nested. For nested Jsons, a JsonObject class is needed.
}
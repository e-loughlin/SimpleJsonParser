/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	May 30 2019 				*/

// I_JsonParser: Interface for JsonParser

#pragma once

template <typename T, typename K> class map;
class string;
class MyDictionary;

class I_JsonParser
{
 public:
    virtual I_JsonParser::~I_JsonParser();

 public:
    virtual map<string, string> parseJson(string rawJson) = 0;
};
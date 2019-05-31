/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	May 30 2019 				*/

// I_JsonParser: Interface for JsonParser

#pragma once

class str;
class MyDictionary;

class I_JsonParser
{
 public:
    virtual I_JsonParser::~I_JsonParser();

 public:
    virtual MyDictionary parseJson(str) = 0;
};
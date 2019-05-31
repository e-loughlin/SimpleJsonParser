/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	May 30 2019 				*/

// I_TemplateFiller: Interface for TemplateFiller - a class that replaces
// instances of "{{key}}" with "value" for a given string.

#pragma once
#include <string>
#include <map>

class I_TemplateFiller
{
 public:
    virtual I_TemplateFiller::~I_TemplateFiller();

 public:
    virtual void fillTemplateField(std::string& templateString, std::string key, std::string value) = 0;
    virtual void fillAllTemplateFields(std::string& templateString, std::map<std::string, std::string>) = 0;
};
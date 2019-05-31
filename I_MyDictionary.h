/* Servall Development - Interview Take-Home Challenge
*
*	Evan Loughlin
* 	May 30 2019 				*/

// I_MyDictionary: Interface for a simple Dictionary data type to hold Key-Value pairs

#pragma once

class str;

class I_MyDictionary
{
 public:
    virtual I_MyDictionary::~I_MyDictionary();

 public:
    virtual str values() = 0;
    virtual str value(str key) = 0;
};
#ifndef DECRYPT_H
#define DECRYPT_H

#include "stdafx.h"
#include <string>
using std::string;
// Function declaration:z
// decrypt(string &cipher_text, unsigned key)

string decrypt(const string &cipher_text, unsigned int key);

#endif
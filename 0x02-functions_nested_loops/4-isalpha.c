#include "main.h"
 /**
  * _isalpha - Write a function that checks for alphabetic character.
  * @c: character to be printed
  * Return: 1 if c is a letter, 0 otherwise
  */


int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

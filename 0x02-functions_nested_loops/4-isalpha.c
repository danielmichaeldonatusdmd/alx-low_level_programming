nclude "main.h"
 /**
  * _isalpha - Write a function that checks for alphabetic character.
  * @APH: execute alhabet
  * Return: 1 if c is a letter, 0 otherwise
  */

int _isalpha(int APH)
{
	return ((APH >= 'a' && APH <= 'z') || (APH >= 'A' && APH <= 'Z'));
}

#include "main.h"
/**
 * _islower - verifies if character is lowercase.
 *@c: single letter input
  * Return:0 if is lower 1 if not lower.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

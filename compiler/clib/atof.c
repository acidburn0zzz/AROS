/*
    (C) 1995-98 AROS - The Amiga Replacement OS
    $Id$

    Desc: ANSI C function atof()
    Lang: english
*/
#include <ctype.h>
#include <stdio.h>

/*****************************************************************************

    NAME */
#include <stdlib.h>

	double atof (

/*  SYNOPSIS */
	const char * str)

/*  FUNCTION
	Convert a string of digits into a double.

    INPUTS
	str - The string which should be converted. Leading
		whitespace are ignored. The number may be prefixed
		by a '+' or '-'.

    RESULT
	The value of string str.

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
        atoi(), atol(), strtod(), strtol(), strtoul()

    INTERNALS

    HISTORY
	12.06.1998 hkiel created

******************************************************************************/
{
    return strtod (str, (char **)NULL);
} /* atof */


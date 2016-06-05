/* Textbook 2: the rod_cutting problem */
///\file main.c
///
/// Created by Manescu Marius-Alexandru on 31/05/15.
///
/// \bug no known bugs
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rod_cutting.h" ///>max(), rod_cutting()
int main()
{
 /** \brief Main function.
 *
 * Function calls of max and rod_cutting imported from rod_cutting.h
 *
 * \return 0
 *
 */

    max();
    rod_cutting();
    return 0;
}

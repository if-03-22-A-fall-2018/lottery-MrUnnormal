/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			lottery.c
 * Author(s):		Peter Bauer
 * Due Date:		28.04.2019
 *-----------------------------------------------------------------------------
 * Description:
 * Implementation of a library for analyzing lottery tips.
 *-----------------------------------------------------------------------------
*/

#include <stdio.h>
#include "lottery.h"

#define 	UUID_LEN   40
#define 	MAX_TIP_LEN   17
#define 	MAX_LINE_LEN   (UUID_LEN + 1 + MAX_TIP_LEN + 1)
char seperator;
FILE* fd;

bool 	init_lottery (const char *csv_file, char csv_separator)
{
  FILE* file = fopen(csv_file, "r");
  seperator = csv_separator;
  fd = file;
  return fd != 0;
}

bool 	get_tip (int tip_number, int tip[TIP_SIZE])
{
  fseek(fd, tip_number + UUID_LEN, SEEK_SET);
  for (size_t i = 0; i < count; i++)
  {
    /* code */
  }
}

bool 	set_drawing (int drawing_numbers[TIP_SIZE])
{
  return false;
}

int 	get_tip_result (int tip_number)
{
  return 0;
}

int 	get_right_tips_count (int right_digits_count)
{
  return 0;
}

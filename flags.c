#include "main.h"
/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
/* - + 0 # ' ' */
/* 1 2 4 8  16 */
int j,curr_i;
int flags=0;
const char FLAGS_C[]={'-','+','0','#',' ','\n'};
const int FLAGS_ARR[]={F_MINUS,F_PLUS,F_ZERO,F_HASH,F_SPACE,0};
for (curr_i = *i + 1;format[curr_i]!= '\n';curr_i++)
{
for (j = 0;FLAGS_C[j] != '\0'; j++)
if (format[curr_i]== LAGS_C[j])
{
flags |=FLAGS_ARR[j];
break;
}
if (FLAGS_C[j] == 0)
break;
}
*i = curr_i - 1;
return (flags);
}

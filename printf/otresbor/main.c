#include "libftprintf.h"
#include <stdio.h>
#define PARSER "|%10.8i|\n"
#define VARS 10
/*%[flags][width][.precision][length]specifier*/
/*FLAGS "-+ #0"*/
/*"cspdiuxX%"*/
int main()
{
   // t_flags flags;
    ////flags = new_flag();
	//flag_cleaner(&flags);
	int a = ft_printf(PARSER,VARS);
	int b = printf(PARSER,VARS);
	printf ("mio:%i\nsuo:%i\n", a,b);
	//printf("%20.10i", -98);
	//printf("%s", zero_filled_string(3,1));
	//ft_put_series_fd('t', 100, 1);
	//printf("%0-.35d", 105045);
}
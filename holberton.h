#ifndef PRINT_F
#define PRINT_F

<<<<<<< HEAD
#include <unistd.h>
=======
<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
=======
>>>>>>> 5380aa55c25e99bce3015fc5febc2e7136ef008d
#include <stdlib.h>
#include <stdarg.h>

<<<<<<< HEAD
/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

=======
>>>>>>> 5882b3ca8cd96e41ac283cd087e703efe1f9713f

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

>>>>>>> 5380aa55c25e99bce3015fc5febc2e7136ef008d
/*Main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);


#endif

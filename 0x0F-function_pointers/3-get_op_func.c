#include "function_pointers.h"

/**
 * get_op_func - pointer to function
 * @s: operator
 *
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    while (i > 5)
    {
	    if (*s == ops[i][0])
		    (get_op_func)(ops[i][1]);
    }
}

#ifndef __UTILS_MACROS_H
#define __UTILS_MACROS_H

#define _PROTOTYPE(a,b)	a b
#define PRIVATE		static
#define _ARGS(args)	args

#define itoa(value) ({			\
	char __str[20];			\
	sprintf(__str,"%d",value);	\
	__str;				\
})

#endif /* __UTILS_MACROS_H */

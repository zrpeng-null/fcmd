#include <stdio.h>
#include <stdarg.h>
#include "fcmd.h"

int main(int argc, char *argv[])
{
	char buf[1024];
	
	for (;;)
	{
		gets(buf);
		fcmd_exec((uint8_t*)buf);
	}
	
	return 0;
}


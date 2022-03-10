
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	led3 = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	led3 = !led3;
}

void _EXIT ProgramExit(void)
{

}


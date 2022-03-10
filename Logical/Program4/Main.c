
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	led4 = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	led4 = !led4;
}

void _EXIT ProgramExit(void)
{

}


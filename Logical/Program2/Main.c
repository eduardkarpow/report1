
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	led2 = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	led2 = !led2;
}

void _EXIT ProgramExit(void)
{

}


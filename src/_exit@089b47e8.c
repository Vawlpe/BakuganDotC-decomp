#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x089b4810)
// WARNING: Removing unreachable block (ram,0x089b482c)
// WARNING: Removing unreachable block (ram,0x089b483c)
// WARNING: Removing unreachable block (ram,0x089b486c)

void _exit(void)

{
  undefined4 uVar1;
  
  uVar1 = zz_sceKernelStopUnloadSelfModuleWithStatus(1,0,0,0,0);
  zz_sceKernelPrintf("libc:%s: something wrong 0x%08X\n","_exit",uVar1);
  trap(0);
  return;
}


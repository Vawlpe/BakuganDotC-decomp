#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089fb0e0(int *param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = zz_sceKernelCreateCallback("MyCB-MS",FUN_089fb074,0);
  if (iVar1 < 0) {
    *(undefined *)(param_1 + 1) = 0;
  }
  else {
    *param_1 = iVar1;
    local_10 = iVar1;
    zz_sceIoDevctl("fatms0:",0x2415821,&local_10,4,0,0);
    *(undefined *)(param_1 + 1) = 0;
  }
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)((int)param_1 + 6) = 0;
  *(undefined *)((int)param_1 + 0x106) = 0;
  *(undefined *)((int)param_1 + 0x107) = 0;
  *(undefined *)(param_1 + 0x42) = 0;
  *(undefined *)((int)param_1 + 0x109) = 0;
  *(undefined *)((int)param_1 + 0x10a) = 0;
  param_1[0x45] = -1;
  *(undefined *)(param_1 + 0x46) = 1;
  memset_jak((undefined *)((int)param_1 + 0x119),0,0x10);
  return param_1;
}


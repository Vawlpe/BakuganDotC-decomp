#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0883f3c0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_b0 [41];
  
  memcpy_jak(local_b0,&DAT_08a65608,0xa4);
  iVar3 = *(int *)(DAT_08ac58c4 + 4);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x26 < iVar3) {
    iVar3 = 0x26;
  }
  iVar1 = 0;
  if (DAT_08aba778 == 1) {
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar1 = local_b0[iVar3];
    if (*(char *)(*piVar2 + 0x462) == '\0') {
      if (iVar3 == 0x18) {
        iVar1 = iVar1 + 30000;
      }
    }
    else {
      iVar1 = iVar1 * 2;
    }
  }
  return iVar1;
}


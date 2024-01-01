#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cbf64(void)

{
  int *piVar1;
  int iVar2;
  
  if (*DAT_08ac58e0 == 0) {
    iVar2 = DAT_08ac58e0[1];
  }
  else {
    FUN_089cc09c(*DAT_08ac58e0,3);
    piVar1 = DAT_08ac58e0;
    *DAT_08ac58e0 = 0;
    iVar2 = piVar1[1];
  }
  if ((iVar2 != 0) && (iVar2 = FUN_08a30d50(iVar2), iVar2 != 0)) {
    while (iVar2 = FUN_08a306ec(DAT_08ac58e0[1]), iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 8),3);
    }
  }
  piVar1 = DAT_08ac58e0;
  if (DAT_08ac58e0[1] != 0) {
    FUN_08a305d4(DAT_08ac58e0[1],3);
    piVar1 = DAT_08ac58e0;
    DAT_08ac58e0[1] = 0;
  }
  if (piVar1 != (int *)0x0) {
    FUN_089d8634();
    FUN_089d7fd8(DAT_08ac58e0,0,0);
    FUN_089d866c();
    DAT_08ac58e0 = (int *)0x0;
  }
  return;
}


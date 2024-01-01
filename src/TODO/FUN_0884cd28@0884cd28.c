#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884cd28(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_088660c8();
  if ((piVar1 != (int *)0x0) && (iVar3 = *piVar1, iVar3 != 0)) {
    iVar2 = *(int *)(iVar3 + 0x14);
    while( true ) {
      iVar2 = (**(code **)(iVar2 + 0x74))(iVar3 + *(short *)(iVar2 + 0x70));
      if (iVar2 == 0) {
        *(undefined4 *)(iVar3 + 0x15c) = 0;
      }
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x14);
    }
  }
  return;
}


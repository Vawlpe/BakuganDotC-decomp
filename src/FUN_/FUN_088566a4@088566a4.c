#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088566a4(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_70 [21];
  
  piVar2 = (int *)FUN_088660c8();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar5 = *piVar2;
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x14);
    while( true ) {
      iVar6 = (**(code **)(iVar6 + 0x5c))(iVar5 + *(short *)(iVar6 + 0x58));
      if (iVar6 == 0) {
        iVar5 = *(int *)(iVar5 + 4);
      }
      else {
        piVar2 = local_70 + iVar4;
        iVar4 = iVar4 + 1;
        *piVar2 = *(int *)(iVar5 + 0xa7c);
        iVar5 = *(int *)(iVar5 + 4);
      }
      if (iVar5 == 0) break;
      iVar6 = *(int *)(iVar5 + 0x14);
    }
  }
  iVar6 = 0;
  iVar5 = FUN_088b32d0();
  bVar1 = false;
  if (iVar4 + 1 <= iVar5) {
    do {
      iVar6 = FUN_089bed14(iVar5);
      if (0 < iVar4) {
        iVar3 = 0;
        bVar1 = false;
        piVar2 = local_70;
        if (0 < iVar4) {
          do {
            if (*piVar2 == iVar6) {
              bVar1 = true;
            }
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar3 < iVar4);
        }
      }
    } while (bVar1);
  }
  return iVar6;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fe40c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x24);
  bVar1 = false;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 4);
    while( true ) {
      iVar3 = iVar2;
      iVar2 = FUN_089fdf50(iVar4);
      if (iVar2 == 0) {
        iVar2 = FUN_089fde24(iVar4);
        if (iVar2 == 0) {
          bVar1 = true;
          FUN_089fdff8(iVar4);
        }
      }
      else {
        if ((*(int *)(param_1 + 0x30) != 0) &&
           (iVar2 = FUN_089d774c(*(int *)(param_1 + 0x30),iVar4), iVar2 != 0)) {
          (**(code **)(*(int *)(iVar4 + 0x20) + 0xc))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 0x20) + 8),2);
          iVar4 = 0;
        }
        if (iVar4 != 0) {
          (**(code **)(*(int *)(iVar4 + 0x20) + 0xc))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 0x20) + 8),3);
        }
      }
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 4);
      iVar4 = iVar3;
    }
  }
  if (bVar1) {
    zz_sceKernelDelayThreadCB(200);
  }
  else {
    FUN_089bbef8();
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fd618(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_089bb728(param_1[2]);
  bVar2 = false;
  iVar5 = *(int *)(*param_1 + 0x24);
  while (iVar5 != 0) {
    bVar1 = false;
    iVar3 = FUN_089fbb30(iVar5,0x10);
    if ((iVar3 != 0) && (iVar3 = FUN_089fbb30(iVar5,0x80000000), iVar3 == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = *(int *)(iVar5 + 4);
      FUN_089fbe84(iVar5,0);
      if ((param_1[3] != 0) && (iVar4 = FUN_089d774c(param_1[3],iVar5), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar5 + 0x20) + 0xc))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x20) + 8),2);
        iVar5 = 0;
      }
      if (iVar5 != 0) {
        (**(code **)(*(int *)(iVar5 + 0x20) + 0xc))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x20) + 8),3);
      }
      bVar2 = true;
      iVar5 = iVar3;
    }
    else {
      iVar3 = FUN_089fbfa0(iVar5);
      if (iVar3 != 0) {
        bVar2 = true;
      }
      iVar5 = *(int *)(iVar5 + 4);
    }
  }
  *(bool *)(param_1 + 4) = !bVar2;
  FUN_089bb790(param_1[2]);
  if (bVar2) {
    zz_sceKernelDelayThreadCB(100);
  }
  else {
    FUN_089bbef8();
  }
  return;
}


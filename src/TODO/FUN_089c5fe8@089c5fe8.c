#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089c5fe8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar3 = param_1 + param_2 * 0x430;
  if (*(int *)(iVar3 + 0x9e0) == -1) {
    iVar3 = *(int *)(iVar3 + 0x9e0);
  }
  else if (*(short *)(iVar3 + 0x9f0) == 0) {
    iVar1 = FUN_089c67ec(param_1,*(undefined4 *)(iVar3 + 0x9fc));
    if (iVar1 == 0) {
      iVar1 = FUN_08a1ff64(*(undefined4 *)(iVar3 + 0x9e0));
      if (iVar1 == 0) {
        *(undefined4 *)(iVar3 + 0x9e0) = 0xffffffff;
        iVar1 = *(int *)(*(int *)(iVar3 + 0x9e4) + 0x20);
        (**(code **)(iVar1 + 0xc))(*(int *)(iVar3 + 0x9e4) + (int)*(short *)(iVar1 + 8),2);
        *(undefined4 *)(iVar3 + 0x5d0) = 0;
        *(undefined4 *)(iVar3 + 0x9ec) = 0;
        *(undefined *)(iVar3 + 0x9f9) = 0;
        *(undefined4 *)(iVar3 + 0x9fc) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x9e8) = 1;
        uVar2 = FUN_089fce94();
        FUN_089fd560(uVar2,iVar3 + 0x5d0);
        *(undefined4 *)(iVar3 + 0x9d4) = 0;
        *(undefined4 *)(iVar3 + 0x9d8) = 0;
        *(undefined4 *)(iVar3 + 0x9dc) = 0;
        zz_sceKernelSetGPO(*(uint *)(iVar3 + 0x9fc) & 0xff | 0x80);
        iVar3 = *(int *)(iVar3 + 0x9e0);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x9e0);
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x9e0);
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x9e0);
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return iVar3 == -1;
}


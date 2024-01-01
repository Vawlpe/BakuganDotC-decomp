#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894e6cc(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x2e8) = 0x41c00000;
  iVar1 = FUN_0880dc00("DOMesHelp");
  FUN_088cc354(iVar1);
  iVar3 = param_1 + 0x308;
  iVar2 = FUN_089a5650(0,param_2);
  strcpy(iVar3,*(undefined4 *)(iVar1 + iVar2 * 4));
  iVar1 = *(int *)(param_1 + 0x2dc);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x2dc) + 0x74);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  (**(code **)(iVar2 + 0x14))
            (*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 6.0,0,
             *(int *)(param_1 + 0x2dc) + (int)*(short *)(iVar2 + 0x10),iVar3,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0x2dc),iVar3,param_1 + 0x2f8,param_1 + 0x2fc,
               param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(*(int *)(param_1 + 0x2dc) + 0x84);
  iVar1 = *(int *)(*(int *)(param_1 + 0x2dc) + 0x88);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined *)(param_1 + 0x2f4) = 0x1e;
  *(float *)(param_1 + 0x2ec) = (float)iVar1;
  return;
}


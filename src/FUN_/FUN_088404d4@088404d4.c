#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088404d4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int aiStack_430 [248];
  int local_50 [8];
  uint local_30;
  
  piVar4 = aiStack_430;
  piVar7 = aiStack_430;
  memcpy_jak(aiStack_430,&DAT_08aba1d0,0x3e0);
  piVar3 = aiStack_430 + param_4 * 8;
  iVar2 = 0;
  iVar5 = 0;
  piVar8 = piVar3;
  do {
    iVar6 = *piVar8;
    *(undefined4 *)((int)piVar4 + 0x3e0) = 0xffffffff;
    if (iVar6 == -1) break;
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 1;
    piVar4 = (int *)((int)piVar4 + 4);
    piVar8 = piVar8 + 1;
  } while (iVar5 < 8);
  iVar5 = 0;
  piVar8 = aiStack_430 + iVar2;
  do {
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      piVar8[0xf7] = *piVar3;
    }
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 1;
    piVar8 = piVar8 + -1;
  } while (iVar5 < 8);
  iVar2 = 0;
  local_30 = 0xfffffffe;
  do {
    if (*(int *)((int)piVar7 + 0x3e0) == -1) {
      return;
    }
    piVar8 = (int *)(param_2 + *(int *)((int)piVar7 + 0x3e0) * 4);
    bVar1 = true;
    FUN_089f4a90((float)((param_3 % 10) / 5),(float)((param_3 % 10) % 5),*piVar8);
    iVar5 = *piVar8;
    if ((param_3 == 0) && (0 < iVar2)) {
      bVar1 = false;
    }
    if (bVar1) {
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    else {
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & local_30;
    }
    param_3 = param_3 / 10;
    iVar2 = iVar2 + 1;
    piVar7 = (int *)((int)piVar7 + 4);
  } while (iVar2 < 8);
  return;
}


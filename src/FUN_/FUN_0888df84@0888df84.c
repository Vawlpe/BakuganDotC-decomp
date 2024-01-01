#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0888df84(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  
  bVar6 = false;
  iVar7 = 0;
  iVar8 = param_1;
  while( true ) {
    psVar2 = *(short **)(iVar8 + 0x920);
    iVar1 = 0;
    if (psVar2 != (short *)0x0) {
      iVar3 = (int)psVar2[1];
      pcVar5 = *(code **)(psVar2 + 2);
      if (((iVar3 != 0) || (*psVar2 != 0)) || (pcVar5 != (code *)0x0)) {
        iVar1 = param_1 + *psVar2;
        if (iVar3 != 0) {
          psVar2 = (short *)(*(int *)(pcVar5 + iVar1) + iVar3 * 8);
          pcVar5 = *(code **)(psVar2 + 2);
          iVar1 = iVar1 + *psVar2;
        }
        iVar1 = (*pcVar5)(iVar1);
      }
    }
    if (iVar1 != 0) break;
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
    if (4 < iVar7) {
      iVar8 = *(int *)(param_1 + 0x91c);
LAB_0888e070:
      uVar4 = *(uint *)(param_1 + 0x9d4);
LAB_0888e074:
      *(uint *)(param_1 + 0x9d4) = uVar4 & 0xffffbfff;
      iVar8 = *(int *)(param_1 + iVar8 * 4 + 0x920);
      if (iVar8 != 0) {
        iVar7 = (int)*(short *)(iVar8 + 10);
        pcVar5 = *(code **)(iVar8 + 0xc);
        if (((iVar7 != 0) || (*(short *)(iVar8 + 8) != 0)) || (pcVar5 != (code *)0x0)) {
          param_1 = param_1 + *(short *)(iVar8 + 8);
          if (iVar7 != 0) {
            psVar2 = (short *)(*(int *)(pcVar5 + param_1) + iVar7 * 8);
            pcVar5 = *(code **)(psVar2 + 2);
            param_1 = param_1 + *psVar2;
          }
          (*pcVar5)(param_1);
        }
      }
      return bVar6;
    }
  }
  iVar8 = *(int *)(param_1 + 0x91c);
  bVar6 = iVar8 != iVar7;
  if (!bVar6) {
    uVar4 = *(uint *)(param_1 + 0x9d4);
    goto LAB_0888e074;
  }
  *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) & 0xfffeffef;
  FUN_088601c8(*(undefined4 *)(param_1 + 0x1a0));
  *(int *)(param_1 + 0x91c) = iVar7;
  FUN_0888d008(param_1);
  iVar8 = *(int *)(param_1 + 0x91c);
  goto LAB_0888e070;
}


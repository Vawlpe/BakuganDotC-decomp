#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08818984(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  iVar7 = 0;
  iVar8 = 0;
  pcVar10 = "";
  do {
    iVar9 = 0;
    iVar6 = *(int *)(param_1 + 0x84);
    if (0 < *(int *)(param_1 + 0x88)) {
      do {
        if ((iVar6 == 0) || (iVar5 = FUN_089f5630(param_1,iVar6), iVar5 == 0)) break;
        iVar4 = iVar6;
        if (iVar8 < 7) {
          iVar4 = iVar5;
        }
        uVar1 = *(undefined4 *)(param_1 + 0xc4);
        uVar2 = *(undefined4 *)(param_1 + 200);
        uVar3 = *(undefined4 *)(param_1 + 0xcc);
        *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(param_1 + 0xc0);
        *(undefined4 *)(iVar4 + 0xb4) = uVar1;
        *(undefined4 *)(iVar4 + 0xb8) = uVar2;
        *(undefined4 *)(iVar4 + 0xbc) = uVar3;
        *(float *)(iVar4 + 0x60) = *(float *)(iVar4 + 0x60) + (float)(int)*pcVar10;
        *(float *)(iVar4 + 100) = *(float *)(iVar4 + 100) + (float)(int)pcVar10[1];
        *(float *)(iVar4 + 0x68) = *(float *)(iVar4 + 0x68) + 1.0;
        if (iVar7 == 0) {
          iVar7 = iVar5;
        }
        iVar9 = iVar9 + 1;
        iVar6 = *(int *)(iVar6 + 4);
      } while (iVar9 < *(int *)(param_1 + 0x88));
    }
    iVar8 = iVar8 + 1;
    pcVar10 = pcVar10 + 2;
    if (7 < iVar8) {
      return;
    }
  } while( true );
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088862a0(int param_1,uint param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint extraout_v1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0xc);
  iVar5 = 0;
  if (uVar3 != 0) {
    uVar2 = 0x48;
    puVar6 = *(ushort **)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 4);
    do {
      iVar8 = iVar4 + 0x10;
      puVar7 = puVar6 + 1;
      if (*(byte *)(iVar4 + 0xd) != uVar2) goto LAB_088863ac;
      if (*(ushort *)(iVar4 + 0xe) == param_2) {
        iVar10 = *(int *)(iVar4 + 4) + (uint)*puVar6;
        if ((*(ushort *)(iVar4 + 8) & 0x80) == 0) {
          iVar9 = 0;
          if (*(short *)(iVar4 + 10) != 0) {
            do {
              *(undefined4 *)(iVar10 + 4) = *param_3;
              iVar9 = iVar9 + 1;
              *(undefined4 *)(iVar10 + 8) = param_3[1];
              *(undefined4 *)(iVar10 + 0xc) = param_3[2];
              iVar10 = iVar10 + 0x10;
            } while (iVar9 < (int)(uint)*(ushort *)(iVar4 + 10));
            uVar3 = (uint)*(ushort *)(param_1 + 0xc);
            goto LAB_088863ac;
          }
          iVar5 = iVar5 + 1;
        }
        else {
          iVar9 = 0;
          if (*(short *)(iVar4 + 10) == 0) {
            iVar5 = iVar5 + 1;
          }
          else {
            do {
              uVar1 = FUN_08885e08(*param_3);
              *(undefined2 *)(iVar10 + 2) = uVar1;
              uVar1 = FUN_08885e08(param_3[1]);
              *(undefined2 *)(iVar10 + 4) = uVar1;
              uVar1 = FUN_08885e08(param_3[2]);
              *(undefined2 *)(iVar10 + 6) = uVar1;
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 8;
            } while (iVar9 < (int)(uint)*(ushort *)(iVar4 + 10));
            uVar3 = (uint)*(ushort *)(param_1 + 0xc);
            uVar2 = extraout_v1;
LAB_088863ac:
            iVar5 = iVar5 + 1;
          }
        }
      }
      else {
        iVar5 = iVar5 + 1;
      }
      puVar6 = puVar7;
      iVar4 = iVar8;
    } while (iVar5 < (int)uVar3);
  }
  return;
}


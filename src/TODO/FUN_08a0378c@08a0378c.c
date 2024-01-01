#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0378c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  code **ppcVar7;
  
  iVar6 = *(int *)(param_1 + 0xc);
  param_2 = param_2 & 0xffff;
  while (param_2 != (param_3 & 0xffff)) {
    ppcVar7 = (code **)(*(int *)(param_1 + 8) + param_2 * 0xc);
    bVar1 = *(byte *)(ppcVar7 + 2);
    puVar3 = (ushort *)0x0;
    if (((bVar1 & 2) == 0) || (**(int **)(iVar6 + (uint)*(ushort *)(ppcVar7 + 4) * 4) != 0)) {
      if ((bVar1 & 8) == 0) {
        puVar5 = *(undefined4 **)(iVar6 + (uint)*(ushort *)(ppcVar7 + 1) * 4);
      }
      else {
        puVar3 = (ushort *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(ppcVar7 + 1) * 0xc);
        puVar5 = *(undefined4 **)(iVar6 + (uint)*puVar3 * 4);
      }
      if ((bVar1 & 1) != 0) {
        puVar5 = (undefined4 *)*puVar5;
      }
      if ((bVar1 & 0x80) == 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) == 0) {
            uVar4 = 2;
            if ((bVar1 & 0x40) != 0) {
              uVar4 = 0;
            }
            (**ppcVar7)(puVar5,uVar4);
          }
          else {
            FUN_08a02fb0(puVar5,*(undefined4 *)(puVar3 + 4),*(undefined4 *)(puVar3 + 2),*ppcVar7,0,0
                        );
          }
        }
        else if (puVar5 != (undefined4 *)0x0) {
          if ((bVar1 & 8) == 0) {
            (**ppcVar7)(puVar5);
          }
          else {
            (**ppcVar7)(puVar5,*(undefined4 *)(puVar3 + 2));
          }
        }
      }
      else {
        *puVar5 = 0;
      }
      uVar2 = *(ushort *)((int)ppcVar7 + 6);
    }
    else {
      uVar2 = *(ushort *)((int)ppcVar7 + 6);
    }
    param_2 = (uint)uVar2;
  }
  return;
}


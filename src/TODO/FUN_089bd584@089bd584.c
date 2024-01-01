#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089bd584(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  puVar4 = param_1;
  if (*param_1 != 0) {
    do {
      uVar1 = puVar4[1];
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + (int)param_1;
      if (uVar1 < 4) {
        if (uVar1 < 3) {
          uVar3 = (uint)*param_1;
        }
        else {
          iVar6 = iVar6 + 1;
LAB_089bd608:
          uVar3 = (uint)*param_1;
        }
      }
      else {
        if (uVar1 == 0x78) {
          iVar2 = FUN_089bd584(*(undefined4 *)(puVar4 + 2));
          iVar6 = iVar6 + iVar2;
          goto LAB_089bd608;
        }
        uVar3 = (uint)*param_1;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x20;
    } while (iVar5 < (int)uVar3);
  }
  return iVar6;
}


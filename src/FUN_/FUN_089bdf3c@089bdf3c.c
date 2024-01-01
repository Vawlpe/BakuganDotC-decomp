#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bdf3c(int param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  
  uVar2 = (uint)*param_2;
  iVar6 = 0;
  puVar5 = param_2;
  if (uVar2 != 0) {
    do {
      uVar1 = puVar5[1];
      if (uVar1 < 4) {
        if (uVar1 < 3) {
          iVar3 = *(int *)(puVar5 + 2);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x38);
          if (iVar3 != 0) {
            iVar4 = *(int *)(iVar3 + *param_3 * 0x140 + 0x14);
            (**(code **)(iVar4 + 0xc))(iVar3 + *param_3 * 0x140 + (int)*(short *)(iVar4 + 8),2);
            *param_3 = *param_3 + 1;
            uVar1 = *param_2;
            goto LAB_089be010;
          }
          iVar3 = *(int *)(puVar5 + 2);
        }
      }
      else if (uVar1 == 0x78) {
        FUN_089bdf3c(param_1,*(undefined4 *)(puVar5 + 2),param_3);
        uVar1 = *param_2;
LAB_089be010:
        uVar2 = (uint)uVar1;
        iVar3 = *(int *)(puVar5 + 2);
      }
      else {
        iVar3 = *(int *)(puVar5 + 2);
      }
      iVar6 = iVar6 + 1;
      *(int *)(puVar5 + 2) = iVar3 - (int)param_2;
      puVar5 = puVar5 + 0x20;
    } while (iVar6 < (int)uVar2);
  }
  *(undefined *)(param_1 + 0x2a) = 0;
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bd640(ushort *param_1,int param_2,undefined param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar2 = (uint)*param_1;
  iVar3 = 0;
  if (uVar2 != 0) {
    puVar5 = param_1 + 8;
    puVar4 = param_1;
    do {
      uVar1 = puVar4[1];
      if (uVar1 < 4) {
        if (2 < uVar1) {
          FUN_089f6e78(*(int *)(param_2 + 0x38) + *param_4 * 0x140,puVar5,
                       *(undefined4 *)(puVar4 + 2),param_3);
          *param_4 = *param_4 + 1;
          uVar1 = *param_1;
LAB_089bd710:
          uVar2 = (uint)uVar1;
        }
      }
      else if (uVar1 == 0x78) {
        FUN_089bd640(*(undefined4 *)(puVar4 + 2),param_2,param_3,param_4);
        uVar1 = *param_1;
        goto LAB_089bd710;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x20;
      puVar5 = puVar5 + 0x20;
    } while (iVar3 < (int)uVar2);
  }
  return;
}


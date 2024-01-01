#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089db554(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + 8);
  if (uVar4 != 0) {
    do {
      uVar2 = DAT_08ac5bf0;
      if (DAT_08ac5bf0 == 0) {
LAB_089db5e0:
        param_3 = FUN_089db62c(param_1,param_2,param_3);
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar3 = FUN_08a15998(param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20));
        cVar1 = *(char *)(*(int *)(iVar3 + 4) + 6);
        if ((uVar2 & 1) == 0) {
          if (cVar1 == '\0') goto LAB_089db5e0;
          iVar3 = *(int *)(param_1 + 0x1c);
        }
        else {
          if (cVar1 != '\0') goto LAB_089db5e0;
          iVar3 = *(int *)(param_1 + 0x1c);
        }
      }
      uVar4 = uVar4 - 1;
      *(int *)(param_1 + 0x1c) = iVar3 + 0x30;
    } while (0 < (int)uVar4);
  }
  return param_3;
}


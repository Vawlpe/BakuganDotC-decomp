#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f9104(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar4 = *(uint *)(param_1 + 0x34);
    if (*(ushort *)(*(int *)(param_1 + 0x1c) + 0xc) < uVar4) {
      if ((*(char *)(param_1 + 0x38) == '\0') ||
         (*(char *)(*(int *)(param_1 + 0x18) + 0x9c) != '\0')) {
        FUN_089d8928(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x34) = 1;
        uVar4 = 1;
        iVar5 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x1c);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1c);
    }
    iVar7 = 0;
    uVar1 = *(ushort *)(iVar5 + 10);
    iVar6 = iVar5 + 0x10;
    if (uVar1 != 0) {
      puVar8 = (ushort *)(iVar5 + 0x18);
      do {
        if (uVar4 == *puVar8) {
          FUN_089d8634();
          uVar2 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar3 = FUN_089d7d74(0xf0,0,0);
          FUN_089d816c(uVar2);
          FUN_089d866c();
          iVar5 = 0;
          if (iVar3 != 0) {
            FUN_08a01aa4(iVar3,param_1 + 0x24);
            iVar5 = iVar3;
          }
          FUN_08a01f88(iVar5,*(undefined4 *)(param_1 + 0x18),param_1,puVar8,iVar6 + 0x14);
          uVar4 = *(uint *)(param_1 + 0x34);
          iVar5 = *(int *)(iVar6 + 4);
        }
        else {
          iVar5 = *(int *)(iVar6 + 4);
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + iVar5;
        puVar8 = (ushort *)(iVar6 + 8);
      } while (iVar7 < (int)(uint)uVar1);
    }
    iVar5 = *(int *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x34) = uVar4 + 1;
    if (iVar5 != 0) {
      for (iVar6 = *(int *)(iVar5 + 4); FUN_08a023b0(iVar5), iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)
          ) {
        iVar5 = iVar6;
      }
    }
  }
  return;
}


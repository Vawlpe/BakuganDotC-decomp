#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898d2ec(int param_1,char param_2)

{
  undefined uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (param_2 == '\0') {
    uVar8 = 0;
    iVar6 = param_1;
    iVar7 = param_1;
    do {
      uVar5 = uVar8 & 0xff;
      FUN_0898c524(param_1,uVar5);
      uVar1 = *(undefined *)(param_1 + 0xe7d);
      cVar2 = *(char *)(param_1 + 0xe79);
      iVar4 = FUN_0898c888(param_1,uVar1,uVar5,cVar2);
      if ((iVar4 == 1) && (cVar3 = *(char *)(uVar8 + cVar2 * 6 + param_1 + 0x11c0), cVar3 != '\0'))
      {
        FUN_0898c2b8(param_1,uVar1,cVar3,cVar2,uVar5);
        *(undefined4 *)(*(int *)(iVar7 + 0x1208) + 0x6c) = 0;
        *(undefined4 *)(iVar6 + 0x10ec) = 0;
        *(undefined4 *)(iVar6 + 0x10f0) = 0;
        *(undefined *)(iVar6 + 0x10d8) = 0;
        *(undefined4 *)(iVar6 + 0x10f4) = 0x3df5c28f;
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar8 < 6);
  }
  else {
    iVar4 = 0;
    iVar6 = param_1;
    iVar7 = param_1;
    do {
      if (*(int *)(iVar6 + 0x1208) != 0) {
        *(undefined4 *)(*(int *)(iVar6 + 0x1208) + 0x6c) = 0x3f800000;
        uVar9 = *(undefined4 *)(param_1 + 0x12ac);
        *(undefined4 *)(iVar7 + 0x10ec) = 0;
        *(undefined4 *)(iVar7 + 0x10f0) = 0x3f800000;
        *(undefined4 *)(iVar7 + 0x10f4) = uVar9;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar4 < 6);
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880e808(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar4 = FUN_089c9d1c();
  puVar5 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar9 = *puVar5;
  FUN_089c9d1c(param_1);
  iVar6 = FUN_088dfd08(uVar9);
  bVar2 = false;
  if (iVar6 != 0) {
    uVar3 = FUN_089c9d1c(param_1);
    if (iVar4 < 1) {
      if ((-1 < iVar4) && (iVar4 = FUN_088deaec(iVar6), iVar4 != 0)) {
        bVar2 = true;
      }
    }
    else if ((iVar4 < 2) && (iVar4 = FUN_088deaec(iVar6), iVar4 != 0)) {
      piVar7 = (int *)FUN_0880cc48();
      iVar8 = 0;
      iVar10 = *piVar7 + *(int *)(DAT_08ac58c4 + 4) * 10;
      iVar4 = iVar10;
      do {
        iVar8 = iVar8 + 1;
        if ((uint)*(byte *)(iVar4 + 0x2d0) == (*(uint *)(iVar6 + 800) & 0xff)) {
          bVar1 = true;
          goto LAB_0880e918;
        }
        iVar4 = iVar10 + iVar8;
      } while (iVar8 < 10);
      bVar1 = false;
LAB_0880e918:
      if (!bVar1) {
        bVar2 = true;
      }
    }
    if (bVar2) {
      *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar3;
      return 3;
    }
  }
  return 0;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880eb70(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)FUN_089c9ed8(param_1,2);
  iVar2 = FUN_088dfd08(*puVar1);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_089c9ed8(param_1,2);
  piVar3 = (int *)FUN_0880cc48();
  iVar6 = 0;
  iVar4 = *piVar3 + *(int *)(DAT_08ac58c4 + 4) * 10;
  iVar7 = iVar4;
  do {
    iVar6 = iVar6 + 1;
    if ((uint)*(byte *)(iVar7 + 0x2d0) == (*(uint *)(iVar2 + 800) & 0xff)) {
      uVar5 = 1;
      goto LAB_0880ec24;
    }
    iVar7 = iVar4 + iVar6;
  } while (iVar6 < 10);
  uVar5 = 0;
LAB_0880ec24:
  *puVar1 = uVar5;
  return 0;
}


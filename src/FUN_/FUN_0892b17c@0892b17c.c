#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892b17c(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 local_30;
  undefined4 local_2c;
  
  memset_jak(param_1 + 0x1ba4,0,0xf0);
  FUN_0892ae84(&local_30);
  *(undefined4 *)(param_1 + 0x1cec) = local_30;
  *(undefined4 *)(param_1 + 0x1cf0) = local_2c;
  uVar8 = 0;
  puVar11 = (undefined2 *)(param_1 + 0x1ba8);
  iVar10 = param_1;
  do {
    uVar4 = FUN_0892adcc(param_1,1,uVar8 & 0xff);
    uVar9 = uVar4 & 0xff;
    piVar5 = (int *)FUN_0880cc48();
    if ((int)uVar9 < 0) {
      uVar7 = -(-uVar9 & 7) & 0x1f;
    }
    else {
      uVar7 = uVar4 & 7;
    }
    if (((uint)*(byte *)(*piVar5 + ((int)uVar9 >> 3) + 0x50e) & 1 << uVar7) != 0) {
      *(char *)(iVar10 + 0x1ba4) = (char)uVar4;
      piVar5 = (int *)FUN_0880cc48();
      if ((int)uVar9 < 0) {
        uVar4 = -(-uVar9 & 7) & 0x1f;
      }
      else {
        uVar4 = uVar4 & 7;
      }
      if (((uint)*(byte *)(*piVar5 + ((int)uVar9 >> 3) + 0x525) & 1 << uVar4) == 0) {
        *(undefined *)(iVar10 + 0x1ba5) = 1;
      }
      uVar4 = FUN_0892b114(param_1,0,uVar9);
      iVar6 = (uVar4 & 0xff) * 8;
      uVar2 = *(undefined2 *)(&DAT_08ac1b34 + iVar6);
      uVar1 = *(undefined2 *)(&DAT_08ac1b32 + iVar6);
      uVar3 = *(undefined2 *)(&DAT_08ac1b36 + iVar6);
      *puVar11 = *(undefined2 *)(&DAT_08ac1b30 + iVar6);
      puVar11[1] = uVar1;
      puVar11[2] = uVar2;
      puVar11[3] = uVar3;
      uVar4 = FUN_0892ae34(0,uVar9);
      uVar9 = uVar4 & 0xff;
      if (uVar9 != 0) {
        piVar5 = (int *)FUN_0880cc48();
        if ((int)uVar9 < 0) {
          uVar7 = -(-uVar9 & 7) & 0x1f;
        }
        else {
          uVar7 = uVar4 & 7;
        }
        if (((uint)*(byte *)(*piVar5 + ((int)uVar9 >> 3) + 0x50e) & 1 << uVar7) != 0) {
          *(char *)(iVar10 + 0x1ba6) = (char)uVar4;
        }
      }
    }
    uVar8 = uVar8 + 1;
    iVar10 = iVar10 + 0xc;
    puVar11 = puVar11 + 6;
  } while ((int)uVar8 < 0x14);
  return;
}


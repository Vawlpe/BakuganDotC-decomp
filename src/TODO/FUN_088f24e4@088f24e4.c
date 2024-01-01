#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f24e4(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x274) == '\0') {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x3c))
              (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x38));
    *(undefined *)(param_1 + 0x264) = 1;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x27c);
  if (0 < iVar3) {
    if (iVar3 < 2) {
      iVar5 = *(int *)(param_1 + 0x278) + 1;
      iVar3 = *(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + 0x2d3) * 0x4c;
      *(int *)(param_1 + 0x278) = iVar5;
      puVar4 = (undefined2 *)(iVar3 + 0x30);
      if (iVar5 < 8) {
        iVar5 = (((int)*(short *)(iVar3 + 0x38) - (int)*(short *)(iVar3 + 0x3e)) * 0x10000 >> 0x10)
                * iVar5;
        iVar6 = *(int *)(iVar3 + 0x48);
        *(short *)(iVar3 + 0x32) =
             *(short *)(iVar3 + 0x3e) + (short)((int)(iVar5 + ((uint)(iVar5 >> 3) >> 0x1d)) >> 3);
        uVar1 = *(undefined2 *)(iVar3 + 0x32);
        uVar2 = *(undefined2 *)(iVar3 + 0x34);
        *(undefined2 *)(iVar6 + 0xc) = *puVar4;
        *(undefined2 *)(iVar6 + 0xe) = uVar1;
        *(undefined2 *)(iVar6 + 0x10) = uVar2;
        *(undefined2 *)(*(int *)(iVar3 + 0x48) + 0x2c) = *(undefined2 *)(iVar3 + 0x32);
        return;
      }
      *(undefined2 *)(iVar3 + 0x3c) = *(undefined2 *)(iVar3 + 0x36);
      *(undefined2 *)(iVar3 + 0x3e) = *(undefined2 *)(iVar3 + 0x38);
      *(undefined2 *)(iVar3 + 0x40) = *(undefined2 *)(iVar3 + 0x3a);
      *puVar4 = *(undefined2 *)(iVar3 + 0x36);
      *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(iVar3 + 0x38);
      *(undefined2 *)(iVar3 + 0x34) = *(undefined2 *)(iVar3 + 0x3a);
      iVar5 = *(int *)(iVar3 + 0x48);
      uVar1 = *(undefined2 *)(iVar3 + 0x32);
      uVar2 = *(undefined2 *)(iVar3 + 0x34);
      *(undefined2 *)(iVar5 + 0xc) = *puVar4;
      *(undefined2 *)(iVar5 + 0xe) = uVar1;
      *(undefined2 *)(iVar5 + 0x10) = uVar2;
      *(undefined2 *)(*(int *)(iVar3 + 0x48) + 0x2c) = *(undefined2 *)(iVar3 + 0x32);
      *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
      return;
    }
    if (2 < iVar3) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0xc) + 0x3c))
              (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x38));
    *(undefined *)(param_1 + 0x264) = 1;
    return;
  }
  if (iVar3 < 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + 0x2d3) * 0x4c + 0x38) =
       *(undefined2 *)(param_1 + 0x280);
  if (DAT_08b00dc4 == '\0') {
    if (*(int *)(DAT_08ac5c90 + 0x2ac) == 0) {
      iVar3 = *(int *)(param_1 + 0x27c);
      goto LAB_088f25a4;
    }
    FUN_088bcc48();
  }
  iVar3 = *(int *)(param_1 + 0x27c);
LAB_088f25a4:
  *(int *)(param_1 + 0x27c) = iVar3 + 1;
  return;
}


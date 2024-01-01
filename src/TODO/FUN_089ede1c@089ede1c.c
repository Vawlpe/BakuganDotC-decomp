#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ede1c(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (4 < param_2) {
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar1 = DAT_08ac5934[1];
      uVar2 = DAT_08ac5934[2];
      uVar3 = DAT_08ac5934[3];
      *(undefined4 *)(param_1 + 0x40) = *DAT_08ac5934;
      *(undefined4 *)(param_1 + 0x44) = uVar1;
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
      *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else if (param_2 != 3) {
      if (param_2 == 4) {
        uVar1 = *(undefined4 *)(param_1 + 0x40);
        uVar2 = *(undefined4 *)(param_1 + 0x44);
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(param_1 + 0x30) = uVar1;
        *(undefined4 *)(param_1 + 0x34) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x3c) = uVar4;
        return;
      }
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


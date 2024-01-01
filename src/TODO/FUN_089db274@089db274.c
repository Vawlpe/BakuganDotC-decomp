#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089db274(int param_1,int param_2,uint param_3,short *param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_2 + 0x30);
  if ((uVar1 & 2) == 0) {
    uVar4 = uVar4 & 0xfff0ffff;
  }
  if ((uVar1 & 4) == 0) {
    uVar4 = uVar4 & 0xf00f0000;
  }
  if ((uVar1 & 8) == 0) {
    uVar4 = uVar4 & 0x7fffffff;
  }
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar4 & 0xbfffffff;
  }
  *(int *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar5 = 0;
  if ((*(uint *)(param_2 + 0x28) & 0x100) != 0) {
    uVar5 = DAT_08ac5c50;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = DAT_08ac5c54;
  uVar5 = DAT_08ac5c58;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x40);
  if (param_4 == (short *)0x0) {
    uVar4 = 0;
    if ((uVar1 & 0x100) != 0) {
      uVar4 = (uint)*(ushort *)(param_2 + 0x4c);
    }
    uVar2 = 0;
    if ((uVar1 & 0x200) != 0) {
      uVar2 = (uint)*(ushort *)(param_2 + 0x4e);
    }
    param_5 = uVar4 + uVar2;
    param_4 = (short *)(*(int *)(param_2 + 0x48) + (*(ushort *)(param_2 + 0x4c) - uVar4) * 2);
    param_6 = 0;
  }
  if (param_6 == 0) {
    param_6 = 2;
  }
  if (param_5 < 1) {
    pcVar3 = *(code **)(param_1 + 0x50);
  }
  else {
    do {
      *(int *)(param_1 + 0x14) = *(int *)(param_2 + 4) + *param_4 * 0xc0;
      param_4 = (short *)((int)param_4 + param_6);
      param_3 = FUN_089db448(param_1,param_2,param_3);
      param_5 = param_5 + -1;
    } while (0 < param_5);
    pcVar3 = *(code **)(param_1 + 0x50);
  }
  if (pcVar3 != (code *)0x0) {
    uVar1 = (*pcVar3)(param_1,param_3,1,*(undefined4 *)(param_1 + 0x54));
    param_3 = param_3 | uVar1;
  }
  return param_3;
}


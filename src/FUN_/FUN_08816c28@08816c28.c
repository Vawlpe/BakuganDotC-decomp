#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08816c28(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  param_1[8] = 0xffffffff;
  param_1[9] = 0x3f800000;
  uVar5 = 0;
  iVar3 = FUN_089ceba4(DAT_08ac5934);
  *(undefined *)(param_1 + 0x11) = 0;
  param_1[10] = -(3.0 / (float)iVar3);
  if ((-1 < param_3) && (param_3 < 0x1f)) {
    FUN_08816ba4(param_1,*(undefined4 *)(PTR_PTR_DAT_08aae714 + param_3 * 4));
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(uint *)(*(int *)(param_1[0xf] + iVar4) + 0xd0) =
         *(uint *)(*(int *)(param_1[0xf] + iVar4) + 0xd0) & 0xfffffffe;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 0xb);
  iVar3 = FUN_089eb248(param_1[0xb]);
  if (iVar3 != 0) {
    param_1[8] = param_2;
    param_1[4] = 0xffffffff;
    *param_1 = 0;
    *(undefined *)(param_1 + 7) = 0;
    *(undefined *)((int)param_1 + 0x1d) = 0;
    *(float *)param_1[0xb] = (float)param_1[1] + 1.0;
    iVar3 = FUN_089eb248(param_1[0xb]);
    uVar2 = DAT_08b0019c;
    uVar1 = DAT_08b00198;
    uVar5 = DAT_08b00194;
    *(undefined4 *)(iVar3 + 0xb0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xb4) = uVar5;
    *(undefined4 *)(iVar3 + 0xb8) = uVar1;
    *(undefined4 *)(iVar3 + 0xbc) = uVar2;
    iVar3 = FUN_089eb248(param_1[0xb]);
    uVar2 = DAT_08b0019c;
    uVar1 = DAT_08b00198;
    uVar5 = DAT_08b00194;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar5;
    *(undefined4 *)(iVar3 + 200) = uVar1;
    *(undefined4 *)(iVar3 + 0xcc) = uVar2;
    iVar3 = FUN_089eb248(param_1[0xb]);
    *(undefined4 *)(iVar3 + 0xe0) = 0x43a00000;
    uVar5 = 1;
    iVar4 = 0;
    iVar3 = 0;
    do {
      switch(iVar4) {
      case 2:
      case 3:
      case 5:
      case 6:
        if (param_1[0x10] == 0) {
          *(uint *)(*(int *)(param_1[0xf] + iVar3) + 0xd0) =
               *(uint *)(*(int *)(param_1[0xf] + iVar3) + 0xd0) | 1;
        }
        break;
      case 4:
      case 7:
      case 10:
        break;
      case 8:
      case 9:
        if (param_1[0x10] == 1) {
          *(uint *)(*(int *)(param_1[0xf] + iVar3) + 0xd0) =
               *(uint *)(*(int *)(param_1[0xf] + iVar3) + 0xd0) | 1;
        }
        break;
      default:
        *(uint *)(*(int *)(param_1[0xf] + iVar3) + 0xd0) =
             *(uint *)(*(int *)(param_1[0xf] + iVar3) + 0xd0) | 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0xb);
  }
  return uVar5;
}


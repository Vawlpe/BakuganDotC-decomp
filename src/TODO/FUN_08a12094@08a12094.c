#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a12094(int param_1,undefined4 param_2,undefined param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,int param_8,int param_9,int param_10,undefined param_11,
            undefined4 param_12,undefined4 param_13,undefined4 param_14,int param_15,
            undefined4 param_16)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_50;
  
  iVar7 = (uint)*(ushort *)(param_1 + 0x24) * (uint)*(ushort *)(param_1 + 0x26);
  if (iVar7 < 1) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    iVar6 = 0;
    iVar2 = *(int *)(param_1 + 0x20);
    while( true ) {
      iVar3 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      thunk_FUN_08a1078c(1,*(undefined4 *)(iVar3 + iVar2));
      if (iVar7 == iVar6) break;
      iVar2 = *(int *)(param_1 + 0x20);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x20);
  }
  local_50 = 0;
  thunk_FUN_08a1078c(0,uVar5);
  thunk_FUN_08a1078c(0,*(undefined4 *)(param_1 + 0x2c));
  iVar7 = FUN_08a11e78(param_2);
  if (iVar7 == 0) {
    trap(7);
  }
  *(undefined *)(param_1 + 0x16) = param_3;
  *(char *)(param_1 + 0x17) = (char)iVar7;
  *(short *)(param_1 + 0x14) = (short)param_5;
  *(char *)(param_1 + 0x19) = (char)param_7;
  *(short *)(param_1 + 0x10) = (short)param_2;
  *(short *)(param_1 + 0x12) = (short)param_4;
  *(char *)(param_1 + 0x18) = (char)((param_6 << 3) / iVar7);
  iVar2 = iVar7 * param_4 + 0xff;
  if (iVar2 < 0) {
    iVar2 = iVar7 * param_4 + 0x1fe;
  }
  iVar2 = param_8 * (iVar2 >> 8);
  if (iVar2 < 0x21) {
    uVar1 = (undefined)iVar2;
  }
  else {
    uVar1 = 0x20;
  }
  *(undefined *)(param_1 + 0x1a) = uVar1;
  uVar5 = FUN_08a103b0(param_16,0,4,4,param_8 * param_9,0);
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined *)(param_1 + 0x29) = param_11;
  *(short *)(param_1 + 0x24) = (short)param_8;
  *(char *)(param_1 + 0x28) = (char)param_10;
  *(short *)(param_1 + 0x26) = (short)param_9;
  *(short *)(param_1 + 0x2a) = (short)param_14;
  uVar5 = FUN_08a103b0(param_16,0,0x10,1,param_14,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  if (0 < param_9) {
    do {
      if (0 < param_8) {
        iVar2 = 0;
        iVar6 = local_50 * param_8 * 4;
        do {
          iVar3 = 0;
          if (param_10 == 1) {
            iVar3 = iVar2;
          }
          iVar3 = FUN_08a11e90(iVar7,param_4,param_5,param_6,param_7,iVar3);
          if (param_15 == 0) {
            iVar4 = FUN_08a102d4(param_16,param_12,param_13,iVar3);
          }
          else {
            iVar4 = param_15;
            param_15 = param_15 + iVar3;
          }
          iVar2 = iVar2 + 1;
          *(int *)(*(int *)(param_1 + 0x20) + iVar6) = iVar4;
          iVar6 = iVar6 + 4;
        } while (param_8 != iVar2);
      }
      local_50 = local_50 + 1;
    } while (param_9 != local_50);
  }
  return 1;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a14e7c(int param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    psVar3 = *(short **)(param_1 + 4);
    uVar1 = *(ushort *)(param_1 + 0x18);
    if ((psVar3 != (short *)0x0) && (uVar5 = 0, uVar1 != 0)) {
      do {
        sVar2 = *psVar3;
        uVar5 = uVar5 + 1;
        *psVar3 = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          FUN_08a14c38(psVar3);
          thunk_FUN_08a13244(0,psVar3);
        }
        psVar3 = psVar3 + 0x60;
      } while (uVar1 != uVar5);
    }
    psVar3 = *(short **)(param_1 + 8);
    uVar1 = *(ushort *)(param_1 + 0x1a);
    if ((psVar3 != (short *)0x0) && (uVar5 = 0, uVar1 != 0)) {
      do {
        sVar2 = *psVar3;
        *psVar3 = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          psVar4 = *(short **)(psVar3 + 2);
          uVar7 = (uint)(ushort)psVar3[4];
          if ((psVar4 != (short *)0x0) && (uVar6 = 0, uVar7 != 0)) {
            do {
              while( true ) {
                sVar2 = *psVar4;
                uVar6 = uVar6 + 1;
                *psVar4 = sVar2 + -1;
                if ((short)(sVar2 + -1) != 0) break;
                FUN_08a14bc0(psVar4);
                thunk_FUN_08a13244(0,psVar4);
                psVar4 = psVar4 + 0x18;
                if (uVar7 == uVar6) goto LAB_08a14f50;
              }
              psVar4 = psVar4 + 0x18;
            } while (uVar7 != uVar6);
          }
LAB_08a14f50:
          thunk_FUN_08a13244(0,psVar3);
        }
        uVar5 = uVar5 + 1;
        psVar3 = psVar3 + 8;
      } while (uVar1 != uVar5);
    }
    FUN_08a14aac(*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x1c));
    psVar3 = *(short **)(param_1 + 0x10);
    uVar1 = *(ushort *)(param_1 + 0x1e);
    if ((psVar3 != (short *)0x0) && (uVar5 = 0, uVar1 != 0)) {
      do {
        sVar2 = *psVar3;
        uVar5 = uVar5 + 1;
        *psVar3 = sVar2 + -1;
        if ((short)(sVar2 + -1) == 0) {
          FUN_08a12888(*(undefined4 *)(psVar3 + 2));
          thunk_FUN_08a13244(0,psVar3);
        }
        psVar3 = psVar3 + 8;
      } while (uVar1 != uVar5);
    }
    FUN_08a1473c(*(undefined4 *)(param_1 + 0x14),*(ushort *)(param_1 + 0x20) + 1);
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x38));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x3c));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x48));
    FUN_08a196c0(*(undefined4 *)(param_1 + 0x50));
    FUN_08a19774(*(undefined4 *)(param_1 + 0x54));
  }
  return param_1;
}


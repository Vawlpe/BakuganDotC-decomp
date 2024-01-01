#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a14c38(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 != 0) {
    psVar6 = *(short **)(param_1 + 4);
    if (psVar6 == (short *)0x0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x18);
    }
    else {
      sVar1 = *psVar6;
      *psVar6 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_08a14c38(psVar6);
        thunk_FUN_08a13244(0,psVar6);
        uVar3 = (uint)*(ushort *)(param_1 + 0x18);
      }
      else {
        uVar3 = (uint)*(ushort *)(param_1 + 0x18);
      }
    }
    iVar5 = *(int *)(param_1 + 8);
    if (uVar3 == 0) {
      thunk_FUN_08a13244(0);
      thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0xc));
      thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x10));
      thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x14));
      thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x30));
      thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x34));
      thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x38));
      return param_1;
    }
    iVar8 = 0;
    iVar2 = 0;
LAB_08a14c94:
    do {
      psVar6 = *(short **)(iVar2 + iVar5);
      if ((((int)psVar6 + 1U & 0xffff0000) != 0) && (psVar6 != (short *)0x0)) {
        sVar1 = *psVar6;
        *psVar6 = sVar1 + -1;
        if ((short)(sVar1 + -1) != 0) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x18);
          iVar8 = iVar8 + 1;
          iVar2 = iVar8 * 4;
          if ((int)uVar3 <= iVar8) break;
          goto LAB_08a14c94;
        }
        psVar4 = *(short **)(psVar6 + 2);
        uVar3 = (uint)(ushort)psVar6[4];
        if ((psVar4 != (short *)0x0) && (uVar7 = 0, uVar3 != 0)) {
          do {
            while( true ) {
              sVar1 = *psVar4;
              uVar7 = uVar7 + 1;
              *psVar4 = sVar1 + -1;
              if ((short)(sVar1 + -1) != 0) break;
              FUN_08a14bc0(psVar4);
              thunk_FUN_08a13244(0,psVar4);
              psVar4 = psVar4 + 0x18;
              if (uVar3 == uVar7) goto LAB_08a14d2c;
            }
            psVar4 = psVar4 + 0x18;
          } while (uVar3 != uVar7);
        }
LAB_08a14d2c:
        thunk_FUN_08a13244(0,psVar6);
        uVar3 = (uint)*(ushort *)(param_1 + 0x18);
        iVar5 = *(int *)(param_1 + 8);
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar8 * 4;
    } while (iVar8 < (int)uVar3);
    thunk_FUN_08a13244(0);
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0xc));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x10));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x14));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x30));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x34));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x38));
  }
  return param_1;
}


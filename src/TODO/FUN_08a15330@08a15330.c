#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a15330(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((param_2 & 4) != 0) {
      uVar6 = (uint)*(ushort *)(param_1 + 0x1a);
      iVar9 = 0;
      if (uVar6 != 0) {
        do {
          iVar5 = *(int *)(param_1 + 8);
          while (iVar5 = iVar5 + iVar9 * 0x10, *(short *)(iVar5 + 8) != 0) {
            iVar8 = 0;
            iVar7 = 0;
            do {
              iVar3 = *(int *)(iVar5 + 4);
              while( true ) {
                iVar3 = iVar3 + iVar7;
                iVar4 = FUN_08a15cb4(iVar3,1,0);
                iVar8 = iVar8 + 1;
                iVar7 = iVar7 + 0x30;
                if ((iVar4 != 0) || (*(int *)(iVar3 + 4) == 0)) break;
                iVar4 = FUN_08a1cf3c(*(int *)(iVar3 + 4),1,0x80000001,param_3);
                *(undefined2 *)(iVar4 + 0xe) = 1;
                FUN_08a15cf0(iVar3,iVar4);
                FUN_08a15d78(iVar3,*(undefined4 *)(iVar4 + 8));
                if ((int)(uint)*(ushort *)(iVar5 + 8) <= iVar8) {
                  uVar1 = *(ushort *)(param_1 + 0x1a);
                  goto LAB_08a15464;
                }
                iVar3 = *(int *)(iVar5 + 4);
              }
              FUN_08a15d78(iVar3,*(undefined4 *)(iVar4 + 8));
            } while (iVar8 < (int)(uint)*(ushort *)(iVar5 + 8));
            uVar1 = *(ushort *)(param_1 + 0x1a);
LAB_08a15464:
            uVar6 = (uint)uVar1;
            iVar9 = iVar9 + 1;
            if ((int)uVar6 <= iVar9) goto LAB_08a1547c;
            iVar5 = *(int *)(param_1 + 8);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar6);
      }
    }
LAB_08a1547c:
    uVar2 = 1;
    if (((param_2 & 10) != 0) && (uVar2 = 1, *(short *)(param_1 + 0x1e) != 0)) {
      if ((param_2 & 8) == 0) {
        uVar2 = 1;
        iVar9 = 0;
        do {
          iVar5 = iVar9 * 0x10;
          iVar9 = iVar9 + 1;
          iVar5 = FUN_08a25d78(*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x10) + 4),
                               (int)(param_2 << 0x1e) < 0);
          if (iVar5 == 0) {
            uVar2 = 0;
          }
        } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x1e));
      }
      else {
        uVar2 = 1;
        iVar9 = 0;
        do {
          iVar5 = iVar9 * 0x10;
          iVar9 = iVar9 + 1;
          iVar5 = FUN_08a25d78(*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x10) + 4),
                               (int)(param_2 << 0x1e) < 0 | 2);
          if (iVar5 == 0) {
            uVar2 = 0;
          }
        } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x1e));
      }
      return uVar2;
    }
  }
  return uVar2;
}


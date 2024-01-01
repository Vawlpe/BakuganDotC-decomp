#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a15740(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined auStack_a0 [112];
  
  FUN_08a12a64(auStack_a0);
  if (param_1 != 0) {
    if ((param_2 & 4) != 0) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x1a);
      iVar9 = 0;
      if (uVar5 != 0) {
        do {
          iVar2 = *(int *)(param_1 + 8);
          while (iVar2 = iVar2 + iVar9 * 0x10, *(short *)(iVar2 + 8) != 0) {
            iVar8 = 0;
            iVar7 = 0;
            do {
              iVar6 = *(int *)(iVar2 + 4);
              while( true ) {
                iVar6 = iVar6 + iVar7;
                iVar3 = FUN_08a15cb4(iVar6,1,0);
                iVar8 = iVar8 + 1;
                iVar7 = iVar7 + 0x30;
                iVar6 = *(int *)(iVar6 + 4);
                if ((iVar3 != 0) || (iVar6 == 0)) break;
                FUN_08a1d224(iVar6,1,0x80000001,auStack_a0);
                if ((int)(uint)*(ushort *)(iVar2 + 8) <= iVar8) {
                  uVar1 = *(ushort *)(param_1 + 0x1a);
                  goto LAB_08a1583c;
                }
                iVar6 = *(int *)(iVar2 + 4);
              }
            } while (iVar8 < (int)(uint)*(ushort *)(iVar2 + 8));
            uVar1 = *(ushort *)(param_1 + 0x1a);
LAB_08a1583c:
            uVar5 = (uint)uVar1;
            iVar9 = iVar9 + 1;
            if ((int)uVar5 <= iVar9) goto LAB_08a15850;
            iVar2 = *(int *)(param_1 + 8);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar5);
      }
    }
LAB_08a15850:
    iVar9 = FUN_08a136f0(auStack_a0);
    if (iVar9 != 0) {
      uVar4 = FUN_08a15330(param_1,param_2,auStack_a0);
      FUN_08a12fb4(auStack_a0);
      return uVar4;
    }
  }
  return 0;
}


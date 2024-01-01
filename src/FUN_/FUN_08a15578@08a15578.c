#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15578(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    if ((param_2 & 4) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x1a);
      iVar8 = 0;
      if (uVar3 != 0) {
        do {
          iVar4 = *(int *)(param_1 + 8);
          while (iVar4 = iVar4 + iVar8 * 0x10, *(short *)(iVar4 + 8) != 0) {
            iVar7 = 0;
            iVar6 = 0;
            iVar2 = *(int *)(iVar4 + 4);
            while( true ) {
              iVar2 = iVar2 + iVar6;
              iVar1 = FUN_08a15cb4(iVar2,1,0);
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 0x30;
              iVar5 = *(int *)(iVar2 + 4);
              if ((iVar1 != 0) && (iVar5 != 0)) {
                FUN_08a15d28(iVar2,iVar1);
                FUN_08a1483c(iVar1,1);
              }
              FUN_08a15d78(iVar2,*(undefined4 *)(iVar5 + 8));
              if ((int)(uint)*(ushort *)(iVar4 + 8) <= iVar7) break;
              iVar2 = *(int *)(iVar4 + 4);
            }
            uVar3 = (uint)*(ushort *)(param_1 + 0x1a);
            iVar8 = iVar8 + 1;
            if ((int)uVar3 <= iVar8) goto LAB_08a15684;
            iVar4 = *(int *)(param_1 + 8);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar3);
      }
    }
LAB_08a15684:
    if (((param_2 & 10) != 0) && (*(short *)(param_1 + 0x1e) != 0)) {
      if ((param_2 & 8) == 0) {
        iVar4 = 0;
        iVar8 = *(int *)(param_1 + 0x10);
        while( true ) {
          iVar2 = iVar4 * 0x10;
          iVar4 = iVar4 + 1;
          FUN_08a259e4(*(undefined4 *)(iVar2 + iVar8 + 4),(int)(param_2 << 0x1e) < 0);
          if ((int)(uint)*(ushort *)(param_1 + 0x1e) <= iVar4) break;
          iVar8 = *(int *)(param_1 + 0x10);
        }
      }
      else {
        iVar4 = 0;
        iVar8 = *(int *)(param_1 + 0x10);
        while( true ) {
          iVar2 = iVar4 * 0x10;
          iVar4 = iVar4 + 1;
          FUN_08a259e4(*(undefined4 *)(iVar2 + iVar8 + 4),(int)(param_2 << 0x1e) < 0 | 2);
          if ((int)(uint)*(ushort *)(param_1 + 0x1e) <= iVar4) break;
          iVar8 = *(int *)(param_1 + 0x10);
        }
      }
    }
  }
  return;
}


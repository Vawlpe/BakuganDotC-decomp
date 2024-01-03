#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895c834(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = 0;
  if ('\0' < *(char *)(param_1 + 0x4cda)) {
    iVar9 = 0;
    do {
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      uVar3 = DONE_Get_DAT_08AAC9E0();
      uVar4 = FUN_0880d0ac(uVar3,iVar7 + 3);
      iVar8 = *piVar2 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3);
      if ((int)uVar4 < 0) {
        uVar4 = -(-uVar4 & 7) & 0x1f;
      }
      else {
        uVar4 = uVar4 & 7;
      }
      *(byte *)(iVar8 + 0x5de) = *(byte *)(iVar8 + 0x5de) | (byte)(1 << uVar4);
      iVar8 = 0;
      iVar10 = 0;
      do {
        iVar5 = DONE_Get_DAT_08AAC9E0();
        iVar6 = 0;
        if (*(int *)(iVar5 + 4) != 0) {
          iVar6 = *(int *)(*(int *)(iVar5 + 4) + iVar9 + iVar10 + 0xd8);
        }
        if (iVar6 != 0xff) {
          piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
          iVar5 = DONE_Get_DAT_08AAC9E0();
          uVar4 = 0;
          if (*(int *)(iVar5 + 4) != 0) {
            uVar4 = *(uint *)(*(int *)(iVar5 + 4) + iVar9 + iVar10 + 0xd8);
          }
          iVar5 = *piVar2 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3);
          if ((int)uVar4 < 0) {
            bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
          }
          else {
            bVar1 = (byte)(1 << (uVar4 & 7));
          }
          *(byte *)(iVar5 + 0x5e8) = *(byte *)(iVar5 + 0x5e8) | bVar1;
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar8 < 2);
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar7 < *(char *)(param_1 + 0x4cda));
  }
  return;
}


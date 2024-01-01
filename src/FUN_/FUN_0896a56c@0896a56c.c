#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896a56c(int param_1)

{
  char cVar1;
  undefined uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x2b7c);
  iVar6 = uVar4 + (int)*(char *)(param_1 + 0x2b7d);
  iVar8 = uVar4 * 4;
  if ((int)uVar4 < iVar6) {
    iVar9 = param_1 + iVar8;
    uVar7 = uVar4;
    do {
      if ((int)(uVar7 - uVar4) < (int)*(char *)(param_1 + 0x29bd) << 2) {
        FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             *(undefined4 *)(iVar9 + 0x25fc);
        uVar4 = uVar7 - *(byte *)(param_1 + 0x2b7c);
        iVar6 = param_1 + ((int)(uVar4 + ((uint)((int)uVar4 >> 2) >> 0x1e)) >> 2) * 4;
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        bVar3 = '\x02' < *(char *)(param_1 + 0x29bd);
        if ((int)uVar4 < 0) {
          cVar1 = *(char *)((iVar6 - (-uVar4 & 3)) + 0x29ec);
        }
        else {
          cVar1 = *(char *)(iVar6 + (uVar4 & 3) + 0x29ec);
        }
        if (cVar1 == -1) {
          if (bVar3) {
            FUN_0892bdec(uVar5,0xff);
            uVar4 = (uint)*(byte *)(param_1 + 0x2b7c);
            iVar6 = uVar4 + (int)*(char *)(param_1 + 0x2b7d);
          }
          else {
            FUN_08932898(uVar5,0xff);
            uVar4 = (uint)*(byte *)(param_1 + 0x2b7c);
            iVar6 = uVar4 + (int)*(char *)(param_1 + 0x2b7d);
          }
        }
        else if (bVar3) {
          if ((int)uVar4 < 0) {
            uVar2 = *(undefined *)((iVar6 - (-uVar4 & 3)) + 0x29ec);
          }
          else {
            uVar2 = *(undefined *)(iVar6 + (uVar4 & 3) + 0x29ec);
          }
          FUN_0892bdec(uVar5,uVar2);
          uVar4 = (uint)*(byte *)(param_1 + 0x2b7c);
          iVar6 = uVar4 + (int)*(char *)(param_1 + 0x2b7d);
        }
        else {
          if ((int)uVar4 < 0) {
            uVar2 = *(undefined *)((iVar6 - (-uVar4 & 3)) + 0x29ec);
          }
          else {
            uVar2 = *(undefined *)(iVar6 + (uVar4 & 3) + 0x29ec);
          }
          FUN_08932898(uVar5,uVar2);
          uVar4 = (uint)*(byte *)(param_1 + 0x2b7c);
          iVar6 = uVar4 + (int)*(char *)(param_1 + 0x2b7d);
        }
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
      iVar9 = iVar9 + 4;
    } while ((int)uVar7 < iVar6);
  }
  return;
}


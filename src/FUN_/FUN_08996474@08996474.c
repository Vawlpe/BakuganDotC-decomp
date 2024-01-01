#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08996474(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  
  memset_jak(param_1 + 0x110e,0,0xbe);
  iVar1 = FUN_08996448(param_1);
  uVar12 = 0;
  iVar6 = param_1;
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)FUN_0880cc48();
      uVar11 = (int)(uVar12 + ((uint)((int)uVar12 >> 2) >> 0x1e)) >> 2 & 0xff;
      if ((int)uVar12 < 0) {
        uVar5 = -(-uVar12 & 3) & 0xff;
      }
      else {
        uVar5 = uVar12 & 3;
      }
      *(undefined *)(iVar6 + 0x110e) = *(undefined *)(*piVar2 + (uVar11 * 4 + uVar5) * 4 + 0x96);
      piVar2 = (int *)FUN_0880cc48();
      if ((int)uVar12 < 0) {
        uVar5 = -(-uVar12 & 3) & 0xff;
      }
      else {
        uVar5 = uVar12 & 3;
      }
      *(byte *)(iVar6 + 0x110f) = *(byte *)(*piVar2 + (uVar11 * 4 + uVar5) * 4 + 0x97) & 0x7f;
      piVar2 = (int *)FUN_0880cc48();
      if ((int)uVar12 < 0) {
        uVar5 = -(-uVar12 & 3) & 0xff;
      }
      else {
        uVar5 = uVar12 & 3;
      }
      uVar12 = uVar12 + 1;
      *(undefined2 *)(iVar6 + 0x1110) = *(undefined2 *)(*piVar2 + (uVar11 * 4 + uVar5) * 4 + 0x98);
      iVar6 = iVar6 + 4;
    } while ((int)uVar12 < 0x28);
    iVar6 = 0;
    do {
      uVar3 = 1;
      if (iVar6 < 5) {
        uVar3 = 3;
      }
      iVar1 = param_1 + iVar6;
      iVar6 = iVar6 + 1;
      *(undefined *)(iVar1 + 0x11b8) = uVar3;
    } while (iVar6 < 10);
    uVar12 = 0;
    do {
      cVar13 = '\0';
      uVar11 = 0;
      do {
        piVar2 = (int *)FUN_0880cc48();
        uVar5 = (uVar12 & 0xff) * 4 + (uVar11 & 0xff);
        if ((int)uVar5 < 0) {
          uVar4 = -(-uVar5 & 7) & 0x1f;
        }
        else {
          uVar4 = uVar5 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + ((int)uVar5 >> 3) + 0x91) & 1 << uVar4) != 0) {
          cVar13 = cVar13 + '\x01';
        }
        uVar11 = uVar11 + 1;
        iVar6 = param_1 + uVar12;
      } while ((int)uVar11 < 3);
      uVar12 = uVar12 + 1;
      *(char *)(iVar6 + 0x11c2) = cVar13;
    } while ((int)uVar12 < 10);
    iVar1 = 0;
    iVar7 = 0;
    iVar6 = param_1;
    do {
      iVar8 = param_1 + iVar1;
      if (iVar1 < 5) {
        if (2 < *(byte *)(iVar8 + 0x11c2)) {
          cVar13 = '\0';
          iVar9 = 0;
          iVar10 = param_1 + iVar7 * 4;
          do {
            if (*(char *)(iVar10 + 0x110f) == '\0') {
              cVar13 = cVar13 + '\x01';
            }
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar9 < 3);
          if (cVar13 == '\x03') {
            *(undefined *)(iVar8 + 0x11ae) = 1;
          }
        }
      }
      else if ((*(byte *)(iVar8 + 0x11c2) != 0) && (*(char *)(iVar6 + 0x110f) == '\0')) {
        *(undefined *)(iVar8 + 0x11ae) = 1;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x10;
    } while (iVar1 < 10);
  }
  return;
}


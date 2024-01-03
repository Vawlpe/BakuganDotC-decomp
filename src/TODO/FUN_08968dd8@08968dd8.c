#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08968dd8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_40;
  int local_3c;
  
  memset_jak((undefined *)(param_1 + 0x29ec),0xff,0x10);
  memset_jak((undefined *)(param_1 + 0x29fc),0,0x10);
  if (DAT_08ac0e78 == 0x136) {
    local_3c = 0;
    if ('\0' < *(char *)(param_1 + 0x29bd)) {
      iVar11 = 0;
      local_40 = param_1;
      do {
        bVar1 = false;
        iVar12 = 0;
        do {
          piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
          uVar8 = (*(char *)(param_1 + local_3c + 0x29bf) * 4 + iVar12) - 4;
          if ((int)uVar8 < 0) {
            uVar6 = -(-uVar8 & 7) & 0x1f;
          }
          else {
            uVar6 = uVar8 & 7;
          }
          if (((uint)*(byte *)(*piVar2 + ((int)(uVar8 + ((uint)((int)uVar8 >> 3) >> 0x1d)) >> 3) +
                              0x51a) & 1 << uVar6) != 0) {
            iVar4 = 0;
            iVar10 = local_40 + iVar12;
            *(char *)(iVar10 + 0x29ec) = (char)uVar8;
            iVar9 = 0;
            do {
              iVar3 = DONE_Get_DAT_08AAC9E0();
              uVar8 = 0;
              if (*(int *)(iVar3 + 4) != 0) {
                uVar8 = *(uint *)(*(int *)(iVar3 + 4) + iVar11 + iVar4 + 0xd8);
              }
              if (((uVar8 & 0xff) != 0xff) && ((uint)*(byte *)(iVar10 + 0x29ec) == (uVar8 & 0xff)))
              {
                *(byte *)(iVar10 + 0x29fc) = *(byte *)(iVar10 + 0x29fc) | 1;
                if (!bVar1) {
                  *(byte *)(iVar10 + 0x29fc) = *(byte *)(iVar10 + 0x29fc) | 2;
                  bVar1 = true;
                }
                break;
              }
              iVar9 = iVar9 + 1;
              iVar4 = iVar4 + 4;
            } while (iVar9 < 2);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 4);
        local_3c = local_3c + 1;
        local_40 = local_40 + 4;
        iVar11 = iVar11 + 8;
      } while (local_3c < *(char *)(param_1 + 0x29bd));
    }
    iVar12 = 0;
    iVar11 = 0;
    do {
      iVar4 = DONE_Get_DAT_08AAC9E0();
      uVar5 = 0;
      if (*(int *)(iVar4 + 4) != 0) {
        uVar5 = (undefined)*(undefined4 *)(*(int *)(iVar4 + 4) + iVar11 + 0x118);
      }
      iVar4 = param_1 + iVar12;
      iVar12 = iVar12 + 1;
      *(undefined *)(iVar4 + 0x2a4c) = uVar5;
      iVar11 = iVar11 + 4;
    } while (iVar12 < 4);
  }
  else {
    iVar11 = 0;
    if ('\0' < *(char *)(param_1 + 0x29bd)) {
      iVar4 = 0;
      iVar12 = param_1;
      do {
        iVar10 = 0;
        iVar9 = 0;
        do {
          iVar3 = DONE_Get_DAT_08AAC9E0();
          if (*(int *)(iVar3 + 4) != 0) {
            *(undefined4 *)(*(int *)(iVar3 + 4) + iVar4 + iVar9 + 0xd8) = 0xff;
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar10 < 2);
        bVar7 = 0;
        bVar1 = false;
        iVar9 = 0;
        do {
          piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
          uVar8 = (*(char *)(param_1 + iVar11 + 0x29bf) * 4 + iVar9) - 4;
          if ((int)uVar8 < 0) {
            uVar6 = -(-uVar8 & 7) & 0x1f;
          }
          else {
            uVar6 = uVar8 & 7;
          }
          if (((uint)*(byte *)(*piVar2 + ((int)(uVar8 + ((uint)((int)uVar8 >> 3) >> 0x1d)) >> 3) +
                              0x51a) & 1 << uVar6) != 0) {
            iVar10 = iVar12 + iVar9;
            *(char *)(iVar10 + 0x29ec) = (char)uVar8;
            if ((bVar7 < 2) && (*(byte *)(iVar10 + 0x29fc) = *(byte *)(iVar10 + 0x29fc) | 1, !bVar1)
               ) {
              *(byte *)(iVar10 + 0x29fc) = *(byte *)(iVar10 + 0x29fc) | 2;
              bVar1 = true;
            }
            bVar7 = bVar7 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 4);
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 4;
        iVar4 = iVar4 + 8;
      } while (iVar11 < *(char *)(param_1 + 0x29bd));
    }
    memset_jak((undefined *)(param_1 + 0x2a4c),100,4);
  }
  return;
}


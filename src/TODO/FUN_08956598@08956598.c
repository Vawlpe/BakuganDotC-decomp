#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08956598(int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_40;
  int local_3c;
  
  memset_jak((undefined *)(param_1 + 0x4fb8),0xff,0x10);
  memset_jak((undefined *)(param_1 + 0x4fc8),0,0x10);
  memset_jak((undefined *)(param_1 + 0x4fd8),0xff,8);
  iVar6 = (int)*(char *)(param_1 + 0x4cda);
  if (DAT_08ac0e78 == 0x136) {
    local_3c = 0;
    if (0 < iVar6) {
      iVar12 = 0;
      local_40 = param_1;
      do {
        bVar2 = false;
        iVar6 = 0;
        do {
          piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
          uVar9 = (*(char *)(param_1 + local_3c + 0x4cdd) * 4 + iVar6) - 4;
          if ((int)uVar9 < 0) {
            uVar7 = -(-uVar9 & 7) & 0x1f;
          }
          else {
            uVar7 = uVar9 & 7;
          }
          if (((uint)*(byte *)(*piVar3 + ((int)(uVar9 + ((uint)((int)uVar9 >> 3) >> 0x1d)) >> 3) +
                              0x5c8) & 1 << uVar7) != 0) {
            iVar10 = 0;
            iVar11 = local_40 + iVar6;
            *(char *)(iVar11 + 0x4fb8) = (char)uVar9;
            iVar13 = 0;
            do {
              iVar4 = _DONE_Get_DAT_08AAC9E0();
              uVar9 = 0;
              if (*(int *)(iVar4 + 4) != 0) {
                uVar9 = *(uint *)(*(int *)(iVar4 + 4) + iVar12 + iVar13 + 0xd8);
              }
              if (((uVar9 & 0xff) != 0xff) && ((uint)*(byte *)(iVar11 + 0x4fb8) == (uVar9 & 0xff)))
              {
                *(byte *)(iVar11 + 0x4fc8) = *(byte *)(iVar11 + 0x4fc8) | 1;
                if (!bVar2) {
                  *(byte *)(iVar11 + 0x4fc8) = *(byte *)(iVar11 + 0x4fc8) | 2;
                  bVar2 = true;
                }
                break;
              }
              iVar10 = iVar10 + 1;
              iVar13 = iVar13 + 4;
            } while (iVar10 < 2);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 4);
        local_3c = local_3c + 1;
        iVar6 = (int)*(char *)(param_1 + 0x4cda);
        local_40 = local_40 + 4;
        iVar12 = iVar12 + 8;
      } while (local_3c < iVar6);
    }
    iVar12 = 0;
    if (0 < iVar6) {
      iVar13 = 0;
      iVar6 = param_1;
      do {
        iVar10 = 0;
        iVar11 = 0;
        do {
          iVar4 = _DONE_Get_DAT_08AAC9E0();
          uVar9 = 0;
          if (*(int *)(iVar4 + 4) != 0) {
            uVar9 = *(uint *)(*(int *)(iVar4 + 4) + iVar13 + iVar11 + 0xd8);
          }
          if ((uVar9 & 0xff) != 0xff) {
            *(char *)(iVar6 + iVar10 + 0x4fd8) = (char)uVar9;
          }
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar10 < 2);
        iVar12 = iVar12 + 1;
        iVar13 = iVar13 + 8;
        iVar6 = iVar6 + 2;
      } while (iVar12 < *(char *)(param_1 + 0x4cda));
    }
    iVar12 = 0;
    iVar6 = 0;
    do {
      iVar13 = _DONE_Get_DAT_08AAC9E0();
      uVar5 = 0;
      if (*(int *)(iVar13 + 4) != 0) {
        uVar5 = (undefined)*(undefined4 *)(*(int *)(iVar13 + 4) + iVar6 + 0x118);
      }
      iVar13 = param_1 + iVar12;
      iVar12 = iVar12 + 1;
      *(undefined *)(iVar13 + 0x5020) = uVar5;
      iVar6 = iVar6 + 4;
    } while (iVar12 < 4);
  }
  else {
    local_3c = 0;
    if (0 < iVar6) {
      iVar13 = 0;
      iVar6 = param_1;
      iVar12 = param_1;
      do {
        iVar11 = 0;
        iVar10 = 0;
        do {
          iVar4 = _DONE_Get_DAT_08AAC9E0();
          if (*(int *)(iVar4 + 4) != 0) {
            *(undefined4 *)(*(int *)(iVar4 + 4) + iVar13 + iVar10 + 0xd8) = 0xff;
          }
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar11 < 2);
        uVar9 = 0;
        bVar2 = false;
        iVar10 = 0;
        do {
          piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
          uVar7 = (*(char *)(param_1 + local_3c + 0x4cdd) * 4 + iVar10) - 4;
          if ((int)uVar7 < 0) {
            uVar8 = -(-uVar7 & 7) & 0x1f;
          }
          else {
            uVar8 = uVar7 & 7;
          }
          if (((uint)*(byte *)(*piVar3 + ((int)(uVar7 + ((uint)((int)uVar7 >> 3) >> 0x1d)) >> 3) +
                              0x5c8) & 1 << uVar8) != 0) {
            iVar11 = iVar12 + iVar10;
            *(char *)(iVar11 + 0x4fb8) = (char)uVar7;
            if (uVar9 < 2) {
              bVar1 = *(byte *)(iVar11 + 0x4fc8);
              *(undefined *)(iVar6 + uVar9 + 0x4fd8) = *(undefined *)(iVar11 + 0x4fb8);
              *(byte *)(iVar11 + 0x4fc8) = bVar1 | 1;
              if (!bVar2) {
                *(byte *)(iVar11 + 0x4fc8) = *(byte *)(iVar11 + 0x4fc8) | 2;
                bVar2 = true;
              }
            }
            uVar9 = uVar9 + 1 & 0xff;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 4);
        local_3c = local_3c + 1;
        iVar12 = iVar12 + 4;
        iVar13 = iVar13 + 8;
        iVar6 = iVar6 + 2;
      } while (local_3c < *(char *)(param_1 + 0x4cda));
    }
    memset_jak((undefined *)(param_1 + 0x5020),100,4);
  }
  return;
}


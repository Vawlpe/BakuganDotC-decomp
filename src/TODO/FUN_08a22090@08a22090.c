#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a22090(uint param_1,byte param_2,char param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  param_1 = param_1 & 0xf;
  if (param_2 == 10) {
    iVar8 = param_1 * 0x10 + param_4;
    *(char *)(iVar8 + 0x3b) = param_3;
    uVar6 = FUN_08a208bc(param_1,*(undefined4 *)(iVar8 + 0x40));
    if (uVar6 != 0) {
      uVar11 = 0;
      uVar10 = uVar6;
      do {
        if ((uVar10 & 1) != 0) {
          iVar12 = (uint)*(byte *)(param_4 + 4) + (uint)*(byte *)(iVar8 + 0x3b) + -0x40;
          iVar9 = (uint)*(byte *)(param_4 + 6) + (uint)*(byte *)(iVar8 + 0x3b) + -0x40;
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          if (0x7f < iVar12) {
            iVar12 = 0x7f;
          }
          if (0x7f < iVar9) {
            iVar9 = 0x7f;
          }
          FUN_08a20b0c(uVar11,iVar12);
          FUN_08a20c2c(uVar11,iVar9);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar6 >> (uVar11 & 0x1f);
      } while (uVar11 < 0x20);
    }
  }
  else if (param_2 < 0xb) {
    if (param_2 == 6) {
      if (*(char *)(param_4 + 1) != '\0') {
        *(char *)(param_4 + 2) = param_3;
        *(undefined *)(param_4 + 1) = 0;
      }
    }
    else if (param_2 == 7) {
      iVar8 = param_1 * 0x10 + param_4;
      *(char *)(iVar8 + 0x39) = param_3;
      uVar6 = FUN_08a208bc(param_1,*(undefined4 *)(iVar8 + 0x40));
      if (uVar6 != 0) {
        uVar11 = 0;
        uVar10 = uVar6;
        do {
          if ((uVar10 & 1) != 0) {
            bVar1 = (&DAT_08afdec4)[uVar11];
            bVar2 = *(byte *)(param_4 + 5);
            bVar3 = *(byte *)(iVar8 + 0x39);
            bVar4 = *(byte *)(iVar8 + 0x3a);
            FUN_08a20a7c(uVar11,(((uint)((int)((ulonglong)
                                               ((longlong)
                                                (int)(((uint)((int)((ulonglong)
                                                                    ((longlong)
                                                                     (int)((uint)bVar1 *
                                                                          (uint)*(byte *)(param_4 +
                                                                                         3)) *
                                                                    0x81020409) >> 0x20) << 0x12) >>
                                                      0x18) * (uint)bVar3) * 0x81020409) >> 0x20) <<
                                        0x12) >> 0x18) * (uint)bVar4) / 0x7f & 0xff);
            FUN_08a20b9c(uVar11,(((uint)((int)((ulonglong)
                                               ((longlong)
                                                (int)(((uint)((int)((ulonglong)
                                                                    ((longlong)
                                                                     (int)((uint)bVar1 * (uint)bVar2
                                                                          ) * 0x81020409) >> 0x20)
                                                             << 0x12) >> 0x18) * (uint)bVar3) *
                                               0x81020409) >> 0x20) << 0x12) >> 0x18) * (uint)bVar4)
                                / 0x7f & 0xff);
          }
          uVar11 = uVar11 + 1;
          uVar10 = uVar6 >> (uVar11 & 0x1f);
        } while (uVar11 < 0x20);
      }
    }
  }
  else if (param_2 == 0x40) {
    if (param_3 == '\x7f') {
      param_4 = param_1 * 0x10 + param_4;
      uVar7 = *(undefined4 *)(param_4 + 0x40);
      *(undefined *)(param_4 + 0x3c) = 1;
    }
    else {
      param_4 = param_1 * 0x10 + param_4;
      *(undefined *)(param_4 + 0x3c) = 0;
      uVar7 = *(undefined4 *)(param_4 + 0x40);
    }
    FUN_08a20294(param_1,param_3 == '\x7f',uVar7);
  }
  else if (param_2 < 0x41) {
    if (param_2 == 0xb) {
      iVar8 = param_1 * 0x10 + param_4;
      *(char *)(iVar8 + 0x3a) = param_3;
      uVar6 = FUN_08a208bc(param_1,*(undefined4 *)(iVar8 + 0x40));
      if (uVar6 != 0) {
        uVar11 = 0;
        uVar10 = uVar6;
        do {
          if ((uVar10 & 1) != 0) {
            bVar1 = (&DAT_08afdec4)[uVar11];
            bVar2 = *(byte *)(param_4 + 5);
            bVar3 = *(byte *)(iVar8 + 0x39);
            bVar4 = *(byte *)(iVar8 + 0x3a);
            FUN_08a20a7c(uVar11,(((uint)((int)((ulonglong)
                                               ((longlong)
                                                (int)(((uint)((int)((ulonglong)
                                                                    ((longlong)
                                                                     (int)((uint)bVar1 *
                                                                          (uint)*(byte *)(param_4 +
                                                                                         3)) *
                                                                    0x81020409) >> 0x20) << 0x12) >>
                                                      0x18) * (uint)bVar3) * 0x81020409) >> 0x20) <<
                                        0x12) >> 0x18) * (uint)bVar4) / 0x7f & 0xff);
            FUN_08a20b9c(uVar11,(((uint)((int)((ulonglong)
                                               ((longlong)
                                                (int)(((uint)((int)((ulonglong)
                                                                    ((longlong)
                                                                     (int)((uint)bVar1 * (uint)bVar2
                                                                          ) * 0x81020409) >> 0x20)
                                                             << 0x12) >> 0x18) * (uint)bVar3) *
                                               0x81020409) >> 0x20) << 0x12) >> 0x18) * (uint)bVar4)
                                / 0x7f & 0xff);
          }
          uVar11 = uVar11 + 1;
          uVar10 = uVar6 >> (uVar11 & 0x1f);
        } while (uVar11 < 0x20);
      }
    }
  }
  else if (param_2 == 99) {
    if (param_3 == '\0') {
      *(undefined *)(param_4 + 1) = 1;
      *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_4 + 0x1c);
    }
    else if (param_3 == '\x01') {
      iVar8 = *(int *)(param_4 + 0x20);
      cVar5 = *(char *)(param_4 + 2);
      if ((iVar8 != 0) || (cVar5 != -1)) {
        if (cVar5 == '\0') {
          *(int *)(param_4 + 0x1c) = iVar8;
        }
        else {
          *(char *)(param_4 + 2) = cVar5 + -1;
          if ((char)(cVar5 + -1) == '\0') {
            *(undefined *)(param_4 + 2) = 0xff;
            *(undefined4 *)(param_4 + 0x20) = 0;
          }
          else {
            *(int *)(param_4 + 0x1c) = iVar8;
          }
        }
      }
    }
  }
  return 0;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897eb04(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  
  if (param_2 == '\0') {
    uVar1 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
    uVar1 = uVar1 & 0xff;
    uVar11 = 0;
    iVar9 = 0;
    iVar13 = param_1 + 0x74;
    iVar12 = param_1;
    do {
      uVar10 = uVar11 & 0xff;
      iVar2 = FUN_0897a6b4(param_1,*(undefined *)(param_1 + 0xee5),uVar10,
                           *(undefined *)(param_1 + 0xee1));
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      if (iVar2 == 1) {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      else {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      FUN_0897a48c(param_1,uVar5,0);
      if (((uVar1 == 0xff) || (uVar1 == 0)) || (uVar11 != 0)) {
        FUN_0897c534(param_1,uVar10,uVar10);
        uVar5 = *(undefined4 *)(iVar12 + 0xb8c);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      else {
        FUN_0897c534(param_1,uVar10,4);
        uVar5 = *(undefined4 *)(iVar12 + 0xb8c);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      *(undefined4 *)(iVar2 + 0x68) = uVar5;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar13,3);
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 4;
      iVar12 = iVar12 + 4;
      iVar13 = iVar13 + 0x28;
    } while ((int)uVar11 < 6);
    uVar11 = 0x1b;
    iVar12 = 0x6c;
    iVar9 = param_1 + 0x4ac;
    do {
      iVar13 = FUN_0897a6b4(param_1,*(undefined *)(param_1 + 0xee5),uVar11 - 0x1b & 0xff,
                            *(undefined *)(param_1 + 0xee1));
      uVar10 = uVar11 & 0xff;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      if (iVar13 == 1) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        cVar3 = *(char *)(param_1 + 0xee5);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        cVar3 = *(char *)(param_1 + 0xee5);
      }
      if (cVar3 < '\x01') {
        if (-1 < cVar3) {
          FUN_0897a4e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),
                       *(undefined *)(uVar11 + *(char *)(param_1 + 0xee1) * 6 + param_1 + 0x1235));
        }
      }
      else if (cVar3 < '\x02') {
        FUN_0897a4e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),
                     *(undefined *)(uVar11 + *(char *)(param_1 + 0xee1) * 6 + param_1 + 0x1235));
      }
      else if (cVar3 < '\x03') {
        if (uVar1 == 0) {
          FUN_0897a5d8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),
                       *(undefined *)
                        (uVar11 + ((int)*(char *)(param_1 + 0xee1) / 3) * 6 + param_1 + 0x1235));
        }
        else if (uVar11 == 0x1b) {
          if (uVar1 < 2) {
            if (uVar1 != 0) {
              FUN_0897a5d8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),
                           *(undefined *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1284));
            }
          }
          else if (uVar1 < 3) {
            FUN_0897a5d8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),
                         *(undefined *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1280));
          }
        }
        else {
          FUN_0897a5d8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),0);
        }
      }
      if (((uVar1 == 0xff) || (uVar1 == 0)) || (uVar11 != 0x1b)) {
        FUN_0897c534(param_1,uVar10,uVar10);
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      else {
        FUN_0897c534(param_1,uVar10,0x1f);
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      FUN_089a5408(0x3fc00000,0,uVar5,iVar9,3);
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
      iVar9 = iVar9 + 0x28;
    } while ((int)uVar11 < 0x21);
    uVar11 = 7;
    iVar12 = 0x1c;
    iVar9 = param_1 + 0x1c;
    iVar13 = param_1 + 0x18c;
    do {
      uVar8 = 0xff;
      uVar10 = uVar11 & 0xff;
      if (uVar1 == 0xff) {
        cVar3 = *(char *)(param_1 + 0xee5);
LAB_0897f024:
        iVar6 = (int)cVar3;
        iVar7 = (int)*(char *)(param_1 + 0xee1);
        iVar2 = FUN_0897a6b4(param_1,cVar3,uVar11 - 7 & 0xff,*(char *)(param_1 + 0xee1));
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        if (iVar2 == 1) {
          if (iVar6 == 2) {
            if (*(char *)(uVar11 + (iVar7 / 3) * 6 + param_1 + 0x1249) == '\0') {
              *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
            }
            else {
              *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
            }
          }
          else if (*(char *)(uVar11 + iVar7 * 6 + param_1 + 0x1249) == '\0') {
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
          }
          else {
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
          }
        }
        else {
          *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        }
      }
      else {
        if (uVar1 == 0) {
          cVar3 = *(char *)(param_1 + 0xee5);
          goto LAB_0897f024;
        }
        if (uVar11 == 7) {
          if (uVar1 < 2) {
            if (uVar1 != 0) {
              iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
              if (*(char *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1284) == '\0') {
                *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
              }
              else {
                *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
              }
            }
          }
          else if (uVar1 < 3) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
            if (*(char *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1280) == '\0') {
              *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            }
            else {
              *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
            }
          }
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        }
      }
      if (((uVar1 == uVar8) || (uVar1 == 0)) || (uVar11 != 7)) {
        FUN_0897c534(param_1,uVar10,uVar10);
        uVar5 = *(undefined4 *)(iVar9 + 0xb8c);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      else {
        FUN_0897c534(param_1,uVar10,0xd);
        uVar5 = *(undefined4 *)(iVar9 + 0xb8c);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      *(undefined4 *)(iVar2 + 0x68) = uVar5;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),iVar13,3);
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
      iVar9 = iVar9 + 4;
      iVar13 = iVar13 + 0x28;
    } while ((int)uVar11 < 0xd);
    uVar11 = 0xe;
    iVar12 = 0x38;
    iVar9 = param_1 + 0x38;
    iVar13 = param_1 + 0x2a4;
    do {
      uVar10 = uVar11 & 0xff;
      uVar8 = 0xff;
      if (uVar1 == 0xff) {
        cVar3 = *(char *)(param_1 + 0xee5);
LAB_0897f2a4:
        iVar6 = (int)cVar3;
        iVar4 = (int)*(char *)(param_1 + 0xee1);
        uVar14 = FUN_0897a6b4(param_1,cVar3,uVar11 - 0xe & 0xff,*(char *)(param_1 + 0xee1));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        if ((int)uVar14 == (int)((ulonglong)uVar14 >> 0x20)) {
          if (iVar6 == 2) {
            if (*(char *)(uVar11 + (iVar4 / 3) * 6 + param_1 + 0x125a) == '\0') {
              *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
            }
            else {
              *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            }
          }
          else if (*(char *)(uVar11 + iVar4 * 6 + param_1 + 0x125a) == '\0') {
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
          }
          else {
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
          }
        }
        else {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        }
      }
      else {
        if (uVar1 == 0) {
          cVar3 = *(char *)(param_1 + 0xee5);
          goto LAB_0897f2a4;
        }
        if (uVar11 == 0xe) {
          if (uVar1 < 2) {
            if (uVar1 != 0) {
              iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
              if (*(char *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1286) == '\x01') {
                *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
              }
              else {
                *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
              }
            }
          }
          else if (uVar1 < 3) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
            if (*(char *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1282) == '\x01') {
              *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            }
            else {
              *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
            }
          }
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        }
      }
      if (((uVar1 == uVar8) || (uVar1 == 0)) || (uVar11 != 0xe)) {
        FUN_0897c534(param_1,uVar10,uVar10);
        uVar5 = *(undefined4 *)(iVar9 + 0xb8c);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      else {
        FUN_0897c534(param_1,uVar10,0x14);
        uVar5 = *(undefined4 *)(iVar9 + 0xb8c);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      *(undefined4 *)(iVar2 + 0x68) = uVar5;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),iVar13,3);
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
      iVar9 = iVar9 + 4;
      iVar13 = iVar13 + 0x28;
    } while ((int)uVar11 < 0x14);
  }
  else {
    iVar13 = 0;
    iVar9 = 0;
    iVar12 = param_1 + 0x74;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar12,3);
      iVar13 = iVar13 + 1;
      iVar9 = iVar9 + 4;
      iVar12 = iVar12 + 0x28;
    } while (iVar13 < 6);
    iVar13 = 0x1b;
    iVar9 = 0x6c;
    iVar12 = param_1 + 0x4ac;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar12,3);
      iVar13 = iVar13 + 1;
      iVar9 = iVar9 + 4;
      iVar12 = iVar12 + 0x28;
    } while (iVar13 < 0x21);
    iVar13 = 7;
    iVar9 = 0x1c;
    iVar12 = param_1 + 0x18c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar12,3);
      iVar13 = iVar13 + 1;
      iVar9 = iVar9 + 4;
      iVar12 = iVar12 + 0x28;
    } while (iVar13 < 0xd);
    iVar12 = 0xe;
    iVar9 = 0x38;
    iVar13 = param_1 + 0x2a4;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar13,3);
      iVar12 = iVar12 + 1;
      iVar9 = iVar9 + 4;
      iVar13 = iVar13 + 0x28;
    } while (iVar12 < 0x14);
  }
  return;
}


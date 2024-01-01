#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890ee38(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (7 < uVar3) {
    return;
  }
  iVar4 = (int)(uVar3 * 4) >> 2;
  switch(uVar3) {
  case 0:
    iVar4 = FUN_0890ad3c();
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 1:
    uVar2 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar2);
    piVar5 = *(int **)(param_1 + 0x1c);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    goto LAB_0890eedc;
  case 2:
    piVar5 = *(int **)(param_1 + 0x1c);
LAB_0890eedc:
    if (*(float *)(*piVar5 + 0xbc) == 1.0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      do {
        pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc);
        *pfVar7 = *pfVar7 + 0.5;
        iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (1.0 < *(float *)(iVar8 + 0xbc)) {
          *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < 0x10);
      fVar10 = *(float *)(param_1 + 0x78) + 0.5;
      *(float *)(param_1 + 0x78) = fVar10;
      if (1.0 < fVar10) {
        *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      }
    }
    break;
  case 3:
    iVar4 = *(int *)(param_1 + 0x7c);
    bVar1 = true;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar6 = FUN_0881b22c();
      if (iVar6 != 0) {
        bVar1 = false;
        uVar2 = _DONE_GetPtr_DAT_08AB0300();
        iVar6 = FUN_0881b654(uVar2);
        if (iVar6 != 0) {
          bVar1 = true;
        }
      }
      iVar6 = FUN_0880d354();
      if ((iVar6 != 0) && (iVar6 = _DONE_NotZero_DAT_08AAC9E0(), iVar6 != 0)) {
        uVar2 = _DONE_Get_DAT_08AAC9E0();
        iVar6 = FUN_0880d7e0(uVar2,0x80);
        if (iVar6 != 0) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          return;
        }
      }
    }
    if (bVar1) {
      iVar6 = *(int *)(param_1 + 0x20);
      if ((*(byte *)(iVar6 + 5) & 0x40) != 0) {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1 + 0x2c);
        }
        else {
          uVar2 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar2,0,0,0);
          iVar6 = *(int *)(param_1 + 0x2c);
        }
        *(int *)(param_1 + 0x2c) = iVar6 + 1;
        goto LAB_0890f0dc;
      }
      if (*(int *)(param_1 + 0x84) == 1) {
        iVar6 = *(int *)(param_1 + 0x7c);
        goto LAB_0890f0e0;
      }
      if ((*(byte *)(iVar6 + 5) & 0x20) == 0) {
        if (((int)*(char *)(iVar6 + 8) & 0x80U) != 0) {
          iVar6 = *(int *)(param_1 + 0x7c) + -1;
          *(int *)(param_1 + 0x7c) = iVar6;
          if (iVar6 < 0) {
            *(undefined4 *)(param_1 + 0x7c) = 1;
          }
          goto LAB_0890f0dc;
        }
        if ((*(byte *)(iVar6 + 8) & 0x20) == 0) {
          iVar6 = *(int *)(param_1 + 0x7c);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x7c) + 1;
          *(int *)(param_1 + 0x7c) = iVar6;
          if (1 < iVar6) {
            *(undefined4 *)(param_1 + 0x7c) = 0;
            goto LAB_0890f0dc;
          }
          iVar6 = *(int *)(param_1 + 0x7c);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 1;
LAB_0890f0dc:
        iVar6 = *(int *)(param_1 + 0x7c);
      }
LAB_0890f0e0:
      if (iVar4 != iVar6) {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1 + 0x1c);
        }
        else {
          uVar2 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar2,1,0,0);
          iVar6 = *(int *)(param_1 + 0x1c);
        }
        *(undefined4 *)(param_1 + 0x80) = 0;
        iVar4 = iVar6 + iVar4 * 4;
        FUN_0890e874(param_1,*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x2c),
                     *(undefined4 *)(iVar6 + 0x38),1,0xffffffff);
        iVar4 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) * 4;
        FUN_0890e874(param_1,*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x2c),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38),0);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = 0xbf800000;
        goto LAB_0890f180;
      }
      iVar4 = *(int *)(param_1 + 0x1c);
    }
    else {
LAB_0890f180:
      iVar4 = *(int *)(param_1 + 0x1c);
    }
    if (*(float *)(*(int *)(iVar4 + 0x3c) + 0xbc) < 0.0) {
      if (0.29 < *(float *)(*(int *)(iVar4 + 0x38) + 0xc0)) {
        FUN_089f3dd4();
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = 0x3f800000;
      }
    }
    else {
      fVar10 = (float)FUN_089f4944(*(int *)(iVar4 + 0x3c));
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c);
      fVar9 = (float)FUN_089f494c(uVar2);
      FUN_089f4924(fVar10 * 1.025,fVar9 * 1.025,uVar2);
      pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc);
      *pfVar7 = *pfVar7 - 0.15;
    }
    break;
  case 4:
    FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) * 4 + 0x20),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = 0x3f000000;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 5:
    fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c);
    fVar9 = (float)FUN_089f494c(uVar2);
    FUN_089f4924(fVar10 * 1.05,fVar9 * 1.05,uVar2);
    pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc);
    *pfVar7 = *pfVar7 - 0.05;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
    if (*(float *)(iVar4 + 0xbc) < 0.0) {
      *(undefined4 *)(iVar4 + 0xbc) = 0;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 6:
    if (*(float *)(**(int **)(param_1 + 0x1c) + 0xbc) == 0.0) {
      if (*(char *)(param_1 + 0x91) != '\0') {
        iVar4 = FUN_089edb80();
        *(undefined4 *)(iVar4 + 0x30) = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0;
        *(undefined4 *)(iVar4 + 0x38) = 0;
        *(undefined4 *)(iVar4 + 0x3c) = 0x3f000000;
        iVar4 = FUN_089edb80();
        *(undefined4 *)(iVar4 + 0x40) = 0;
        *(undefined4 *)(iVar4 + 0x44) = 0;
        *(undefined4 *)(iVar4 + 0x48) = 0;
        *(undefined4 *)(iVar4 + 0x4c) = 0;
        uVar2 = FUN_089edb80();
        FUN_089edf24(uVar2,3);
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      *(int *)(param_1 + 0x2c) = iVar4 + 1;
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      do {
        pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc);
        *pfVar7 = *pfVar7 - 0.5;
        iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (*(float *)(iVar8 + 0xbc) < 0.0) {
          *(undefined4 *)(iVar8 + 0xbc) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < 0x10);
      fVar10 = *(float *)(param_1 + 0x78) - 0.5;
      *(float *)(param_1 + 0x78) = fVar10;
      if (fVar10 < 0.0) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
    }
    break;
  case 7:
    uVar2 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar2);
    if (iVar4 != 0) {
      DAT_08ac1088 = *(int *)(param_1 + 0x7c) + 1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
  }
  return;
}


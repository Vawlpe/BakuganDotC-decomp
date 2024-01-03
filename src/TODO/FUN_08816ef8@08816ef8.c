#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08816ef8(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar4 = *param_1;
  bVar1 = false;
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      fVar6 = (float)param_1[2];
      if (fVar6 < 1.0) {
        iVar4 = FUN_089ceba4(DAT_08ac5934);
        fVar6 = fVar6 + 6.0 / (float)iVar4;
        param_1[2] = (int)fVar6;
      }
      if (1.0 <= fVar6) {
        param_1[2] = 0x3f800000;
        *param_1 = *param_1 + 1;
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar2 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar2,1,0,0);
        }
        *(undefined *)((int)param_1 + 0x1d) = 1;
      }
      bVar1 = true;
      goto LAB_08817388;
    }
  }
  else {
    if (iVar4 < 2) {
      iVar5 = param_1[4];
      if (*(char *)(param_1 + 7) == '\0') {
        if (iVar5 < 1) {
          if (-1 < iVar5) {
            *param_1 = iVar4 + 1;
          }
        }
        else {
          iVar5 = iVar5 + -1;
          param_1[4] = iVar5;
        }
      }
      else {
        *param_1 = iVar4 + 1;
      }
      if (iVar5 == -1) {
        if (param_1[0xd] == 0) {
          param_1[0xd] = WeirdBuff;
        }
        if (param_1[0x10] == 0) {
          iVar4 = param_1[0xd];
          if ((*(byte *)(iVar4 + 5) & 0x20) == 0) {
            if ((*(byte *)(iVar4 + 5) & 0x40) == 0) {
              iVar5 = 0;
              if (((int)*(char *)(iVar4 + 4) & 0x80U) == 0) {
                if ((*(byte *)(iVar4 + 4) & 0x20) != 0) {
                  iVar5 = 1;
                }
              }
              else {
                iVar5 = -1;
              }
              if (iVar5 == -1) {
                iVar4 = param_1[8];
                param_1[8] = iVar4 + -1;
                if (iVar4 + -1 < 0) {
                  param_1[8] = 0;
                  goto LAB_088172b0;
                }
                param_1[9] = 0x3f800000;
                iVar4 = FUN_089ceba4(DAT_08ac5934);
                param_1[10] = (int)-(3.0 / (float)iVar4);
                iVar4 = DONE_NotZero_DAT_08AC5874();
                if (iVar4 == 0) {
                  iVar4 = param_1[3];
                }
                else {
                  uVar2 = DONE_Get_DAT_08AC5874();
                  FUN_089c6350(uVar2,1,0,0);
                  iVar4 = param_1[3];
                }
              }
              else if (iVar5 == 1) {
                iVar4 = param_1[8];
                param_1[8] = iVar4 + 1;
                if (1 < iVar4 + 1) {
                  param_1[8] = 1;
                  goto LAB_088172b0;
                }
                param_1[9] = 0x3f800000;
                iVar4 = FUN_089ceba4(DAT_08ac5934);
                param_1[10] = (int)-(3.0 / (float)iVar4);
                iVar4 = DONE_NotZero_DAT_08AC5874();
                if (iVar4 == 0) {
                  iVar4 = param_1[3];
                }
                else {
                  uVar2 = DONE_Get_DAT_08AC5874();
                  FUN_089c6350(uVar2,1,0,0);
                  iVar4 = param_1[3];
                }
              }
              else {
                iVar4 = param_1[3];
              }
              goto LAB_088172b4;
            }
            iVar4 = DONE_NotZero_DAT_08AC5874();
            if (iVar4 != 0) {
              uVar2 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar2,0,0,0);
            }
            iVar4 = FUN_089ceba4(DAT_08ac5934);
            param_1[4] = iVar4 / 2;
            *(undefined *)(param_1 + 0x11) = 1;
          }
          else {
            iVar4 = DONE_NotZero_DAT_08AC5874();
            if (iVar4 == 0) {
              iVar4 = *param_1;
            }
            else {
              uVar2 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar2,2,0,0);
              iVar4 = *param_1;
            }
            param_1[8] = -1;
            *param_1 = iVar4 + 1;
            *(undefined *)(param_1 + 0x11) = 1;
          }
LAB_088172b0:
          iVar4 = param_1[3];
        }
        else if (param_1[0x10] == 1) {
          if ((*(byte *)(param_1[0xd] + 5) & 0x40) != 0) {
            iVar4 = DONE_NotZero_DAT_08AC5874();
            if (iVar4 != 0) {
              uVar2 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar2,0,0,0);
            }
            iVar4 = FUN_089ceba4(DAT_08ac5934);
            param_1[4] = iVar4 / 2;
            *(undefined *)(param_1 + 0x11) = 1;
            goto LAB_088172b0;
          }
          iVar4 = param_1[3];
        }
        else {
          iVar4 = param_1[3];
        }
      }
      else {
        iVar4 = param_1[3];
      }
LAB_088172b4:
      if (iVar4 != 0) {
        FUN_089eb14c(param_1[0xb],param_1[5],param_1[6] + -0xc,iVar4,1,1);
      }
      bVar1 = true;
      goto LAB_08817388;
    }
    if (iVar4 < 3) {
      fVar6 = (float)param_1[2];
      if (0.0 < fVar6) {
        iVar4 = FUN_089ceba4(DAT_08ac5934);
        fVar6 = fVar6 - 6.0 / (float)iVar4;
        param_1[2] = (int)fVar6;
      }
      if (fVar6 <= 0.0) {
        param_1[2] = 0;
        *param_1 = *param_1 + 1;
        FUN_089ed6a0(param_1[0xc],0);
        iVar4 = 0;
        iVar5 = 0;
        do {
          iVar4 = iVar4 + 1;
          *(uint *)(*(int *)(param_1[0xf] + iVar5) + 0xd0) =
               *(uint *)(*(int *)(param_1[0xf] + iVar5) + 0xd0) & 0xfffffffe;
          iVar5 = iVar5 + 4;
        } while (iVar4 < 0xb);
      }
      goto LAB_08817388;
    }
  }
  *(undefined *)(param_1 + 7) = 0;
LAB_08817388:
  if (bVar1) {
    fVar6 = 0.0;
    if (-1 < param_1[8]) {
      fVar6 = (float)param_1[10];
      fVar7 = (float)param_1[9] + fVar6;
      param_1[9] = (int)fVar7;
      if (0 < param_1[4]) {
        fVar7 = fVar7 + fVar6 * 12.0;
        param_1[9] = (int)fVar7;
      }
      if (1.0 < fVar7) {
        param_1[9] = 0x3f800000;
        param_1[10] = (int)-fVar6;
        fVar7 = 1.0;
      }
      else if (fVar7 < 0.0) {
        param_1[9] = 0;
        param_1[10] = (int)-fVar6;
        fVar7 = 0.0;
      }
      fVar6 = fVar7 * 0.5 + 0.5;
    }
    if (param_1[0x10] == 0) {
      uVar2 = FUN_089f7720("co_bo_ita_1_01");
      uVar3 = FUN_089f7720("co_bo_ita_2_01");
      *(uint *)(*(int *)(param_1[0xf] + 0x10) + 0xd0) =
           *(uint *)(*(int *)(param_1[0xf] + 0x10) + 0xd0) & 0xfffffffe;
      iVar4 = *(int *)(param_1[0xf] + 0x10);
      *(undefined4 *)(iVar4 + 0xc0) = in_V72;
      *(undefined4 *)(iVar4 + 0xc4) = in_V76;
      *(undefined4 *)(iVar4 + 200) = in_V7A;
      *(undefined4 *)(iVar4 + 0xcc) = in_V7E;
      *(uint *)(*(int *)(param_1[0xf] + 0x1c) + 0xd0) =
           *(uint *)(*(int *)(param_1[0xf] + 0x1c) + 0xd0) & 0xfffffffe;
      iVar4 = *(int *)(param_1[0xf] + 0x1c);
      *(undefined4 *)(iVar4 + 0xc0) = in_V72;
      *(undefined4 *)(iVar4 + 0xc4) = in_V76;
      *(undefined4 *)(iVar4 + 200) = in_V7A;
      *(undefined4 *)(iVar4 + 0xcc) = in_V7E;
      iVar4 = *(int *)(param_1[0xf] + 0x10);
      *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      iVar4 = *(int *)(param_1[0xf] + 0xc);
      *(undefined4 *)(iVar4 + 0xc0) = in_V72;
      *(undefined4 *)(iVar4 + 0xc4) = in_V76;
      *(undefined4 *)(iVar4 + 200) = in_V7A;
      *(undefined4 *)(iVar4 + 0xcc) = in_V7E;
      iVar4 = *(int *)(param_1[0xf] + 0xc);
      *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1[0xf] + 0xc) + 0xd4) = uVar3;
      iVar4 = *(int *)(param_1[0xf] + 0x1c);
      *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      iVar4 = *(int *)(param_1[0xf] + 0x18);
      *(undefined4 *)(iVar4 + 0xc0) = in_V72;
      *(undefined4 *)(iVar4 + 0xc4) = in_V76;
      *(undefined4 *)(iVar4 + 200) = in_V7A;
      *(undefined4 *)(iVar4 + 0xcc) = in_V7E;
      iVar4 = *(int *)(param_1[0xf] + 0x18);
      *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1[0xf] + 0x18) + 0xd4) = uVar3;
      iVar4 = param_1[8];
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          *(undefined4 *)(*(int *)(param_1[0xf] + 0xc) + 0xd4) = uVar2;
          iVar4 = *(int *)(param_1[0xf] + 0xc);
          *(float *)(iVar4 + 0xb0) = fVar6;
          *(float *)(iVar4 + 0xb4) = fVar6;
          *(float *)(iVar4 + 0xb8) = fVar6;
          *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
          *(uint *)(*(int *)(param_1[0xf] + 0x10) + 0xd0) =
               *(uint *)(*(int *)(param_1[0xf] + 0x10) + 0xd0) | 1;
          fVar6 = fVar6 * 0.5;
          *(uint *)(*(int *)(param_1[0xf] + 0x1c) + 0xd0) =
               *(uint *)(*(int *)(param_1[0xf] + 0x1c) + 0xd0) & 0xfffffffe;
          iVar4 = *(int *)(param_1[0xf] + 0xc);
          *(float *)(iVar4 + 0xc0) = fVar6;
          *(float *)(iVar4 + 0xc4) = fVar6;
          *(undefined4 *)(iVar4 + 200) = 0;
          *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
          iVar4 = *(int *)(param_1[0xf] + 0x10);
          *(float *)(iVar4 + 0xc0) = fVar6;
          *(float *)(iVar4 + 0xc4) = fVar6;
          *(undefined4 *)(iVar4 + 200) = 0;
          *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
        }
      }
      else if (iVar4 < 2) {
        *(undefined4 *)(*(int *)(param_1[0xf] + 0x18) + 0xd4) = uVar2;
        iVar4 = *(int *)(param_1[0xf] + 0x18);
        *(float *)(iVar4 + 0xb0) = fVar6;
        *(float *)(iVar4 + 0xb4) = fVar6;
        *(float *)(iVar4 + 0xb8) = fVar6;
        *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
        *(uint *)(*(int *)(param_1[0xf] + 0x10) + 0xd0) =
             *(uint *)(*(int *)(param_1[0xf] + 0x10) + 0xd0) & 0xfffffffe;
        fVar6 = fVar6 * 0.5;
        *(uint *)(*(int *)(param_1[0xf] + 0x1c) + 0xd0) =
             *(uint *)(*(int *)(param_1[0xf] + 0x1c) + 0xd0) | 1;
        iVar4 = *(int *)(param_1[0xf] + 0x18);
        *(float *)(iVar4 + 0xc0) = fVar6;
        *(float *)(iVar4 + 0xc4) = fVar6;
        *(undefined4 *)(iVar4 + 200) = 0;
        *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
        iVar4 = *(int *)(param_1[0xf] + 0x1c);
        *(float *)(iVar4 + 0xc0) = fVar6;
        *(float *)(iVar4 + 0xc4) = fVar6;
        *(undefined4 *)(iVar4 + 200) = 0;
        *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
      }
    }
    else if (param_1[0x10] == 1) {
      iVar4 = *(int *)(param_1[0xf] + 0x20);
      *(float *)(iVar4 + 0xb0) = fVar6;
      *(float *)(iVar4 + 0xb4) = fVar6;
      *(float *)(iVar4 + 0xb8) = fVar6;
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      iVar4 = *(int *)(param_1[0xf] + 0x28);
      *(undefined4 *)(iVar4 + 200) = 0;
      *(float *)(iVar4 + 0xc0) = fVar6 * 0.5;
      *(float *)(iVar4 + 0xc4) = fVar6 * 0.5;
      *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
    }
  }
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar4 = iVar4 + 1;
    *(int *)(*(int *)(param_1[0xf] + iVar5) + 0xbc) = param_1[2];
    iVar5 = iVar5 + 4;
  } while (iVar4 < 0xb);
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088068f4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 in_V7C;
  undefined4 local_b0 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [4];
  undefined4 local_78;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  local_b0[0] = 0;
  local_b0[1] = 1;
  local_b0[2] = 1;
  local_b0[3] = 2;
  local_a0 = 2;
  local_9c = 3;
  local_98 = 3;
  local_94 = 3;
  local_90 = 4;
  local_8c = 4;
  local_88[0] = 0;
  local_88[1] = 1;
  local_88[2] = 3;
  local_88[3] = 5;
  local_78 = 8;
  if (((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) || (*(int *)(param_1 + 200) != -1)) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 9) & 0x20) == 0) {
      iVar6 = *(int *)(param_1 + 0x20);
    }
    else {
      if (*(int *)(param_1 + 200) != -1) {
        *(undefined *)(param_1 + 0x88) = 0;
        goto LAB_08806a00;
      }
      iVar6 = *(int *)(param_1 + 0x20);
    }
    if ((*(byte *)(iVar6 + 9) & 0x40) == 0) {
      iVar6 = *(int *)(param_1 + 0x20);
LAB_08806aa8:
      if (((*(byte *)(iVar6 + 5) & 0x40) == 0) || (*(int *)(param_1 + 0x80) < 4)) {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) == 0) {
          if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) == 0) {
            if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) == 0) {
              if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) == 0) {
                iVar6 = *(int *)(param_1 + 200);
              }
              else {
                if (*(int *)(param_1 + 0x80) == 4) {
                  *(undefined4 *)(param_1 + 0x7c) = local_88[*(int *)(param_1 + 0x7c)];
                  iVar6 = *(int *)(param_1 + 0x80);
                }
                else {
                  iVar6 = *(int *)(param_1 + 0x80);
                }
                iVar6 = (iVar6 + 5) % 6;
                *(int *)(param_1 + 0x80) = iVar6;
                if (iVar6 == 4) {
                  *(undefined4 *)(param_1 + 0x7c) = local_b0[*(int *)(param_1 + 0x7c)];
                }
                iVar6 = _DONE_NotZero_DAT_08AC5874();
                if (iVar6 != 0) {
                  uVar7 = _DONE_Get_DAT_08AC5874();
                  FUN_089c6350(uVar7,1,0,0);
                  goto LAB_088072a4;
                }
                iVar6 = *(int *)(param_1 + 200);
              }
            }
            else {
              if (*(int *)(param_1 + 0x80) == 4) {
                *(undefined4 *)(param_1 + 0x7c) = local_88[*(int *)(param_1 + 0x7c)];
                iVar6 = *(int *)(param_1 + 0x80);
              }
              else {
                iVar6 = *(int *)(param_1 + 0x80);
              }
              iVar6 = (iVar6 + 1) % 6;
              *(int *)(param_1 + 0x80) = iVar6;
              if (iVar6 == 4) {
                *(undefined4 *)(param_1 + 0x7c) = local_b0[*(int *)(param_1 + 0x7c)];
              }
              iVar6 = _DONE_NotZero_DAT_08AC5874();
              if (iVar6 == 0) {
                iVar6 = *(int *)(param_1 + 200);
              }
              else {
                uVar7 = _DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar7,1,0,0);
                iVar6 = *(int *)(param_1 + 200);
              }
            }
          }
          else {
            if (*(int *)(param_1 + 0x80) < 4) {
              *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) + 9) % 10;
            }
            else if (*(int *)(param_1 + 0x80) == 4) {
              *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) + 4) % 5;
            }
            iVar6 = _DONE_NotZero_DAT_08AC5874();
            if (iVar6 == 0) {
              iVar6 = *(int *)(param_1 + 200);
            }
            else {
              uVar7 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar7,1,0,0);
              iVar6 = *(int *)(param_1 + 200);
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x80) < 4) {
            *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) + 1) % 10;
          }
          else if (*(int *)(param_1 + 0x80) == 4) {
            *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) + 1) % 5;
          }
          iVar6 = _DONE_NotZero_DAT_08AC5874();
          if (iVar6 == 0) {
            iVar6 = *(int *)(param_1 + 200);
          }
          else {
            uVar7 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar7,1,0,0);
            iVar6 = *(int *)(param_1 + 200);
          }
        }
        goto LAB_088072a8;
      }
      iVar6 = *(int *)(param_1 + 0x80);
    }
    else {
      if (3 < *(int *)(param_1 + 0x80)) {
        if (*(int *)(param_1 + 0x80) == 4) {
          if (2 < *(int *)(param_1 + 0x7c)) {
            iVar6 = *(int *)(param_1 + 0x80);
            goto LAB_08806acc;
          }
          iVar6 = *(int *)(param_1 + 0x20);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x20);
        }
        goto LAB_08806aa8;
      }
      iVar6 = *(int *)(param_1 + 0x80);
    }
LAB_08806acc:
    if (iVar6 == 4) {
      uVar8 = *(uint *)(param_1 + 0x7c);
      if (4 < uVar8) goto LAB_088072a4;
      if (uVar8 == 1) {
        FUN_08805e1c(param_1);
        FUN_08805a2c(param_1,0x11);
        iVar6 = *(int *)(param_1 + 200);
      }
      else if (uVar8 == 2) {
        *(bool *)(param_1 + 0x89) = *(char *)(param_1 + 0x89) == '\0';
        FUN_08805ab4(param_1);
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar7 = _DONE_Get_DAT_08AC5874(param_1);
          FUN_089c6350(uVar7,6,0,0);
        }
        FUN_08805a2c(param_1,0x10);
        iVar6 = *(int *)(param_1 + 200);
      }
      else if (uVar8 == 3) {
        iVar6 = strcmp(*(undefined4 *)(DAT_08aac830 + 0x9c),&DAT_08a339a0);
        if ((iVar6 == 0) && (*(int *)(param_1 + 0x78) == 0)) {
          iVar6 = _DONE_NotZero_DAT_08AC5874();
          if (iVar6 != 0) {
            uVar7 = _DONE_Get_DAT_08AC5874(param_1);
            FUN_089c6350(uVar7,3,0,0);
          }
        }
        else {
          iVar6 = _DONE_NotZero_DAT_08AC5874();
          if (iVar6 == 0) {
            iVar6 = *(int *)(param_1 + 0x78);
          }
          else {
            uVar7 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar7,0,0,0);
            iVar6 = *(int *)(param_1 + 0x78);
          }
          *(undefined4 *)(param_1 + iVar6 * 4 + 200) = 0x27;
          if (iVar6 + 1 < 0xc) {
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
          }
          FUN_088058a4(param_1);
          FUN_08805a2c(param_1,10);
        }
        FUN_08805a2c(param_1,0x10);
        iVar6 = *(int *)(param_1 + 200);
      }
      else if (uVar8 == 4) {
        if (*(int *)(param_1 + 200) == -1) {
          iVar6 = _DONE_NotZero_DAT_08AC5874();
          if (iVar6 != 0) {
            uVar7 = _DONE_Get_DAT_08AC5874(param_1);
            FUN_089c6350(uVar7,8,0,0);
          }
        }
        else {
          iVar6 = _DONE_NotZero_DAT_08AC5874();
          if (iVar6 == 0) {
            iVar6 = *(int *)(param_1 + 0x78);
          }
          else {
            uVar7 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar7,2,0,0);
            iVar6 = *(int *)(param_1 + 0x78);
          }
          if (iVar6 < 1) {
            iVar6 = *(int *)(param_1 + 0x78);
          }
          else {
            if (*(int *)(param_1 + 0x78) == 0xb) {
              if (*(int *)(param_1 + *(int *)(param_1 + 0x78) * 4 + 200) != -1) {
                iVar6 = *(int *)(param_1 + 0x78);
                goto LAB_08806d5c;
              }
              iVar6 = *(int *)(param_1 + 0x78);
            }
            else {
              iVar6 = *(int *)(param_1 + 0x78);
            }
            *(int *)(param_1 + 0x78) = iVar6 + -1;
            iVar6 = *(int *)(param_1 + 0x78);
          }
LAB_08806d5c:
          *(undefined4 *)(param_1 + iVar6 * 4 + 200) = 0xffffffff;
          if (iVar6 < 0xb) {
            iVar9 = param_1 + iVar6 * 4;
            do {
              iVar6 = iVar6 + 1;
              *(undefined4 *)(iVar9 + 200) = *(undefined4 *)(iVar9 + 0xcc);
              iVar9 = iVar9 + 4;
            } while (iVar6 < 0xb);
          }
          *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
          FUN_088058a4(param_1);
        }
        FUN_08805a2c(param_1,0x10);
        iVar6 = *(int *)(param_1 + 200);
      }
      else {
        FUN_08805d70(param_1);
        FUN_08805a2c(param_1,0x11);
        iVar6 = *(int *)(param_1 + 200);
      }
    }
    else if (*(int *)(param_1 + 0x80) == 5) {
      if (*(int *)(param_1 + 200) != -1) {
        *(undefined *)(param_1 + 0x88) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x28) = 4;
        }
        else {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,0,0,0);
          *(undefined4 *)(param_1 + 0x28) = 4;
        }
        FUN_08805a2c(param_1,0x1a);
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
        *(undefined4 *)(iVar6 + 0xc0) = 0x3e4ccccd;
        *(undefined4 *)(iVar6 + 0xc4) = 0x3e4ccccd;
        *(undefined4 *)(iVar6 + 200) = 0x3e4ccccd;
        *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
        return;
      }
      iVar6 = _DONE_NotZero_DAT_08AC5874();
      if (iVar6 == 0) goto LAB_088072a4;
      uVar7 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar7,8,0,0);
      iVar6 = *(int *)(param_1 + 200);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x84);
      if (*(char *)(param_1 + 0x89) != '\0') {
        iVar6 = 0xa0;
      }
      iVar9 = iVar6 + *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80) * 10;
      iVar6 = strcmp(*(undefined4 *)(DAT_08aac830 + iVar9 * 4),&DAT_08a339a0);
      if ((iVar6 == 0) && (*(int *)(param_1 + 0x78) == 0)) {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1 + 200);
        }
        else {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,3,0,0);
          iVar6 = *(int *)(param_1 + 200);
        }
      }
      else {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1 + 0x78);
        }
        else {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,0,0,0);
          iVar6 = *(int *)(param_1 + 0x78);
        }
        *(int *)(param_1 + iVar6 * 4 + 200) = iVar9;
        if (iVar6 + 1 < 0xc) {
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        }
        FUN_088058a4(param_1);
        FUN_08805a2c(param_1,10);
        iVar6 = *(int *)(param_1 + 200);
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0x88) = 0;
LAB_08806a00:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 4;
    iVar6 = _DONE_NotZero_DAT_08AC5874();
    if (iVar6 == 0) {
LAB_088072a4:
      iVar6 = *(int *)(param_1 + 200);
    }
    else {
      uVar7 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar7,2,0,0);
      iVar6 = *(int *)(param_1 + 200);
    }
  }
LAB_088072a8:
  uVar7 = 0;
  if (iVar6 == -1) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0xbc) = 0x3f000000;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    *(undefined4 *)(iVar6 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar6 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar6 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar6 + 0xbc) = 0x3f800000;
    uVar2 = DAT_08aac81c;
    uVar1 = DAT_08aac818;
    uVar14 = DAT_08aac814;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
    *(undefined4 *)(iVar6 + 0xb0) = DAT_08aac810;
    *(undefined4 *)(iVar6 + 0xb4) = uVar14;
    *(undefined4 *)(iVar6 + 0xb8) = uVar1;
    *(undefined4 *)(iVar6 + 0xbc) = uVar2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0xbc) = 0x3f000000;
  }
  else {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0xbc) = 0x3f800000;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    *(undefined4 *)(iVar6 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0xbc) = 0x3f800000;
    uVar2 = DAT_08aac7ec;
    uVar1 = DAT_08aac7e8;
    uVar14 = DAT_08aac7e4;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
    *(undefined4 *)(iVar6 + 0xb0) = DAT_08aac7e0;
    *(undefined4 *)(iVar6 + 0xb4) = uVar14;
    *(undefined4 *)(iVar6 + 0xb8) = uVar1;
    *(undefined4 *)(iVar6 + 0xbc) = uVar2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0xbc) = 0x3f800000;
  }
  uVar5 = DAT_08aac81c;
  uVar4 = DAT_08aac818;
  uVar3 = DAT_08aac814;
  uVar2 = DAT_08aac7ec;
  uVar1 = DAT_08aac7e8;
  uVar14 = DAT_08aac7e4;
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
    *(undefined4 *)(iVar6 + 0xb0) = DAT_08aac810;
    *(undefined4 *)(iVar6 + 0xb4) = uVar3;
    *(undefined4 *)(iVar6 + 0xb8) = uVar4;
    *(undefined4 *)(iVar6 + 0xbc) = uVar5;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0xbc) = 0x3f000000;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
    *(undefined4 *)(iVar6 + 0xb0) = DAT_08aac7e0;
    *(undefined4 *)(iVar6 + 0xb4) = uVar14;
    *(undefined4 *)(iVar6 + 0xb8) = uVar1;
    *(undefined4 *)(iVar6 + 0xbc) = uVar2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0xbc) = 0x3f800000;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0xd8) = 1;
  if (*(int *)(param_1 + 0x80) < 4) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x60) =
         (float)*(int *)(param_1 + 0x7c) * 28.0 + 139.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 100) =
         (float)*(int *)(param_1 + 0x80) * 26.0 + 63.5;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x60) + 21.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 100) + 20.0;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(param_1 + 0x84);
    if (*(char *)(param_1 + 0x89) != '\0') {
      iVar6 = 0xa0;
    }
    iVar6 = strcmp(*(undefined4 *)
                    (DAT_08aac830 +
                    (iVar6 + *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80) * 10) * 4),
                   &DAT_08a339a0);
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_1 + 0x78);
      goto LAB_088078a0;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar6 = *(int *)(param_1 + 0x78);
      goto LAB_088078a0;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  }
  else if (*(int *)(param_1 + 0x80) == 4) {
    if (*(int *)(param_1 + 0x7c) < 2) {
      local_44 = 0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) * 4 + 0x38) +
                     0x60) - 1.0;
      fVar11 = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) * 4 + 0x38) +
                         0x60);
      fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0x60) = (fVar11 - 2.0) + fVar10 * 0.5;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
LAB_088077a0:
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    else {
      local_44 = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) + 0x60) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) * 4 + 0x50) + 0x60);
      fVar11 = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) * 4 + 0x50) +
                         0x60);
      fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40));
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0x60) = fVar11 + fVar10 * 0.5 + 0.5;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      if (*(int *)(param_1 + 200) == -1) {
        if (*(int *)(param_1 + 0x7c) != 3) {
          iVar6 = *(int *)(param_1 + 0x78);
          goto LAB_08807778;
        }
        iVar6 = *(int *)(param_1 + 0x1c);
LAB_08807790:
        *(uint *)(*(int *)(iVar6 + 0x4c) + 0xd0) =
             *(uint *)(*(int *)(iVar6 + 0x4c) + 0xd0) & 0xfffffffe;
        goto LAB_088077a0;
      }
      iVar6 = *(int *)(param_1 + 0x78);
LAB_08807778:
      if (iVar6 == 0) {
        if (*(int *)(param_1 + 0x7c) == 4) {
          iVar6 = *(int *)(param_1 + 0x1c);
          goto LAB_08807790;
        }
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1c);
      }
    }
    *(uint *)(*(int *)(iVar6 + 0x28) + 0xd0) = *(uint *)(*(int *)(iVar6 + 0x28) + 0xd0) & 0xfffffffe
    ;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    uVar7 = local_44;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 5) {
      iVar6 = *(int *)(param_1 + 0x78);
      goto LAB_088078a0;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
    if (*(int *)(param_1 + 200) == -1) {
      iVar6 = *(int *)(param_1 + 0x78);
      goto LAB_088078a0;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0xd8) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x78);
LAB_088078a0:
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0x60) = (float)iVar6 * 21.0 + 152.5;
  FUN_088054b4(param_1);
  uVar14 = vmul_s((float)*(int *)(param_1 + 0xb8) * 0.005555556 * 3.141593,in_V7C);
  local_54 = (float)vcos_s(uVar14);
  fVar10 = (1.0 - local_54) * 0.5 * 0.5;
  fVar11 = (float)(*(int *)(param_1 + 0xb8) + 0x3c) * 0.005555556;
  uVar14 = vmul_s(fVar11 * 3.141593,in_V7C);
  local_50 = (float)vcos_s(uVar14);
  fVar12 = (1.0 - local_50) * 0.5 * 0.8;
  uVar14 = vmul_s(fVar11 * 3.141593,in_V7C);
  local_4c = (float)vcos_s(uVar14);
  fVar11 = (1.0 - local_4c) * 0.5 * 0.1;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
  *(float *)(iVar6 + 0xc0) = fVar10;
  *(float *)(iVar6 + 0xc4) = fVar10;
  *(float *)(iVar6 + 200) = fVar10;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
  *(float *)(iVar6 + 0xc0) = fVar12;
  *(float *)(iVar6 + 0xc4) = fVar12;
  *(float *)(iVar6 + 200) = fVar12;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
  *(float *)(iVar6 + 0xc0) = fVar12;
  *(float *)(iVar6 + 0xc4) = fVar12;
  *(float *)(iVar6 + 200) = fVar12;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
  *(float *)(iVar6 + 0xc0) = fVar12;
  *(float *)(iVar6 + 0xc4) = fVar12;
  *(float *)(iVar6 + 200) = fVar12;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
  *(float *)(iVar6 + 0xc0) = fVar11;
  *(float *)(iVar6 + 0xc4) = fVar11;
  *(float *)(iVar6 + 200) = fVar11;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
  *(float *)(iVar6 + 0xc0) = fVar11;
  *(float *)(iVar6 + 0xc4) = fVar11;
  *(float *)(iVar6 + 200) = fVar11;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
  *(float *)(iVar6 + 0xc0) = fVar11;
  *(float *)(iVar6 + 0xc4) = fVar11;
  *(float *)(iVar6 + 200) = fVar11;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  uVar14 = vmul_s((float)(*(int *)(param_1 + 0xb8) + 0x3c) * 0.005555556 * 3.141593,in_V7C);
  local_48 = (float)vcos_s(uVar14);
  fVar13 = (1.0 - local_48) * 0.5 * 0.05 + 1.0;
  fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28));
  uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28);
  fVar11 = (float)FUN_089f494c(uVar14);
  FUN_089f4534(fVar10 * fVar13,fVar11 * fVar13,uVar14);
  fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40));
  uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40);
  fVar11 = (float)FUN_089f494c(uVar14);
  FUN_089f4534(fVar10 * fVar13,fVar11 * fVar13,uVar14);
  fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
  uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44);
  fVar11 = (float)FUN_089f494c(uVar14);
  FUN_089f4534(fVar10 * fVar13,fVar11 * fVar13,uVar14);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
  *(int *)(param_1 + 0xb8) = (*(int *)(param_1 + 0xb8) + 0x14) % 0x168;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
  *(undefined4 *)(iVar6 + 0xc0) = uVar7;
  *(undefined4 *)(iVar6 + 0xc4) = uVar7;
  *(undefined4 *)(iVar6 + 200) = uVar7;
  *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  if (*(int *)(param_1 + 0x80) == 5) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0xd8) == 0) {
      fVar12 = fVar12 * 0.5;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
      *(float *)(iVar6 + 0xc0) = fVar12;
      *(float *)(iVar6 + 0xc4) = fVar12;
      *(float *)(iVar6 + 200) = fVar12;
      *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    *(uint *)(*(int *)(iVar6 + 0x88) + 0xd0) = *(uint *)(*(int *)(iVar6 + 0x88) + 0xd0) | 1;
    uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x88);
    fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68));
    fVar12 = *(float *)(param_1 + 0xc4);
    fVar11 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68));
    FUN_089f4924(fVar10 * (fVar12 * 0.15 + 1.0),fVar11 * (*(float *)(param_1 + 0xc4) * 0.1 + 1.0),
                 uVar14);
    uVar14 = *(undefined4 *)(param_1 + 0xc4);
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
    *(undefined4 *)(iVar6 + 0xc0) = uVar14;
    *(undefined4 *)(iVar6 + 0xc4) = uVar14;
    *(undefined4 *)(iVar6 + 200) = uVar14;
    *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0xbc) = 1.0 - *(float *)(param_1 + 0xc4);
    fVar10 = *(float *)(param_1 + 0xc4) + 0.05;
    *(float *)(param_1 + 0xc4) = fVar10;
    if (1.0 <= fVar10) {
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x88));
      *(undefined4 *)(param_1 + 0xc4) = uVar7;
    }
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0xc4) = uVar7;
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08911c74(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    iVar3 = FUN_0890ad3c();
    if (iVar3 == 0) {
      if (((DAT_08ac0e78 == 0x1b8) || (DAT_08ac0e78 == 0x1cc)) || (DAT_08ac0e78 == 0x12d)) {
LAB_08911d20:
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      else if (DAT_08ac0e78 == 0x2724) {
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar3 = DONE_NotZero_DAT_08AC5874();
        if (iVar3 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,4,0,0);
          goto LAB_08911d20;
        }
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      *(int *)(param_1 + 0x2c) = iVar3 + 1;
    }
    break;
  case 1:
    iVar3 = *(int *)(param_1 + 0x1c);
    if (*(float *)(*(int *)(iVar3 + 0x30) + 0xbc) == 1.0) {
      FUN_08910c60(param_1,*(undefined4 *)(param_1 + 0x78),0xffffffff);
      if (((DAT_08ac0e78 == 0x12d) || (DAT_08ac0e78 == 0x173)) ||
         ((DAT_08ac0e78 == 0x1b8 || (DAT_08ac0e78 == 0x1cc)))) {
        iVar3 = FUN_089edb80();
        *(undefined4 *)(iVar3 + 0x30) = 0;
        *(undefined4 *)(iVar3 + 0x34) = 0;
        *(undefined4 *)(iVar3 + 0x38) = 0;
        *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
        iVar3 = FUN_089edb80();
        *(undefined4 *)(iVar3 + 0x40) = 0;
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 0x48) = 0;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        uVar8 = FUN_089edb80();
        FUN_089edf24(uVar8,5);
        FUN_08910fc4(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        FUN_08910fc4(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x160)) {
        iVar1 = 0;
        do {
          pfVar4 = (float *)(*(int *)(iVar3 + iVar1) + 0xbc);
          *pfVar4 = *pfVar4 + 0.25;
          iVar3 = *(int *)(param_1 + 0x1c);
          iVar5 = *(int *)(iVar3 + iVar1);
          if (1.0 < *(float *)(iVar5 + 0xbc)) {
            *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
            iVar3 = *(int *)(param_1 + 0x1c);
            iVar5 = *(int *)(iVar3 + iVar1);
          }
          iVar2 = iVar2 + 1;
          *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(iVar5 + 0xbc);
          iVar1 = iVar1 + 4;
        } while (iVar2 < *(int *)(param_1 + 0x160));
        iVar3 = *(int *)(param_1 + 0x2c);
        goto LAB_08912768;
      }
    }
    break;
  case 2:
    uVar8 = FUN_089edb80();
    iVar3 = FUN_089edf70(uVar8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      goto LAB_08912768;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 3:
    iVar3 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(iVar3 + 8) & 0x10) == 0) {
      if ((*(byte *)(iVar3 + 8) & 0x40) == 0) {
        if ((*(byte *)(iVar3 + 5) & 0x40) == 0) {
          if ((*(byte *)(iVar3 + 5) & 1) == 0) {
            if ((*(byte *)(iVar3 + 5) & 2) != 0) {
              iVar3 = *(int *)(param_1 + 0x1c);
              goto LAB_089121a0;
            }
            if ((*(byte *)(iVar3 + 4) & 8) == 0) {
              if ((*(byte *)(iVar3 + 5) & 0x20) == 0) {
                iVar3 = *(int *)(param_1 + 0x1c);
                goto LAB_089121a0;
              }
              iVar3 = *(int *)(param_1 + 0x150);
            }
            else {
              iVar3 = *(int *)(param_1 + 0x150);
            }
            if (((iVar3 != 6) && (iVar3 != 7)) && (iVar3 != 8)) {
              if (iVar3 == 9) {
                iVar3 = *(int *)(param_1 + 0x1c);
                goto LAB_089121a0;
              }
              iVar3 = DONE_NotZero_DAT_08AC5874();
              if (iVar3 == 0) {
                iVar3 = *(int *)(param_1 + 0x2c);
              }
              else {
                uVar8 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar8,7,0,0);
                iVar3 = *(int *)(param_1 + 0x2c);
              }
              *(undefined4 *)(param_1 + 0x154) = 0;
              *(int *)(param_1 + 0x2c) = iVar3 + 1;
            }
          }
        }
        else if (*(int *)(&DAT_08a9b620 +
                         *(int *)(param_1 + 0x150) * 0x1c + *(int *)(param_1 + 0x78) * 4) == 0xd) {
          iVar3 = DONE_NotZero_DAT_08AC5874();
          if (iVar3 != 0) {
            uVar8 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar8,8,0,0);
          }
          *(undefined4 *)(param_1 + 0x2c) = 0x14;
        }
        else {
          if (*(int *)(&DAT_08a9b620 +
                      *(int *)(param_1 + 0x150) * 0x1c + *(int *)(param_1 + 0x78) * 4) == 1) {
            iVar3 = DONE_NotZero_DAT_08AC5874();
            if (iVar3 != 0) {
              uVar8 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar8,5,0,0);
            }
            *(undefined4 *)(param_1 + 0x168) = 0;
            *(undefined4 *)(param_1 + 0x28) = 4;
            FUN_08909df4(param_1,0);
            iVar3 = *(int *)(param_1 + 0x2c);
            goto LAB_08912768;
          }
          iVar3 = DONE_NotZero_DAT_08AC5874();
          if (iVar3 != 0) {
            uVar8 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar8,5,0,0);
          }
          *(uint *)(param_1 + 0x154) =
               (uint)(*(int *)(&DAT_08a9b620 +
                              *(int *)(param_1 + 0x150) * 0x1c + *(int *)(param_1 + 0x78) * 4) != 0)
          ;
          iVar3 = FUN_08910f64(param_1);
          *(int *)(param_1 + 0x37c) = iVar3;
          uVar8 = 0xf;
          if (iVar3 != -1) {
            uVar8 = 10;
          }
          *(undefined4 *)(param_1 + 0x2c) = uVar8;
        }
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x78);
        iVar3 = iVar2 + 1;
        *(int *)(param_1 + 0x78) = iVar3;
        if (*(int *)(param_1 + 0x74) <= iVar3) {
          *(undefined4 *)(param_1 + 0x78) = 0;
          iVar3 = 0;
        }
        FUN_08910c60(param_1,iVar3,iVar2);
        iVar3 = DONE_NotZero_DAT_08AC5874();
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x1c);
        }
        else {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,6,0,0);
          iVar3 = *(int *)(param_1 + 0x1c);
        }
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x78);
      iVar2 = iVar3 + -1;
      *(int *)(param_1 + 0x78) = iVar2;
      if (iVar2 < 0) {
        iVar2 = *(int *)(param_1 + 0x74) + -1;
        *(int *)(param_1 + 0x78) = iVar2;
      }
      FUN_08910c60(param_1,iVar2,iVar3);
      iVar3 = DONE_NotZero_DAT_08AC5874();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        uVar8 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar8,6,0,0);
        iVar3 = *(int *)(param_1 + 0x1c);
      }
    }
LAB_089121a0:
    if (*(float *)(*(int *)(iVar3 + 0x90) + 0xbc) < 0.0) {
      if (*(float *)(*(int *)(iVar3 + 0x50) + 0xc0) <= 0.29) {
        iVar3 = *(int *)(param_1 + 0x2c);
        goto LAB_08912768;
      }
      FUN_089f3dd4();
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x90) + 0xbc) = 0x3f800000;
    }
    else {
      fVar7 = (float)FUN_089f4944(*(int *)(iVar3 + 0x90));
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90);
      fVar6 = (float)FUN_089f494c(uVar8);
      FUN_089f4924(fVar7 * 1.02,fVar6 * 1.02,uVar8);
      pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x90) + 0xbc);
      *pfVar4 = *pfVar4 - 0.15;
    }
    break;
  case 4:
    FUN_089a5c30();
    if (*(int *)(param_1 + 0x154) == 0) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (*(float *)(*(int *)(iVar3 + 0x30) + 0xbc) == 0.0) {
        FUN_0890a598(param_1,0);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x160)) {
          iVar1 = 0;
          do {
            pfVar4 = (float *)(*(int *)(iVar3 + iVar1) + 0xbc);
            *pfVar4 = *pfVar4 - 0.25;
            iVar3 = *(int *)(param_1 + 0x1c);
            iVar5 = *(int *)(iVar3 + iVar1);
            if (*(float *)(iVar5 + 0xbc) < 0.0) {
              *(undefined4 *)(iVar5 + 0xbc) = 0;
              iVar3 = *(int *)(param_1 + 0x1c);
              iVar5 = *(int *)(iVar3 + iVar1);
            }
            iVar2 = iVar2 + 1;
            *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(iVar5 + 0xbc);
            iVar1 = iVar1 + 4;
          } while (iVar2 < *(int *)(param_1 + 0x160));
          iVar3 = *(int *)(param_1 + 0x2c);
          goto LAB_08912768;
        }
      }
    }
    else {
      FUN_0890a598(param_1,*(undefined4 *)
                            (&DAT_08a9b620 +
                            *(int *)(param_1 + 0x150) * 0x1c + *(int *)(param_1 + 0x78) * 4));
      iVar3 = FUN_0890a5a8(param_1);
      if (iVar3 == 0xf) {
        iVar3 = FUN_089edb80();
        *(undefined4 *)(iVar3 + 0x30) = 0;
        *(undefined4 *)(iVar3 + 0x34) = 0;
        *(undefined4 *)(iVar3 + 0x38) = 0;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        iVar3 = FUN_089edb80();
        *(undefined4 *)(iVar3 + 0x40) = 0x3e8888f8;
        *(undefined4 *)(iVar3 + 0x44) = 0x3f088851;
        *(undefined4 *)(iVar3 + 0x48) = 0x3e8888f8;
        *(undefined4 *)(iVar3 + 0x4c) = 0x3f4ccccd;
        uVar8 = FUN_089edb80();
        FUN_089edf24(uVar8,7);
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar3 = FUN_089edb80();
        *(undefined4 *)(iVar3 + 0x30) = 0;
        *(undefined4 *)(iVar3 + 0x34) = 0;
        *(undefined4 *)(iVar3 + 0x38) = 0;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        iVar3 = FUN_089edb80();
        *(undefined4 *)(iVar3 + 0x40) = 0;
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 0x48) = 0;
        *(undefined4 *)(iVar3 + 0x4c) = 0x3f800000;
        uVar8 = FUN_089edb80();
        FUN_089edf24(uVar8,10);
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      *(int *)(param_1 + 0x2c) = iVar3 + 1;
    }
    break;
  case 5:
    iVar3 = FUN_0890a5a8(param_1);
    if (iVar3 == 0xf) {
      *(float *)(*(int *)(param_1 + 0x18) + 0x70) =
           *(float *)(*(int *)(param_1 + 0x18) + 0x70) - 0.2;
      FUN_089f59e8(*(float *)(*(int *)(param_1 + 0x18) + 0x70) * 0.2 + 0.8,0,
                   *(int *)(param_1 + 0x18),0);
    }
    uVar8 = FUN_089edb80();
    iVar3 = FUN_089edf70(uVar8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      goto LAB_08912768;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 10:
    iVar3 = FUN_089bf6e8(0x1fe,100);
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar3 + 0x20) = uVar8;
    *(undefined4 *)(iVar3 + 0x24) = uVar8;
    iVar2 = FUN_0880dc00("DMPauseEnd");
    iVar1 = FUN_088cc354(iVar2);
    if (*(int *)(param_1 + 0x37c) < iVar1) {
      FUN_0890e844(*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x37c) * 4));
    }
    *(undefined4 *)(iVar3 + 0x7c) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    iVar3 = FUN_089bf93c(0x1fe,1);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      goto LAB_08912768;
    }
    iVar3 = FUN_0890e868();
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 4;
      iVar3 = FUN_0880d354();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x2c);
        goto LAB_08912768;
      }
      if (*(int *)(param_1 + 0x150) == 6) {
        iVar3 = *(int *)(&UNK_08a9b6c8 + *(int *)(param_1 + 0x78) * 4);
        if ((iVar3 < 5) && (2 < iVar3)) {
          if (iVar3 < 4) {
            iVar3 = *(int *)(param_1 + 0x2c);
          }
          else {
            uVar8 = DONE_Get_DAT_08AAC9E0();
            FUN_0880d0e8(uVar8,0x4000);
            iVar3 = FUN_0881b22c();
            if (iVar3 == 0) {
              iVar3 = *(int *)(param_1 + 0x2c);
            }
            else {
              uVar8 = DONE_GetPtr_DAT_08AB0300();
              FUN_0881bbd8(uVar8);
              iVar3 = *(int *)(param_1 + 0x2c);
            }
          }
          goto LAB_08912768;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0xf:
    FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x78) * 4 + 0x14),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x90) + 0xbc) = 0x3f000000;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x10:
    fVar7 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90));
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90);
    fVar6 = (float)FUN_089f494c(uVar8);
    FUN_089f4924(fVar7 * 1.05,fVar6 * 1.05,uVar8);
    pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x90) + 0xbc);
    *pfVar4 = *pfVar4 - 0.08;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x90);
    if (*(float *)(iVar3 + 0xbc) < 0.0) {
      *(undefined4 *)(iVar3 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 0x14:
    iVar3 = FUN_089bf6e8(0x1fe,100);
    iVar2 = FUN_0880dc00("DWCommon");
    FUN_088cc354(iVar2);
    FUN_0890e844(*(undefined4 *)(iVar2 + 8));
    *(undefined4 *)(iVar3 + 0x7c) = 0;
    *(undefined4 *)(iVar3 + 0x84) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x15:
    iVar3 = FUN_089bf93c(0x1fe,1);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  default:
    iVar3 = *(int *)(param_1 + 0x2c);
    goto LAB_08912768;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
LAB_08912768:
  if (2 < iVar3) {
    fVar7 = *(float *)(param_1 + 0x16c) + 0.08;
    *(float *)(param_1 + 0x16c) = fVar7;
    uVar8 = vmul_s(fVar7 * 3.141593,in_V7C);
    fVar7 = (float)vcos_s(uVar8);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x78) * 4 + 0x14);
    fVar7 = 0.3 - (1.0 - fVar7) * 0.5 * 0.3;
    *(float *)(iVar3 + 0xc0) = fVar7;
    *(float *)(iVar3 + 0xc4) = fVar7;
    *(undefined4 *)(iVar3 + 200) = 0;
    *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
    *(float *)(iVar3 + 0xc0) = fVar7;
    *(float *)(iVar3 + 0xc4) = fVar7;
    *(float *)(iVar3 + 200) = fVar7;
    *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
  }
  return;
}


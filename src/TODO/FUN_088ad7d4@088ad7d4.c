#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ad7d4(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (*(int *)(param_1 + 0x140) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x80) = in_V72;
      *(undefined4 *)(param_1 + 0x84) = in_V76;
      *(undefined4 *)(param_1 + 0x88) = in_V7A;
      *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x140) + 0x130) & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x1fc) = 1;
    }
  }
  else if ((1 < iVar5) && (iVar5 < 3)) {
    *(undefined *)(param_1 + 0x2b1) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
    *(undefined *)(param_1 + 0x281) = 1;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    switch(*(undefined4 *)(param_1 + 0x208)) {
    case 0:
      iVar5 = *(int *)(param_1 + 0x218);
      if (iVar5 < 3) {
        if (iVar5 < 2) {
LAB_088ad948:
          iVar5 = DONE_NotZero_DAT_08AC5258();
          if (iVar5 != 0) {
            uVar6 = DONE_Get_DAT_08AC5258();
            FUN_089c00c4(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x144) + 4),param_1 + 0x20,0,1);
          }
          *(undefined *)(param_1 + 0xbc) = 1;
          FUN_089e0a70(param_1,&LAB_088a90e0,0);
          *(undefined4 *)(param_1 + 0x304) = 4;
        }
        else {
          iVar5 = DONE_NotZero_DAT_08AC5258();
          if (iVar5 != 0) {
            uVar6 = DONE_Get_DAT_08AC5258();
            FUN_089c00c4(uVar6,0x2000e3,param_1 + 0x20,0,1);
          }
          *(undefined4 *)(param_1 + 0x304) = 5;
        }
      }
      else {
        if (iVar5 != 6) goto LAB_088ad948;
        iVar5 = DONE_NotZero_DAT_08AC5258();
        if (iVar5 != 0) {
          uVar6 = DONE_Get_DAT_08AC5258();
          FUN_089c00c4(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x144) + 4),param_1 + 0x20,0,1);
        }
        *(undefined4 *)(param_1 + 0x304) = 6;
      }
      break;
    case 1:
    case 3:
    case 5:
      iVar5 = DONE_NotZero_DAT_08AC5258();
      if (iVar5 != 0) {
        uVar6 = DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x144) + 4),param_1 + 0x20,0,1);
      }
      *(undefined *)(param_1 + 0xbc) = 1;
      FUN_089e0a70(param_1,&LAB_088a90e0,0);
      *(undefined4 *)(param_1 + 0x304) = 4;
      break;
    case 2:
      iVar5 = DONE_NotZero_DAT_08AC5258();
      if (iVar5 != 0) {
        uVar6 = DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x144) + 4),param_1 + 0x20,0,1);
      }
      *(undefined4 *)(param_1 + 0x304) = 2;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x304) = 7;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x304) = 9;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x304) = 8;
      break;
    default:
      *(undefined *)(param_1 + 0x282) = 1;
    }
  }
  iVar5 = FUN_0881a580(*(undefined4 *)(param_1 + 0x140));
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x168) == 0) {
      cVar4 = *(char *)(param_1 + 0x2b1);
    }
    else {
      fVar8 = *(float *)(param_1 + 0x1c0);
      iVar5 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
      *(float *)(*(int *)(param_1 + 0x168) + 0xb0) = fVar8 + (float)iVar5;
      fVar8 = *(float *)(param_1 + 0x1c8);
      iVar5 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
      *(float *)(*(int *)(param_1 + 0x168) + 0xb8) = fVar8 + (float)iVar5;
      cVar4 = *(char *)(param_1 + 0x2b1);
    }
    *(char *)(param_1 + 0x2b1) = cVar4 + '\x01';
    if (*(byte *)(param_1 + 0x2b1) < 0x10) {
      return;
    }
    if (*(int *)(param_1 + 0x168) != 0) {
      iVar5 = *(int *)(param_1 + 0x168);
      uVar6 = *(undefined4 *)(param_1 + 0x1c4);
      uVar7 = *(undefined4 *)(param_1 + 0x1c8);
      uVar3 = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x1c0);
      *(undefined4 *)(iVar5 + 0xb4) = uVar6;
      *(undefined4 *)(iVar5 + 0xb8) = uVar7;
      *(undefined4 *)(iVar5 + 0xbc) = uVar3;
    }
    *(undefined *)(param_1 + 0x287) = 1;
    *(undefined *)(param_1 + 0x2b0) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x208) == 8) {
    iVar5 = *(int *)(param_1 + 0x140);
    *(undefined4 *)(iVar5 + 0x148) = 1;
    *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) | 1;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x140) = 0;
    return;
  }
  iVar5 = *(int *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(iVar5 + 0x160);
  uVar6 = *(undefined4 *)(iVar5 + 0x154);
  uVar7 = *(undefined4 *)(iVar5 + 0x158);
  uVar3 = *(undefined4 *)(iVar5 + 0x15c);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(iVar5 + 0x150);
  *(undefined4 *)(param_1 + 0x274) = uVar6;
  *(undefined4 *)(param_1 + 0x278) = uVar7;
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  if ((*(int *)(param_1 + 0x148) != 0) && (*(int *)(*(int *)(param_1 + 0x148) + 0x140) == 7)) {
    *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x64c) = 3;
  }
  iVar5 = FUN_088aab58(param_1);
  if (iVar5 == 0) {
    iVar5 = FUN_088ac990(param_1);
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x148);
      goto LAB_088adb44;
    }
    iVar5 = *(int *)(param_1 + 0x140);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x148);
LAB_088adb44:
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x140);
    }
    else {
      if (*(char *)(*(int *)(param_1 + 0x148) + 0x158) != '\0') {
        iVar5 = *(int *)(param_1 + 0x140);
        *(undefined4 *)(iVar5 + 0x148) = 1;
        *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) | 1;
        *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x140) = 1;
        return;
      }
      iVar5 = *(int *)(param_1 + 0x140);
    }
  }
  if (*(int *)(iVar5 + 0x170) == 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    goto LAB_088adc68;
  }
  uStack_64 = *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x15c);
  auVar1 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x70),0x40800000);
  local_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  uStack_58 = auVar1._8_4_;
  auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 0x140) + 0x150),auVar1);
  local_70 = auVar1._0_4_;
  uStack_6c = auVar1._4_4_;
  uStack_68 = auVar1._8_4_;
  FUN_08823f5c(DAT_08ac5c70,9,&local_70);
  iVar5 = *(int *)(param_1 + 0x208);
  if (iVar5 < 3) {
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      goto LAB_088adc68;
    }
LAB_088adc50:
    FUN_08824594(DAT_08abd5b0,0,&local_70,param_1);
  }
  else if (4 < iVar5) {
    if (6 < iVar5) {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      goto LAB_088adc68;
    }
    goto LAB_088adc50;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
LAB_088adc68:
  local_70 = *(undefined4 *)(param_1 + 0x20);
  uStack_6c = *(undefined4 *)(param_1 + 0x24);
  uStack_68 = *(undefined4 *)(param_1 + 0x28);
  uStack_64 = *(undefined4 *)(param_1 + 0x2c);
  *(uint *)(*(int *)(param_1 + 0x140) + 0x130) = *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 2;
  *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x140) + 0x130) & 0xfffffffd;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x164);
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x16c);
  iVar5 = **(int **)(param_1 + 0x144);
  if (iVar5 == 0x2000cb || iVar5 == 0x2000cf) {
    if ((int)DAT_08abd5b4 < 0) {
      iVar5 = iVar5 - (-DAT_08abd5b4 & 3);
    }
    else {
      iVar5 = iVar5 + (DAT_08abd5b4 & 3);
    }
  }
  iVar2 = DONE_NotZero_DAT_08AC5258();
  if (iVar2 == 0) {
    iVar5 = *(int *)(param_1 + 0x14);
  }
  else {
    uVar3 = DONE_Get_DAT_08AC5258();
    FUN_089c00c4(uVar3,iVar5,(undefined4 *)(param_1 + 0x20),0,1);
    iVar5 = *(int *)(param_1 + 0x14);
  }
  iVar5 = (**(code **)(iVar5 + 100))(param_1 + *(short *)(iVar5 + 0x60));
  if (iVar5 == 0) {
    iVar5 = (**(code **)(*(int *)(param_1 + 0x14) + 0x6c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x68));
    if (iVar5 == 0) {
      uVar6 = FUN_088879d8(*(undefined4 *)(param_1 + 0x148),uVar6,uVar7,4,6);
      FUN_088ac9d8(uVar6,param_1);
      cVar4 = *(char *)(param_1 + 0x2b0);
    }
    else {
      uVar6 = FUN_088879d8(*(undefined4 *)(param_1 + 0x148),uVar6,uVar7,5,6);
      FUN_088ac9d8(uVar6,param_1);
      cVar4 = *(char *)(param_1 + 0x2b0);
    }
  }
  else {
    FUN_088a7640(param_1);
    uVar6 = FUN_088879d8(*(undefined4 *)(param_1 + 0x148),uVar6,uVar7,2,
                         *(undefined4 *)(param_1 + 0x328));
    FUN_088ac9d8(uVar6,param_1);
    cVar4 = *(char *)(param_1 + 0x2b0);
  }
  if (cVar4 == '\0') {
    iVar5 = *(int *)(param_1 + 0x200);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2b4);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2b8);
    if (*(int *)(param_1 + 0x168) != 0) {
      iVar5 = *(int *)(param_1 + 0x168);
      uVar6 = *(undefined4 *)(param_1 + 0x1c4);
      uVar7 = *(undefined4 *)(param_1 + 0x1c8);
      uVar3 = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x1c0);
      *(undefined4 *)(iVar5 + 0xb4) = uVar6;
      *(undefined4 *)(iVar5 + 0xb8) = uVar7;
      *(undefined4 *)(iVar5 + 0xbc) = uVar3;
    }
    *(undefined *)(param_1 + 0x287) = 1;
    *(undefined *)(param_1 + 0x2b0) = 0;
    *(undefined *)(param_1 + 0x2b1) = 0;
    iVar5 = *(int *)(param_1 + 0x200);
  }
  if ((float)iVar5 <= 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x134) = 10;
    *(undefined4 *)(param_1 + 0x1fc) = 2;
  }
  else {
    iVar5 = (**(code **)(*(int *)(param_1 + 0x14) + 100))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x60));
    if (iVar5 != 0) {
      FUN_088a7640(param_1);
    }
    *(undefined *)(param_1 + 0x287) = 0;
    *(undefined *)(param_1 + 0x2b0) = 1;
    *(undefined *)(param_1 + 0x2b1) = 0;
  }
  return;
}


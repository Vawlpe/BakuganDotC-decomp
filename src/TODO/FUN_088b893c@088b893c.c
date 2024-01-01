#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Restarted to delay deadcode elimination for space: ram

int FUN_088b893c(float param_1,int param_2,undefined4 *param_3,undefined (*param_4) [12],
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar7 = 1 << (*(uint *)(*(int *)(*(int *)(param_2 + 0x14c) + 0x174) + 0x134) & 0x1f) ^ 0x1bf0f7eU
          | 0x18000000;
  DAT_08b00680 = *param_3;
  DAT_08b00684 = param_3[1];
  DAT_08b00688 = param_3[2];
  DAT_08b00690 = *(undefined4 *)*param_4;
  DAT_08b00694 = *(undefined4 *)(*param_4 + 4);
  DAT_08b00698 = *(undefined4 *)(*param_4 + 8);
  DAT_08b006a0 = param_1 * 2.0;
  DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
  uVar8 = vdot_t(*param_4,*param_4);
  DAT_08b0069c = vsqrt_s(uVar8);
  DAT_08abd664 = &DAT_08b006b0;
  DAT_08abd668 = param_2;
  DAT_08abd674 = atan2f(*(undefined4 *)(*param_4 + 8),*(undefined4 *)*param_4);
  iVar3 = DAT_08b00794;
  uVar8 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  DAT_08abd678 = param_5;
  *(undefined4 *)(DAT_08b00794 + 0x20) = *param_3;
  *(undefined4 *)(iVar3 + 0x24) = uVar8;
  *(undefined4 *)(iVar3 + 0x28) = uVar1;
  *(undefined4 *)(iVar3 + 0x2c) = uVar2;
  DAT_08ab02f0 = param_6;
  iVar3 = FUN_0881aa28(uVar7,&DAT_08abd650,1,0);
  DAT_08b00680 = *param_3;
  DAT_08b00684 = param_3[1];
  DAT_08b00688 = param_3[2];
  DAT_08b00690 = *(undefined4 *)*param_4;
  DAT_08b00694 = *(undefined4 *)(*param_4 + 4);
  DAT_08b00698 = *(undefined4 *)(*param_4 + 8);
  DAT_08b0068c = param_1 * param_1;
  uVar8 = vdot_t(*param_4,*param_4);
  DAT_08b0069c = vsqrt_s(uVar8);
  DAT_08b006a0 = param_1;
  if (iVar3 == 0) {
    iVar4 = FUN_0881a83c(uVar7,&DAT_08b006b0,0);
    if (iVar4 != 0) {
      *(undefined *)(param_2 + 0x1d0) = 1;
      uVar2 = DAT_08b0028c;
      uVar1 = DAT_08b00288;
      uVar8 = DAT_08b00284;
      DAT_08abd650 = DAT_08b00280;
      DAT_08abd654 = DAT_08b00284;
      DAT_08abd658 = DAT_08b00288;
      DAT_08abd65c = DAT_08b0028c;
      *(undefined4 *)(param_2 + 0x1e0) = DAT_08b00280;
      *(undefined4 *)(param_2 + 0x1e4) = uVar8;
      *(undefined4 *)(param_2 + 0x1e8) = uVar1;
      *(undefined4 *)(param_2 + 0x1ec) = uVar2;
      DAT_08abd660 = 0;
      *(undefined4 *)(param_2 + 400) = DAT_08b002b4;
      uVar2 = DAT_08b0029c;
      uVar1 = DAT_08b00298;
      uVar8 = DAT_08b00294;
      *(undefined4 *)(param_2 + 0x170) = DAT_08b00290;
      *(undefined4 *)(param_2 + 0x174) = uVar8;
      *(undefined4 *)(param_2 + 0x178) = uVar1;
      *(undefined4 *)(param_2 + 0x17c) = uVar2;
      *(undefined4 *)(param_2 + 0x1f0) = 1;
      iVar3 = 1;
    }
  }
  else {
    if (DAT_08abd660 != 0) {
      piVar5 = (int *)FUN_088dfa48();
      iVar4 = *piVar5;
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + 0x14);
        do {
          iVar6 = (**(code **)(iVar6 + 0x5c))(iVar4 + *(short *)(iVar6 + 0x58));
          if (iVar6 == 0) {
            iVar4 = *(int *)(iVar4 + 4);
          }
          else {
            if (DAT_08abd660 == *(int *)(iVar4 + 0x174)) {
              FUN_088e8294(iVar4,&DAT_08abd650);
              break;
            }
            iVar4 = *(int *)(iVar4 + 4);
          }
          if (iVar4 == 0) break;
          iVar6 = *(int *)(iVar4 + 0x14);
        } while( true );
      }
    }
    *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x1f0) = 2;
    if ((DAT_08abd660 != 0) && (*(int *)(DAT_08abd660 + 0x134) == 0x13)) {
      *(undefined4 *)(param_2 + 0x1f0) = 3;
      iVar4 = *(int *)(DAT_08abd660 + 0x138);
      if (iVar4 != 0) {
        uVar8 = *(undefined4 *)(iVar4 + 0x24);
        uVar1 = *(undefined4 *)(iVar4 + 0x28);
        uVar2 = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(param_2 + 0x1e4) = uVar8;
        *(undefined4 *)(param_2 + 0x1e8) = uVar1;
        *(undefined4 *)(param_2 + 0x1ec) = uVar2;
      }
    }
    if (((DAT_08abd660 != 0) && (iVar4 = FUN_088e1948(), iVar4 != 0)) &&
       (*(char *)(iVar4 + 0x3a1) == '\0')) {
      iVar4 = FUN_088be274();
      iVar4 = *(int *)(iVar4 + 0x658);
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + 0x14);
        while( true ) {
          iVar6 = (**(code **)(iVar6 + 0x8c))(iVar4 + *(short *)(iVar6 + 0x88));
          if (iVar6 == 0) {
            iVar4 = *(int *)(iVar4 + 4);
          }
          else if (*(int *)(iVar4 + 0x174) == 0) {
            iVar4 = *(int *)(iVar4 + 4);
          }
          else if (DAT_08abd660 == *(int *)(iVar4 + 0x174)) {
            *(undefined4 *)(param_2 + 0x1f0) = 0;
            iVar3 = 0;
            iVar4 = *(int *)(iVar4 + 4);
          }
          else {
            iVar4 = *(int *)(iVar4 + 4);
          }
          if (iVar4 == 0) break;
          iVar6 = *(int *)(iVar4 + 0x14);
        }
      }
    }
  }
  return iVar3;
}


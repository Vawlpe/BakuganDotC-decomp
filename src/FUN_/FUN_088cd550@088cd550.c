#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cd550(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  undefined4 in_V7C;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  if (6 < uVar5) {
    return;
  }
  switch(uVar5) {
  case 0:
    iVar3 = FUN_089bfa40(0x2774);
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 2;
    }
    else {
      uVar2 = FUN_089edb80();
      iVar8 = FUN_089edf70(uVar2);
      if ((iVar8 != 0) &&
         (iVar3 = (**(code **)(*(int *)(iVar3 + 0xc) + 0x34))
                            (iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 0x30),3), iVar3 == 3)) {
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
        uVar2 = FUN_089edb80();
        FUN_089edf24(uVar2,10);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
    }
    break;
  case 1:
    uVar2 = FUN_089edb80();
    iVar3 = FUN_089edf70(uVar2);
    if (iVar3 != 0) {
      iVar3 = FUN_089bfa40(0x2774);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x20);
      }
      else {
        (**(code **)(*(int *)(iVar3 + 0xc) + 0x2c))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 0x28),3,4);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      *(int *)(param_1 + 0x20) = iVar3 + 1;
    }
    break;
  case 2:
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
    uVar2 = FUN_089edb80();
    FUN_089edf24(uVar2,5);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    break;
  case 3:
    uVar2 = FUN_089edb80();
    iVar3 = FUN_089edf70(uVar2);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x1c);
    if ((*(byte *)(iVar3 + 8) & 0x10) == 0) {
      if ((*(byte *)(iVar3 + 8) & 0x40) != 0) {
        uVar6 = *(int *)(param_1 + 0x24) + 3;
        uVar5 = uVar6 & 1;
        if ((int)uVar6 < 0) {
          uVar5 = -uVar5;
        }
        *(uint *)(param_1 + 0x24) = uVar5;
        goto LAB_088cd89c;
      }
      if ((*(byte *)(iVar3 + 8) & 0x20) == 0) {
        if (((int)*(char *)(iVar3 + 8) & 0x80U) != 0) {
          iVar3 = *(int *)(param_1 + 0x24);
          if (iVar3 < 1) {
            if (-1 < iVar3) {
              *(undefined4 *)(param_1 + 0x2c) = 0;
              *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x28) + 8) % 9;
              goto LAB_088cd89c;
            }
            fVar9 = *(float *)(param_1 + 0x34);
          }
          else {
            if (iVar3 < 2) {
              *(int *)(param_1 + 0x2c) =
                   (*(int *)(param_1 + 0x2c) +
                    *(int *)(&DAT_08a93658 + *(int *)(param_1 + 0x28) * 4) + -1) %
                   *(int *)(&DAT_08a93658 + *(int *)(param_1 + 0x28) * 4);
              goto LAB_088cd89c;
            }
            fVar9 = *(float *)(param_1 + 0x34);
          }
          goto LAB_088cd8a0;
        }
        if ((*(byte *)(iVar3 + 4) & 8) != 0) {
          *(int *)(param_1 + 0x20) = ((int)(uVar5 * 4) >> 2) + 1;
        }
        goto LAB_088cd89c;
      }
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x28) + 10) % 9;
          goto LAB_088cd89c;
        }
        fVar9 = *(float *)(param_1 + 0x34);
      }
      else {
        if (iVar3 < 2) {
          *(int *)(param_1 + 0x2c) =
               (*(int *)(param_1 + 0x2c) + *(int *)(&DAT_08a93658 + *(int *)(param_1 + 0x28) * 4) +
               1) % *(int *)(&DAT_08a93658 + *(int *)(param_1 + 0x28) * 4);
          goto LAB_088cd89c;
        }
        fVar9 = *(float *)(param_1 + 0x34);
      }
    }
    else {
      uVar6 = *(int *)(param_1 + 0x24) + 1;
      uVar5 = uVar6 & 1;
      if ((int)uVar6 < 0) {
        uVar5 = -uVar5;
      }
      *(uint *)(param_1 + 0x24) = uVar5;
LAB_088cd89c:
      fVar9 = *(float *)(param_1 + 0x34);
    }
LAB_088cd8a0:
    *(float *)(param_1 + 0x34) = fVar9 + 0.05;
    uVar2 = vmul_s((fVar9 + 0.05) * 3.141593,in_V7C);
    fVar9 = (float)vcos_s(uVar2);
    *(float *)(param_1 + 0x30) = (1.0 - fVar9) * 0.5 * 0.7 + 0.3;
    break;
  case 5:
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
    uVar2 = FUN_089edb80();
    FUN_089edf24(uVar2,5);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    break;
  case 6:
    uVar2 = FUN_089edb80();
    iVar3 = FUN_089edf70(uVar2);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_0880cc48();
      *(char *)(*piVar4 + 0x80) = (char)*(int *)(param_1 + 0x28) + (6 < *(int *)(param_1 + 0x28));
      piVar4 = (int *)FUN_0880cc48();
      *(char *)(*piVar4 + 0x81) = (char)*(undefined4 *)(param_1 + 0x2c);
      piVar4 = (int *)FUN_0880cc48();
      bVar1 = *(byte *)(*piVar4 + 0x80);
      piVar4 = (int *)FUN_0880cc48();
      *(uint *)(DAT_08ac58c4 + 4) = (uint)bVar1 * 4 + (uint)*(byte *)(*piVar4 + 0x81);
      uVar2 = FUN_0880cc48();
      FUN_0880cd9c(uVar2,8,0);
      uVar2 = FUN_0880cc48();
      FUN_0880cd9c(uVar2,9,0);
      iVar3 = 0;
      puVar7 = &DAT_08a91c00;
      do {
        if (puVar7[1] == *(int *)(DAT_08ac58c4 + 4)) break;
        iVar3 = iVar3 + 1;
        puVar7 = puVar7 + 2;
      } while (iVar3 < 0x11);
      if ((iVar3 != 0x11) && (iVar8 = 0, -1 < iVar3)) {
        puVar7 = &DAT_08a91c00;
        do {
          FUN_089c9b74(*puVar7,DAT_08ac58c8);
          iVar8 = iVar8 + 1;
          puVar7 = puVar7 + 2;
        } while (iVar8 <= iVar3);
      }
      uVar2 = FUN_088cdc88(*(undefined4 *)(DAT_08ac58c4 + 4));
      *(undefined4 *)(DAT_08ac58c4 + 0x3c) = uVar2;
      FUN_089bf7a8(param_1,1);
    }
  }
  return;
}


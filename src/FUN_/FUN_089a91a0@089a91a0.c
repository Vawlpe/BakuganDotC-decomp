#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089a91a0(float param_1,float param_2,float param_3,char param_4,int param_5,int param_6,
                 uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar3 = param_7 & 1;
  uVar1 = param_7 & 2;
  uVar2 = param_7 & 4;
  if (param_4 == '\0') {
    *(float *)(param_6 + 0x1c) = *(float *)(param_6 + 0x1c) + 1.0 / param_3;
    if (uVar3 != 0) {
      fVar6 = *(float *)(param_6 + 0x1c) - 1.0;
      *(float *)(param_5 + 0xbc) = *(float *)(param_6 + 0x20) + (1.0 - fVar6 * fVar6);
    }
    if (uVar1 != 0) {
      if (param_2 < param_1) {
        fVar6 = *(float *)(param_6 + 0x1c) - 1.0;
        *(float *)(param_5 + 0x90) =
             *(float *)(param_6 + 0x24) - (1.0 - fVar6 * fVar6) * (param_1 - param_2);
      }
      if (param_1 < param_2) {
        fVar6 = *(float *)(param_6 + 0x1c) - 1.0;
        *(float *)(param_5 + 0x90) =
             *(float *)(param_6 + 0x24) + (1.0 - fVar6 * fVar6) * (param_2 - param_1);
        uVar5 = *(undefined4 *)(param_5 + 0x90);
      }
      else {
        uVar5 = *(undefined4 *)(param_5 + 0x90);
      }
      *(undefined4 *)(param_5 + 0x94) = uVar5;
    }
    fVar6 = *(float *)(param_6 + 0x1c);
    if (uVar2 == 0) {
      if ((param_7 & 8) != 0) {
        *(float *)(param_5 + 100) =
             (float)(int)*(short *)(param_6 + 0x14) +
             (1.0 - (fVar6 - 1.0) * (fVar6 - 1.0)) * (float)(int)*(short *)(param_6 + 0x18);
        fVar6 = *(float *)(param_6 + 0x1c);
      }
    }
    else {
      *(float *)(param_5 + 0x60) =
           (float)(int)*(short *)(param_6 + 0x14) +
           (1.0 - (fVar6 - 1.0) * (fVar6 - 1.0)) * (float)(int)*(short *)(param_6 + 0x18);
      fVar6 = *(float *)(param_6 + 0x1c);
    }
    bVar4 = true;
    if (1.0 <= fVar6) {
      if (uVar3 != 0) {
        *(undefined4 *)(param_5 + 0xbc) = 0x3f800000;
      }
      if (uVar1 != 0) {
        *(float *)(param_5 + 0x90) = param_2;
        *(float *)(param_5 + 0x94) = param_2;
      }
      if (uVar2 == 0) {
        if ((param_7 & 8) != 0) {
          *(float *)(param_5 + 100) = (float)(int)*(short *)(param_6 + 0x16);
        }
      }
      else {
        *(float *)(param_5 + 0x60) = (float)(int)*(short *)(param_6 + 0x16);
      }
      bVar4 = false;
    }
    bVar4 = !bVar4;
    if (uVar1 != 0) {
      FUN_089f4954(*(undefined4 *)(param_5 + 0x90),*(undefined4 *)(param_5 + 0x94),
                   *(undefined4 *)(param_5 + 0x9c),param_5,0);
    }
  }
  else {
    *(float *)(param_6 + 0x1c) = *(float *)(param_6 + 0x1c) + 1.0 / param_3;
    if (uVar3 != 0) {
      *(float *)(param_5 + 0xbc) =
           *(float *)(param_6 + 0x20) - *(float *)(param_6 + 0x1c) * *(float *)(param_6 + 0x1c);
    }
    if (uVar1 != 0) {
      if (param_2 < param_1) {
        *(float *)(param_5 + 0x90) =
             *(float *)(param_6 + 0x24) -
             *(float *)(param_6 + 0x1c) * *(float *)(param_6 + 0x1c) * (param_1 - param_2);
      }
      if (param_1 < param_2) {
        *(float *)(param_5 + 0x90) =
             *(float *)(param_6 + 0x24) +
             *(float *)(param_6 + 0x1c) * *(float *)(param_6 + 0x1c) * (param_2 - param_1);
        uVar5 = *(undefined4 *)(param_5 + 0x90);
      }
      else {
        uVar5 = *(undefined4 *)(param_5 + 0x90);
      }
      *(undefined4 *)(param_5 + 0x94) = uVar5;
    }
    fVar6 = *(float *)(param_6 + 0x1c);
    if (uVar2 == 0) {
      if ((param_7 & 8) != 0) {
        *(float *)(param_5 + 100) =
             (float)(int)*(short *)(param_6 + 0x14) +
             fVar6 * fVar6 * (float)(int)*(short *)(param_6 + 0x18);
        fVar6 = *(float *)(param_6 + 0x1c);
      }
    }
    else {
      *(float *)(param_5 + 0x60) =
           (float)(int)*(short *)(param_6 + 0x14) +
           fVar6 * fVar6 * (float)(int)*(short *)(param_6 + 0x18);
      fVar6 = *(float *)(param_6 + 0x1c);
    }
    bVar4 = 1.0 <= fVar6;
    if (bVar4) {
      *(uint *)(param_5 + 0xd0) = *(uint *)(param_5 + 0xd0) & 0xfffffffe;
    }
    if (uVar1 != 0) {
      FUN_089f4954(*(undefined4 *)(param_5 + 0x90),*(undefined4 *)(param_5 + 0x94),
                   *(undefined4 *)(param_5 + 0x9c),param_5,0);
    }
  }
  return bVar4;
}


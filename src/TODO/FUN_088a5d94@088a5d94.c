#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a5d94(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  code *pcVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x331) == '\0') {
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x28c) + -0xd;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50));
    *(undefined *)(param_1 + 0x331) = 1;
  }
  if (*(char *)(param_1 + 0x281) == '\0') {
    fVar6 = *(float *)(param_1 + 0x1f0);
  }
  else if (*(char *)(param_1 + 0x330) == '\0') {
    if (*(int *)(param_1 + 0x154) == 0) {
      *(undefined *)(param_1 + 0x330) = 1;
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
      *(undefined *)(param_1 + 0x330) = 1;
    }
    fVar6 = *(float *)(param_1 + 0x1f0);
  }
  else {
    fVar6 = *(float *)(param_1 + 0x1f0);
  }
  iVar1 = FUN_088abfa8(fVar6 * 5.0,0x457a0000,param_1,param_1,param_1 + 0x238,param_1 + 0x283,
                       *(int *)(param_1 + 0x32c) == 0);
  *(bool *)(param_1 + 0x284) = iVar1 == 0;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
  if (*(int *)(param_1 + 0x218) == 0xb3) {
    if (0.0 < *(float *)(param_1 + 0x6c)) {
      iVar1 = FUN_0884b248();
      if (iVar1 == 0) {
        cVar2 = *(char *)(param_1 + 0x332);
      }
      else {
        FUN_0884b268();
        iVar1 = FUN_0884c8f4();
        if (iVar1 == 0) {
          if (*(char *)(param_1 + 0x332) == '\0') {
            *(undefined *)(param_1 + 0x332) = 1;
            iVar1 = FUN_08823f5c(DAT_08abd5b0,0x15b,param_1 + 0x20);
            *(int *)(iVar1 + 0x1fc) = param_1;
            if (param_1 != 0) {
              *(undefined4 *)(iVar1 + 0x200) = *(undefined4 *)(param_1 + 0xc);
            }
          }
          goto LAB_088a5f2c;
        }
        cVar2 = *(char *)(param_1 + 0x332);
      }
    }
    else {
      cVar2 = *(char *)(param_1 + 0x332);
    }
    if (cVar2 != '\0') {
      *(undefined *)(param_1 + 0x332) = 0;
      FUN_088246f4(DAT_08abd5b0,0xffffffff,param_1);
    }
  }
LAB_088a5f2c:
  FUN_088ac81c(param_1);
  iVar1 = FUN_089bf93c(0x65,1);
  if ((iVar1 == 0) && (iVar1 = FUN_089bf93c(0x67,1), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 + 0x32c);
  }
  else {
    *(undefined *)(param_1 + 0xb8) = 0;
    if (*(char *)(param_1 + 0x332) != '\0') {
      *(undefined *)(param_1 + 0x332) = 0;
      FUN_088246f4(DAT_08abd5b0,0xffffffff,param_1);
    }
    iVar1 = *(int *)(param_1 + 0x32c);
  }
  if ((-1 < iVar1) && (*(uint *)(param_1 + 0x32c) < 2)) {
    iVar1 = *(int *)(param_1 + 0x32c) * 8;
    iVar3 = param_1 + *(short *)(&DAT_08a83ee8 + iVar1);
    if (*(short *)(&DAT_08a83eea + iVar1) == 0) {
      pcVar5 = (code *)(&PTR_FUN_08a83eec)[*(int *)(param_1 + 0x32c) * 2];
    }
    else {
      psVar4 = (short *)(*(int *)((&PTR_FUN_08a83eec)[*(int *)(param_1 + 0x32c) * 2] + iVar3) +
                        *(short *)(&DAT_08a83eea + *(int *)(param_1 + 0x32c) * 8) * 8);
      pcVar5 = *(code **)(psVar4 + 2);
      iVar3 = iVar3 + *psVar4;
    }
    (*pcVar5)(iVar3);
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a45f0(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  short *psVar4;
  uint uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 900) == '\0') {
    iVar2 = FUN_088a41a8(param_1);
    if (iVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
      return;
    }
    bVar1 = false;
    iVar2 = FUN_088abfa8(*(float *)(param_1 + 0x1f0) * 5.0,0x457a0000,param_1,param_1,
                         param_1 + 0x238,param_1 + 0x283,0);
    *(bool *)(param_1 + 0x284) = iVar2 == 0;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
    iVar2 = FUN_0884b248();
    if (iVar2 == 0) {
      cVar3 = *(char *)(param_1 + 0x281);
    }
    else {
      FUN_0884b268();
      iVar2 = FUN_0884c8f4();
      if (iVar2 == 0) {
        cVar3 = *(char *)(param_1 + 0x281);
      }
      else {
        *(undefined *)(param_1 + 0xb8) = 0;
        cVar3 = *(char *)(param_1 + 0x281);
      }
    }
    if (cVar3 == '\0') {
      if ((*(int *)(param_1 + 800) != 0) &&
         (iVar2 = FUN_0881a580(*(undefined4 *)(*(int *)(param_1 + 800) + 0x20c)), iVar2 != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_088a423c(param_1);
        cVar3 = *(char *)(param_1 + 0x2b0);
      }
      else {
        cVar3 = *(char *)(param_1 + 0x2b0);
      }
      if (cVar3 != '\0') {
        fVar7 = *(float *)(param_1 + 0x2b4);
        iVar2 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
        fVar8 = *(float *)(param_1 + 0x2b8);
        *(float *)(param_1 + 0x20) = fVar7 + (float)iVar2;
        iVar2 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
        *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
        *(float *)(param_1 + 0x28) = fVar8 + (float)iVar2;
        if (0xf < *(byte *)(param_1 + 0x2b1)) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2b4);
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2b8);
          *(undefined *)(param_1 + 0x2b0) = 0;
        }
      }
      FUN_088a4508(param_1);
      uVar5 = *(uint *)(param_1 + 0x380);
      if ((-1 < (int)uVar5) && (uVar5 < 3)) {
        param_1 = param_1 + *(short *)(&DAT_08a83e50 + uVar5 * 8);
        pcVar6 = (code *)(&PTR_LAB_08a83e54)[uVar5 * 2];
        if (*(short *)(&DAT_08a83e52 + uVar5 * 8) != 0) {
          psVar4 = (short *)(*(int *)(pcVar6 + param_1) + *(short *)(&DAT_08a83e52 + uVar5 * 8) * 8)
          ;
          pcVar6 = *(code **)(psVar4 + 2);
          param_1 = param_1 + *psVar4;
        }
        (*pcVar6)(param_1);
      }
    }
    else if (*(char *)(param_1 + 900) == '\0') {
      *(undefined *)(param_1 + 900) = 1;
      *(undefined *)(param_1 + 0x282) = 1;
      (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
    }
  }
  return;
}


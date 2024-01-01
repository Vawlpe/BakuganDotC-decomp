#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b48a8(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar3 = FUN_088be254();
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x398) == '\0')) {
    *(undefined4 *)(param_1 + 0x370) = in_V72;
    *(undefined4 *)(param_1 + 0x374) = in_V76;
    *(undefined4 *)(param_1 + 0x378) = in_V7A;
    *(undefined4 *)(param_1 + 0x37c) = in_V7E;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
  }
  FUN_088b4488(param_1);
  if (*(char *)(param_1 + 0x394) == '\0') {
    bVar2 = false;
    iVar3 = FUN_088abfa8(*(float *)(param_1 + 0x1f0) * 5.0,0x457a0000,param_1,param_1,
                         param_1 + 0x238,param_1 + 0x283,0);
    *(bool *)(param_1 + 0x284) = iVar3 == 0;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
    if (*(char *)(param_1 + 0x281) == '\0') {
      if ((*(int *)(param_1 + 800) != 0) &&
         (iVar3 = FUN_0881a580(*(undefined4 *)(*(int *)(param_1 + 800) + 0x20c)), iVar3 != 0)) {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_088b4500(param_1);
        cVar1 = *(char *)(param_1 + 0x2b0);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x2b0);
      }
      if (cVar1 != '\0') {
        fVar7 = *(float *)(param_1 + 0x2b4);
        iVar3 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
        fVar8 = *(float *)(param_1 + 0x2b8);
        *(float *)(param_1 + 0x20) = fVar7 + (float)iVar3;
        iVar3 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
        *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
        *(float *)(param_1 + 0x28) = fVar8 + (float)iVar3;
        if (0xf < *(byte *)(param_1 + 0x2b1)) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2b4);
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2b8);
          *(undefined *)(param_1 + 0x2b0) = 0;
        }
      }
      FUN_088b47c0(param_1);
      uVar5 = *(uint *)(param_1 + 0x390);
      if ((-1 < (int)uVar5) && (uVar5 < 2)) {
        param_1 = param_1 + *(short *)(&DAT_08a852a8 + uVar5 * 8);
        pcVar6 = (code *)(&PTR_FUN_08a852ac)[uVar5 * 2];
        if (*(short *)(&DAT_08a852aa + uVar5 * 8) != 0) {
          psVar4 = (short *)(*(int *)(pcVar6 + param_1) + *(short *)(&DAT_08a852aa + uVar5 * 8) * 8)
          ;
          pcVar6 = *(code **)(psVar4 + 2);
          param_1 = param_1 + *psVar4;
        }
        (*pcVar6)(param_1);
      }
    }
    else if (*(char *)(param_1 + 0x394) == '\0') {
      *(undefined *)(param_1 + 0x394) = 1;
      *(undefined *)(param_1 + 0x282) = 1;
      *(undefined4 *)(param_1 + 0x338) = 500;
      (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x338);
    *(int *)(param_1 + 0x338) = iVar3 + -1;
    if (iVar3 < 1) {
      FUN_089de940(param_1,0);
    }
  }
  return;
}


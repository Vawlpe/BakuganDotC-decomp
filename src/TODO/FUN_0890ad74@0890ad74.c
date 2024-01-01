#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890ad74(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af47dc;
    if (DAT_08ac0e80 != 0) {
      if (*(int *)(DAT_08ac0e80 + 0x10) == 0) {
        iVar3 = *(int *)(DAT_08ac0e80 + 0x20);
      }
      else {
        FUN_089f8b18(*(int *)(DAT_08ac0e80 + 0x10));
        *(undefined4 *)(DAT_08ac0e80 + 0x10) = 0;
        iVar3 = *(int *)(DAT_08ac0e80 + 0x20);
      }
      if (iVar3 == 0) {
        iVar3 = *(int *)(DAT_08ac0e80 + 0x24);
      }
      else {
        FUN_089cec00(DAT_08ac5934);
        uVar2 = FUN_089fce94();
        FUN_089fd4a0(uVar2,DAT_08ac0e80 + 0x20,*(undefined4 *)(DAT_08ac0e80 + 0x20));
        *(undefined4 *)(DAT_08ac0e80 + 0x20) = 0;
        iVar3 = *(int *)(DAT_08ac0e80 + 0x24);
      }
      if (iVar3 == 0) {
        iVar3 = *(int *)(DAT_08ac0e80 + 0xc);
      }
      else {
        (**(code **)(*(int *)(iVar3 + 0x14) + 0xc))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 8),3);
        *(undefined4 *)(DAT_08ac0e80 + 0x24) = 0;
        iVar3 = *(int *)(DAT_08ac0e80 + 0xc);
      }
      if (iVar3 == 0) {
        cVar1 = *(char *)(param_1 + 0x239);
      }
      else {
        FUN_089eb250();
        cVar1 = *(char *)(param_1 + 0x239);
      }
      if (cVar1 != '\0') {
        iVar3 = 0xb;
        iVar4 = 0x2c;
        puVar5 = &UNK_08a9b244;
        do {
          iVar6 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar4);
          *(float *)(iVar6 + 0x60) = (float)(int)*(short *)(puVar5 + -0xdc);
          *(float *)(iVar6 + 100) = (float)(int)*(short *)(puVar5 + -0xda);
          *(undefined4 *)(iVar6 + 0x80) = in_V72;
          *(undefined4 *)(iVar6 + 0x84) = in_V76;
          *(undefined4 *)(iVar6 + 0x88) = in_V7A;
          *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
          *(undefined4 *)(iVar6 + 0x90) = in_V72;
          *(undefined4 *)(iVar6 + 0x94) = in_V76;
          *(undefined4 *)(iVar6 + 0x98) = in_V7A;
          *(undefined4 *)(iVar6 + 0x9c) = in_V7E;
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
          puVar5 = puVar5 + 0x14;
        } while (iVar3 < 0x11);
      }
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}


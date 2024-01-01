#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f3eb8(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (*(uint *)(param_1 + 0xe4) != param_2) {
    if (param_2 < 5) {
      if (param_2 == 1) {
        *(undefined **)(param_1 + 0x120) = &DAT_08aa3b10;
      }
      else if (param_2 == 2) {
        uVar7 = 0;
        puVar5 = &DAT_08aa3b50;
        puVar4 = (undefined4 *)(param_1 + 0xf0);
        do {
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[3];
          *puVar4 = *puVar5;
          puVar4[1] = uVar1;
          puVar4[2] = uVar2;
          puVar4[3] = uVar3;
          uVar7 = uVar7 + 1;
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 4;
        } while (uVar7 < 3);
        *(undefined4 **)(param_1 + 0x120) = (undefined4 *)(param_1 + 0xf0);
      }
      else if (param_2 == 3) {
        puVar4 = (undefined4 *)(param_1 + 0xf0);
        if (*(undefined **)(param_1 + 0x120) == &DAT_08aa3b30) {
          uVar7 = 0;
          puVar6 = &DAT_08aa3bb0;
          puVar5 = puVar4;
          do {
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *puVar5 = *puVar6;
            puVar5[1] = uVar1;
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 4;
          } while (uVar7 < 3);
        }
        else {
          uVar7 = 0;
          puVar6 = &DAT_08aa3b80;
          puVar5 = puVar4;
          do {
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *puVar5 = *puVar6;
            puVar5[1] = uVar1;
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 4;
          } while (uVar7 < 3);
        }
        *(undefined4 **)(param_1 + 0x120) = puVar4;
      }
      else if (param_2 == 4) {
        puVar4 = (undefined4 *)(param_1 + 0xf0);
        if (*(int *)(param_1 + 0xe0) == 4) {
          uVar7 = 0;
          puVar6 = &DAT_08aa3c10;
          puVar5 = puVar4;
          do {
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *puVar5 = *puVar6;
            puVar5[1] = uVar1;
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 4;
          } while (uVar7 < 3);
          *(undefined4 **)(param_1 + 0x120) = puVar4;
        }
        else {
          uVar7 = 0;
          puVar6 = &DAT_08aa3be0;
          puVar5 = puVar4;
          do {
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *puVar5 = *puVar6;
            puVar5[1] = uVar1;
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 4;
          } while (uVar7 < 3);
          *(undefined4 **)(param_1 + 0x120) = puVar4;
        }
      }
      else {
        *(undefined **)(param_1 + 0x120) = &DAT_08aa3af0;
      }
      *(uint *)(param_1 + 0xe4) = param_2;
    }
    else {
      *(uint *)(param_1 + 0xe4) = param_2;
    }
  }
  return;
}


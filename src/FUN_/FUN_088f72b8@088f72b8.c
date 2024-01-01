#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f72b8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  int local_70;
  int local_6c;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  
  if (*(short *)(param_1 + 0xb8) != -1) {
    local_70 = 0;
    local_6c = 0;
    local_60 = DAT_08abf8c0;
    iStack_5c = DAT_08abf8c4;
    iStack_58 = DAT_08abf8c8;
    iStack_54 = DAT_08abf8cc;
    local_50 = 0;
    local_4c = 0;
    if (*(int *)(param_1 + 0x104) != 0) {
      piVar5 = *(int **)(param_1 + 0x104);
      local_70 = *piVar5;
      local_6c = piVar5[1];
      local_60 = piVar5[4];
      iStack_5c = piVar5[5];
      iStack_58 = piVar5[6];
      iStack_54 = piVar5[7];
      local_50 = piVar5[8];
      local_4c = piVar5[9];
    }
    piVar5 = DAT_08abfc50[3];
    FUN_088f722c(param_1,param_1 + 0x104,piVar5,(int)*(short *)(param_1 + 0xb8));
    if (*(int *)(param_1 + 0x104) != 0) {
      if ((int)DAT_08abfc50[2] < 1) {
        piVar7 = &DAT_08b00bac;
        memset_jak(&DAT_08b00bac,0,4);
      }
      else {
        piVar7 = *DAT_08abfc50;
      }
      if (piVar5 == (int *)*piVar7) {
        if (*(int *)(param_1 + 0x104) == 0) {
          piVar5 = *(int **)(param_1 + 0x104);
        }
        else {
          if (*(int *)(param_1 + 0x108) == 0) {
            FUN_089d8634();
            uVar3 = FUN_089d81a4();
            FUN_089d816c(1);
            iVar4 = FUN_089d7d74(0x30,0,0);
            FUN_089d816c(uVar3);
            FUN_089d866c();
            iVar6 = 0;
            if (iVar4 != 0) {
              *(undefined4 *)(iVar4 + 0x10) = in_V72;
              *(undefined4 *)(iVar4 + 0x14) = in_V76;
              *(undefined4 *)(iVar4 + 0x18) = in_V7A;
              *(undefined4 *)(iVar4 + 0x1c) = in_V7E;
              iVar6 = iVar4;
            }
            *(int *)(param_1 + 0x108) = iVar6;
          }
          **(undefined4 **)(param_1 + 0x108) = **(undefined4 **)(param_1 + 0x104);
          *(undefined4 *)(*(int *)(param_1 + 0x108) + 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x104) + 4);
          *(undefined4 *)(*(int *)(param_1 + 0x108) + 0x20) =
               *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x20);
          iVar6 = *(int *)(param_1 + 0x108);
          iVar4 = *(int *)(param_1 + 0x104);
          uVar3 = *(undefined4 *)(iVar4 + 0x14);
          uVar1 = *(undefined4 *)(iVar4 + 0x18);
          uVar2 = *(undefined4 *)(iVar4 + 0x1c);
          *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar6 + 0x14) = uVar3;
          *(undefined4 *)(iVar6 + 0x18) = uVar1;
          *(undefined4 *)(iVar6 + 0x1c) = uVar2;
          *(undefined4 *)(*(int *)(param_1 + 0x108) + 0x24) =
               *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x24);
          piVar5 = *(int **)(param_1 + 0x104);
        }
      }
      else {
        FUN_088f722c(param_1,param_1 + 0x108,(int *)*piVar7,(int)*(short *)(param_1 + 0xb8));
        piVar5 = *(int **)(param_1 + 0x104);
      }
      if (local_70 == *piVar5) {
        if (local_6c == *(int *)(*(int *)(param_1 + 0x104) + 4)) {
          *(undefined4 *)(param_1 + 0x140) = 0;
          return;
        }
        iVar6 = *(int *)(param_1 + 0x140);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x140);
      }
      *(uint *)(param_1 + 0x140) = iVar6 + 1U;
      if (iVar6 + 1U < 5) {
        piVar5 = *(int **)(param_1 + 0x104);
        *piVar5 = local_70;
        piVar5[1] = local_6c;
        piVar5[4] = local_60;
        piVar5[5] = iStack_5c;
        piVar5[6] = iStack_58;
        piVar5[7] = iStack_54;
        piVar5[8] = local_50;
        piVar5[9] = local_4c;
      }
      else {
        *(int *)(param_1 + 0x110) = local_60;
        *(int *)(param_1 + 0x114) = iStack_5c;
        *(int *)(param_1 + 0x118) = iStack_58;
        *(int *)(param_1 + 0x11c) = iStack_54;
        if (*(int *)(param_1 + 0x100) != 0) {
          iVar6 = **(int **)(param_1 + 0x100);
          (**(code **)(iVar6 + 0xc))
                    ((int)*(int **)(param_1 + 0x100) + (int)*(short *)(iVar6 + 8),param_1 + 0x104);
        }
        *(undefined4 *)(param_1 + 0x140) = 0;
      }
    }
  }
  return;
}


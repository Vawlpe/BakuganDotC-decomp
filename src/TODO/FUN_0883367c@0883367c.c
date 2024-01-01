#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883367c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  iVar4 = FUN_08833568();
  if (iVar4 == -1) {
    return;
  }
  iVar4 = FUN_088335bc(param_1,0,param_2);
  iVar5 = FUN_088335bc(param_1,1,param_2);
  iVar6 = FUN_088335bc(param_1,2,param_2);
  iVar8 = param_1 + param_2 * 4;
  switch(*(undefined4 *)(iVar8 + 0x588)) {
  case 0:
    *(undefined4 *)(iVar8 + 0x568) = 0;
    *(undefined4 *)(iVar8 + 0x5a8) = 0;
    *(undefined4 *)(iVar8 + 0x578) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0;
    *(undefined4 *)(iVar5 + 0xbc) = 0;
    *(undefined4 *)(iVar6 + 0xbc) = 0;
    iVar7 = *(int *)(iVar8 + 0x588);
    *(undefined *)(param_1 + param_2 + 0x560) = 0;
    *(int *)(iVar8 + 0x588) = iVar7 + 1;
  case 1:
    iVar7 = FUN_088335e0(param_1,param_2);
    if (iVar7 != 0) {
      *(int *)(iVar8 + 0x588) = *(int *)(iVar8 + 0x588) + 1;
LAB_08833784:
      iVar7 = *(int *)(iVar8 + 0x588);
      *(undefined *)(param_1 + param_2 + 0x560) = 0;
      *(undefined *)(param_1 + param_2 + 0x564) = 0;
      *(int *)(iVar8 + 0x588) = iVar7 + 1;
LAB_088337a4:
      if (*(float *)(iVar8 + 0x5a8) < 1.0) {
        fVar9 = *(float *)(iVar8 + 0x5a8) + 0.2;
        *(float *)(iVar8 + 0x5a8) = fVar9;
        *(float *)(iVar4 + 0xbc) = fVar9;
      }
      else {
        *(undefined4 *)(iVar8 + 0x5a8) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
        *(int *)(iVar8 + 0x588) = *(int *)(iVar8 + 0x588) + 1;
LAB_08833824:
        iVar7 = param_1 + param_2 * 0x20;
        uVar1 = *(undefined4 *)(iVar7 + 0x5c4);
        uVar2 = *(undefined4 *)(iVar7 + 0x5c8);
        uVar3 = *(undefined4 *)(iVar7 + 0x5cc);
        *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar7 + 0x5c0);
        *(undefined4 *)(iVar5 + 100) = uVar1;
        *(undefined4 *)(iVar5 + 0x68) = uVar2;
        *(undefined4 *)(iVar5 + 0x6c) = uVar3;
        uVar1 = *(undefined4 *)(iVar7 + 0x5d4);
        uVar2 = *(undefined4 *)(iVar7 + 0x5d8);
        uVar3 = *(undefined4 *)(iVar7 + 0x5dc);
        *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(iVar7 + 0x5d0);
        *(undefined4 *)(iVar6 + 100) = uVar1;
        *(undefined4 *)(iVar6 + 0x68) = uVar2;
        *(undefined4 *)(iVar6 + 0x6c) = uVar3;
        *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
        *(undefined4 *)(iVar6 + 0xbc) = 0x3f800000;
        iVar7 = *(int *)(iVar8 + 0x578) + 1;
        *(int *)(iVar8 + 0x578) = iVar7;
        if (*(int *)(iVar8 + 0x568) <= iVar7) {
          *(undefined4 *)(iVar8 + 0x578) = *(undefined4 *)(iVar8 + 0x568);
          *(undefined4 *)(iVar8 + 0x598) = 0;
          *(int *)(iVar8 + 0x588) = *(int *)(iVar8 + 0x588) + 1;
switchD_08833710_caseD_5:
          iVar7 = FUN_088335e0(param_1,param_2);
          if (iVar7 == 0) {
            iVar7 = *(int *)(iVar8 + 0x598) + -1;
            *(int *)(iVar8 + 0x598) = iVar7;
            if (iVar7 < 1) {
              *(int *)(iVar8 + 0x588) = *(int *)(iVar8 + 0x588) + 1;
LAB_08833904:
              *(float *)(iVar5 + 100) = *(float *)(iVar5 + 100) - 1.0;
              *(float *)(iVar6 + 100) = *(float *)(iVar6 + 100) - 1.0;
              *(float *)(iVar5 + 0xbc) = *(float *)(iVar5 + 0xbc) - 0.08;
              *(float *)(iVar6 + 0xbc) = *(float *)(iVar6 + 0xbc) - 0.08;
              *(float *)(iVar4 + 0xbc) = *(float *)(iVar4 + 0xbc) - 0.08;
              if (*(float *)(iVar5 + 0xbc) <= 0.0) {
                *(undefined4 *)(iVar4 + 0xbc) = 0;
                *(undefined4 *)(iVar5 + 0xbc) = 0;
                *(undefined4 *)(iVar6 + 0xbc) = 0;
                *(int *)(iVar8 + 0x588) = *(int *)(iVar8 + 0x588) + 1;
              }
              else if (*(float *)(iVar5 + 0xbc) <= 0.8) {
                *(undefined *)(param_1 + param_2 + 0x560) = 1;
              }
            }
          }
          else {
            *(undefined4 *)(iVar8 + 0x588) = 2;
          }
        }
      }
    }
    break;
  case 2:
    goto LAB_08833784;
  case 3:
    goto LAB_088337a4;
  case 4:
    goto LAB_08833824;
  case 5:
    goto switchD_08833710_caseD_5;
  case 6:
    goto LAB_08833904;
  case 7:
    if (*(char *)(param_1 + param_2 + 0x564) != '\0') {
      *(undefined4 *)(iVar8 + 0x588) = 0;
    }
  }
  return;
}


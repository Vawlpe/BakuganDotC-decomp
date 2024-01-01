#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c41b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 4));
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      iVar3 = _DONE_NotZero_DAT_08AC61E8();
      if (iVar3 != 0) {
        uVar6 = FUN_089fce94();
        iVar4 = param_1 + 0x2c;
        iVar3 = FUN_089fd350(uVar6,iVar4);
        if (iVar3 == 0) {
          uVar6 = FUN_089fce94();
          iVar3 = FUN_089fd150(uVar6,param_1 + 8,iVar4,*(undefined4 *)(param_1 + 0xc),1,0);
          *(int *)(param_1 + 8) = iVar3;
          if (iVar3 != 0) {
            FUN_089fbac8(iVar3,4);
            *(undefined4 *)(param_1 + 0x28) = 1;
          }
        }
        else {
          iVar1 = FUN_089fbbe0(iVar3);
          if (iVar1 != 0) {
            uVar6 = FUN_089fce94();
            uVar6 = FUN_089fd150(uVar6,param_1 + 8,iVar4,0,0,0);
            *(undefined4 *)(param_1 + 8) = uVar6;
            uVar6 = FUN_089fbd30(iVar3);
            *(undefined4 *)(param_1 + 0x10) = uVar6;
            if (*(char *)(param_1 + 0x15) == '\0') {
              uVar6 = FUN_089fbcb8(iVar3);
              *(undefined4 *)(param_1 + 0xc) = uVar6;
              *(undefined4 *)(param_1 + 0x28) = 999;
            }
            else {
              uVar7 = *(undefined4 *)(param_1 + 0xc);
              uVar8 = *(undefined4 *)(param_1 + 0x10);
              uVar5 = 99;
              uVar6 = _DONE_GetPtr_DAT_08AC51F8();
              uVar2 = FUN_089fbcb8(iVar3);
              iVar3 = FUN_089bcd4c(uVar6,uVar7,uVar2,uVar8,*(undefined4 *)(param_1 + 4));
              if (iVar3 != 0) {
                uVar5 = 999;
              }
              *(undefined4 *)(param_1 + 0x28) = uVar5;
            }
          }
        }
      }
      goto LAB_089c43ac;
    }
  }
  else if (iVar3 < 2) {
    if ((*(int *)(param_1 + 8) != 0) && (iVar3 = FUN_089fbbe0(*(int *)(param_1 + 8)), iVar3 != 0)) {
      uVar6 = *(undefined4 *)(param_1 + 8);
      if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0xc) == 1)) {
        uVar6 = FUN_089fbcb8(uVar6);
        *(undefined4 *)(param_1 + 0xc) = uVar6;
        uVar6 = *(undefined4 *)(param_1 + 8);
      }
      uVar6 = FUN_089fbd30(uVar6);
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    goto LAB_089c43ac;
  }
  *(undefined *)(param_1 + 0x17) = 1;
  if (*(int *)(param_1 + 0x20) == 2) {
    *(undefined4 *)(param_1 + 0x24) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_089c43ac:
  FUN_089bb790(*(undefined4 *)(param_1 + 4));
  return;
}


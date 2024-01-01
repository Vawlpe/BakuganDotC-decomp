#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089382f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x63c) != 0) {
    if (*(float *)(param_1 + 0x754) == 0.0) {
      iVar3 = *(int *)(param_1 + 0x63c);
    }
    else if (*(char *)(param_1 + 0x779) == '\0') {
      iVar3 = *(int *)(param_1 + 0x63c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x75c);
      iVar3 = 0;
      if (0.0 < *(float *)(param_1 + 0x754)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0x744);
          iVar4 = *(int *)(iVar4 + 4);
        } while ((float)iVar3 < *(float *)(param_1 + 0x754));
      }
      *(undefined *)(param_1 + 0x779) = 0;
      iVar3 = *(int *)(param_1 + 0x63c);
    }
    uVar1 = DAT_08b0019c;
    uVar5 = DAT_08b00198;
    uVar2 = DAT_08b00194;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar5;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x63c);
    uVar2 = FUN_089f2178(0x453b8000);
    FUN_089f5084(uVar5,uVar2);
  }
  return;
}


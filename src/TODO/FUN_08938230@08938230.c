#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08938230(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x638) != 0) {
    if (*(float *)(param_1 + 0x750) == 0.0) {
      iVar3 = *(int *)(param_1 + 0x638);
    }
    else if (*(char *)(param_1 + 0x778) == '\0') {
      iVar3 = *(int *)(param_1 + 0x638);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x758);
      iVar3 = 0;
      if (0.0 < *(float *)(param_1 + 0x750)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0x740);
          iVar4 = *(int *)(iVar4 + 4);
        } while ((float)iVar3 < *(float *)(param_1 + 0x750));
      }
      *(undefined *)(param_1 + 0x778) = 0;
      iVar3 = *(int *)(param_1 + 0x638);
    }
    uVar1 = DAT_08b0086c;
    uVar5 = DAT_08b00868;
    uVar2 = DAT_08b00864;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00860;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar5;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x638);
    uVar2 = FUN_089f2178(0x453b8000);
    FUN_089f5084(uVar5,uVar2);
  }
  return;
}


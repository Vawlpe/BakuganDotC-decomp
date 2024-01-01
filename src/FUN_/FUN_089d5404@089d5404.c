#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d5404(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = zz_sceWlanGetSwitchState();
  if (iVar1 != 0) {
    uVar2 = FUN_089d21a4();
    FUN_089d24c4(uVar2,0x80410b03);
    goto LAB_089d54ac;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar3 = 0;
  if (iVar1 < 5) {
    if (iVar1 < 4) {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    else {
LAB_089d545c:
      iVar3 = 1;
      iVar1 = *(int *)(param_1 + 0x48);
    }
  }
  else {
    if (iVar1 == 6) goto LAB_089d545c;
    iVar1 = *(int *)(param_1 + 0x48);
  }
  if ((2 < iVar1) && (iVar1 < 5)) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    FUN_089d4794(param_1,0x80410b03);
  }
LAB_089d54ac:
  uVar2 = FUN_089d21a4();
  FUN_089d26d0(uVar2);
  iVar1 = FUN_089d4038(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar3 = 1;
    if (iVar1 < 5) {
      if (iVar1 < 4) {
        return 1;
      }
    }
    else if (iVar1 != 6) {
      return 1;
    }
    FUN_089d4aa0(param_1,5);
  }
  return iVar3;
}


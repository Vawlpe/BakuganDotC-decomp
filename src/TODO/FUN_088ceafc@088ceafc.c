#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ceafc(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af2df4;
    iVar2 = FUN_089bfa40(500);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = FUN_089bf9c0();
      bVar1 = false;
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      if (*(int *)(param_1 + 0x74) == 0) {
        iVar2 = *(int *)(param_1 + 0xd8);
      }
      else {
        FUN_088e1184();
        iVar2 = *(int *)(param_1 + 0xd8);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd8);
    }
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    FUN_088c8e08(param_1 + 0x6c,2);
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088acc50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((DAT_08abd5bc == (int *)0x0) || (param_1 == 0)) ||
      (iVar1 = FUN_0885fc80(param_1), iVar1 == 0)) ||
     ((iVar1 = FUN_08860344(param_1), iVar1 == 0 || (iVar1 = *DAT_08abd5bc, iVar1 == 0)))) {
    return;
  }
  iVar2 = *(int *)(iVar1 + 0x14);
  do {
    *(undefined *)(iVar1 + 0x288) = 0;
    iVar2 = (**(code **)(iVar2 + 0x74))(iVar1 + *(short *)(iVar2 + 0x70));
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x7c))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x78));
      if (iVar2 == 0) {
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        iVar3 = *(int *)(iVar1 + 800);
        iVar2 = FUN_08860344(param_1);
        if (iVar3 == iVar2) {
          *(undefined *)(iVar1 + 0x288) = 1;
          goto LAB_088acd24;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
    else {
      iVar3 = *(int *)(iVar1 + 800);
      iVar2 = FUN_08860344(param_1);
      if (iVar3 == iVar2) {
        *(undefined *)(iVar1 + 0x288) = 1;
LAB_088acd24:
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
    if (iVar1 == 0) {
      return;
    }
    iVar2 = *(int *)(iVar1 + 0x14);
  } while( true );
}


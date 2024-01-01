#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a56d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_088660c8();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar3 = *piVar1;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x14);
    while( true ) {
      iVar2 = (**(code **)(iVar2 + 0x74))(iVar3 + *(short *)(iVar2 + 0x70));
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x6c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x68));
        if (iVar2 == 0) {
          iVar3 = *(int *)(iVar3 + 4);
        }
        else if (*(char *)(iVar3 + 0x4c1) == '\0') {
          if (*(int *)(iVar3 + 0x6b8) == *(int *)(param_1 + 0x18)) {
            iVar4 = iVar4 + 1;
            iVar3 = *(int *)(iVar3 + 4);
          }
          else {
            iVar3 = *(int *)(iVar3 + 4);
          }
        }
        else {
          iVar3 = *(int *)(iVar3 + 4);
        }
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x14);
    }
  }
  return iVar4;
}


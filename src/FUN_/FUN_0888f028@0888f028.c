#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888f028(float param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  
  iVar1 = FUN_0888efc8();
  if (((iVar1 != 0) || (piVar2 = (int *)FUN_088660c8(), piVar2 == (int *)0x0)) ||
     (iVar1 = *piVar2, iVar1 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0x1a0);
  do {
    if (*(int *)(iVar1 + 0xc) == *(int *)(iVar3 + 0xc)) {
LAB_0888f0d8:
      iVar1 = *(int *)(iVar1 + 4);
    }
    else {
      iVar3 = FUN_0888e104(param_2,iVar1);
      if (iVar3 == 0) {
        if (*(char *)(iVar1 + 0x4c1) == '\0') {
          if (*(char *)(iVar1 + 0x476) == '\0') {
            if ((*(char *)(iVar1 + 0x574) == '\0') &&
               (fVar4 = (float)FUN_0888eb14(param_2,iVar1), fVar4 < param_1)) {
              return 1;
            }
            goto LAB_0888f0d8;
          }
          iVar1 = *(int *)(iVar1 + 4);
        }
        else {
          iVar1 = *(int *)(iVar1 + 4);
        }
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = *(int *)(param_2 + 0x1a0);
  } while( true );
}


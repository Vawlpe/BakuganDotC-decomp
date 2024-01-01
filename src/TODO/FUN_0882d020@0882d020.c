#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0882d020(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_088660c8();
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    if (param_1 == -1) {
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      param_1 = FUN_0880d0ac(uVar2,0x13);
    }
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x14);
      do {
        iVar3 = (**(code **)(iVar3 + 0x54))(iVar4 + *(short *)(iVar3 + 0x50));
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*(int *)(iVar4 + 0x14) + 100))
                            (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x60));
          if (iVar3 != 0) {
            iVar3 = *(int *)(iVar4 + 0x150);
            goto LAB_0882d0b0;
          }
          iVar4 = *(int *)(iVar4 + 4);
        }
        else {
          iVar3 = *(int *)(iVar4 + 0x150);
LAB_0882d0b0:
          if (iVar3 == param_1) {
            uVar2 = FUN_08860188(iVar4);
            return uVar2;
          }
          iVar4 = *(int *)(iVar4 + 4);
        }
        if (iVar4 == 0) {
          return 0;
        }
        iVar3 = *(int *)(iVar4 + 0x14);
      } while( true );
    }
  }
  return 0;
}


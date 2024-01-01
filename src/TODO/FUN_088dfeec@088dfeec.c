#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dfeec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = *DAT_08abf618;
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x350);
    iVar3 = iVar2;
    fVar6 = 250000.0;
    while( true ) {
      iVar2 = iVar3;
      fVar5 = fVar6;
      if (*(char *)(iVar1 + 0x37) == '\0') {
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        iVar1 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x10c))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x108));
        if (((iVar1 == 0) || (fVar5 = (float)FUN_088e6078(iVar4,param_1), iVar2 = iVar4, iVar3 == 0)
            ) || (fVar5 < fVar6)) {
          iVar4 = *(int *)(iVar4 + 4);
        }
        else {
          iVar4 = *(int *)(iVar4 + 4);
          iVar2 = iVar3;
          fVar5 = fVar6;
        }
      }
      if (iVar4 == 0) break;
      iVar1 = *(int *)(iVar4 + 0x350);
      iVar3 = iVar2;
      fVar6 = fVar5;
    }
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x14) + 0x8c))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 0x88),param_1,param_2);
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0888e6a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  piVar1 = (int *)FUN_088660c8();
  if ((piVar1 == (int *)0x0) || (iVar3 = *piVar1, iVar3 == 0)) {
    return 0;
  }
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1a0);
  fVar6 = 0.0;
  do {
    fVar5 = fVar6;
    if (*(int *)(iVar2 + 0xc) == *(int *)(iVar3 + 0xc)) {
      iVar3 = *(int *)(iVar3 + 4);
    }
    else if (*(char *)(iVar3 + 0x4c1) == '\0') {
      if (*(char *)(iVar3 + 0x574) == '\0') {
        iVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x54))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x50));
        if (iVar2 == 0) {
          iVar3 = *(int *)(iVar3 + 4);
        }
        else {
          if ((*(char *)(iVar3 + 0x476) == '\0') &&
             (iVar2 = FUN_0888e104(param_1,iVar3), iVar2 == 0)) {
            fVar5 = (float)FUN_0888e3a8(0x447a0000,0x42b40000,param_1,iVar3);
            if ((fVar5 <= 0.0) || (fVar6 <= fVar5)) {
              if (iVar4 != 0) {
                iVar3 = *(int *)(iVar3 + 4);
                fVar5 = fVar6;
                goto LAB_0888e7e4;
              }
              iVar4 = *(int *)(iVar3 + 0xc);
            }
            else {
              iVar4 = *(int *)(iVar3 + 0xc);
            }
          }
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
LAB_0888e7e4:
    if (iVar3 == 0) {
      return iVar4;
    }
    iVar2 = *(int *)(param_1 + 0x1a0);
    fVar6 = fVar5;
  } while( true );
}


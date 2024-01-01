#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08865f24(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x614) != 0) {
    iVar4 = 0;
    iVar5 = param_1;
    iVar6 = param_1;
    if (0 < *(int *)(param_1 + 0x614)) {
      do {
        iVar1 = FUN_08860188(*(undefined4 *)(iVar5 + 0x628));
        if (iVar1 != 0) {
          iVar2 = FUN_0888c1c0((int)*(short *)(iVar6 + 0x618));
          if ((*(int *)(param_1 + 0x3c0) == 0) || (*(int *)(param_1 + 0x3c0) == iVar1)) {
            iVar7 = *param_2;
            iVar3 = FUN_0888c18c((int)*(short *)(iVar6 + 0x618));
            *param_2 = iVar7 + iVar3 * iVar2;
            iVar7 = *param_3;
            iVar3 = FUN_0888c158((int)*(short *)(iVar6 + 0x618));
            *param_3 = iVar7 + iVar3 * iVar2;
            iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
                              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50));
            if ((iVar3 == 0) &&
               (iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 100))
                                  (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x60)),
               iVar3 == 0)) {
              *(int *)(iVar1 + 0x3bc) = param_1;
            }
            else {
              FUN_08860170(iVar1,iVar2);
              *(int *)(iVar1 + 0x3bc) = param_1;
            }
            FUN_088898e4(param_1 + 0x434,iVar1,2,*(short *)(iVar6 + 0x618) + 0x23,0,0,6);
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + 2;
      } while (iVar4 < *(int *)(param_1 + 0x614));
    }
    *(undefined4 *)(param_1 + 0x614) = 0;
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bf3e8(int param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_089cec00(DAT_08ac5934);
  FUN_088bf3e0(param_1);
  FUN_088bf1e0(param_1);
  FUN_088efd88(*(undefined4 *)(param_1 + 0x790));
  if (param_2 != '\0') {
    FUN_089d8928(param_1 + 0x658);
    FUN_089d8928(param_1 + 0x670);
  }
  piVar2 = (int *)FUN_088dfa48();
  iVar4 = *piVar2;
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + 0x14c);
    while( true ) {
      if (cVar1 == '\0') {
        iVar3 = FUN_089d8870(iVar4);
        if (iVar4 != 0) {
          (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 8),3);
        }
      }
      else {
        iVar3 = *(int *)(iVar4 + 4);
        *(undefined4 *)(iVar4 + 0x350) = 0;
      }
      if (iVar3 == 0) break;
      cVar1 = *(char *)(iVar3 + 0x14c);
      iVar4 = iVar3;
    }
  }
  FUN_088f4848(*(undefined4 *)(param_1 + 0x78c));
  return;
}


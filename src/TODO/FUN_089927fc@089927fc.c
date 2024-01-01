#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089927fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined local_50;
  undefined local_4f;
  undefined2 local_4e;
  float local_4c;
  float local_48;
  
  iVar2 = *(int *)(param_1 + 0x94);
  FUN_089f51b8(iVar2);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0xb4) == -1) {
        iVar1 = *(int *)(param_1 + 0x104);
      }
      else {
        local_50 = 0;
        local_4f = 0;
        local_4e = 0;
        FUN_089eb2e0(&local_50,*(undefined4 *)(DAT_08ac3bf0 + *(int *)(iVar3 + 0xb4) * 4));
        local_4c = 0.0;
        local_48 = 0.0;
        FUN_089920b8(*(undefined4 *)(iVar3 + 0xb4),&local_4c,&local_48);
        local_4c = local_4c * 0.5;
        iVar1 = *(int *)(*(int *)(param_1 + 0x94) + 0x74);
        (**(code **)(iVar1 + 0x14))
                  ((float)iVar2 * 21.0 + 112.0 + 10.5 + local_4c,local_48 + 42.0,0,
                   *(int *)(param_1 + 0x94) + (int)*(short *)(iVar1 + 0x10),&local_50,1,0,0);
        iVar1 = *(int *)(param_1 + 0x104);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < iVar1);
  }
  return;
}


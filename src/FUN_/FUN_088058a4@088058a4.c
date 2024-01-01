#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088058a4(int param_1)

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
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 200) != -1) {
      local_50 = 0;
      local_4f = 0;
      local_4e = 0;
      FUN_089eb2e0(&local_50,*(undefined4 *)(DAT_08aac830 + *(int *)(iVar2 + 200) * 4));
      local_4c = 0.0;
      local_48 = 0.0;
      FUN_08804664(*(undefined4 *)(iVar2 + 200),&local_4c,&local_48);
      local_4c = local_4c * 0.5;
      iVar1 = *(int *)(*(int *)(param_1 + 0x94) + 0x74);
      (**(code **)(iVar1 + 0x14))
                ((float)iVar3 * 21.0 + 160.0 + 10.5 + local_4c,local_48 + 42.0,0,
                 *(int *)(param_1 + 0x94) + (int)*(short *)(iVar1 + 0x10),&local_50,1,0,0);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0xc);
  return;
}


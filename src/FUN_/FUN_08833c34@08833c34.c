#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08833c34(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_e0 [42];
  int local_38;
  
  memcpy_jak(aiStack_e0,&DAT_08aba000,0xa8);
  piVar4 = aiStack_e0 + param_4 * 3;
  if (param_3 == -1) {
    iVar2 = 0;
    do {
      if (*piVar4 == -1) {
        return;
      }
      iVar3 = *(int *)(param_2 + *piVar4 * 4);
      iVar2 = iVar2 + 1;
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      piVar4 = piVar4 + 1;
    } while (iVar2 < 3);
  }
  else {
    iVar2 = 0;
    local_38 = 10;
    do {
      if (*piVar4 == -1) {
        return;
      }
      piVar5 = (int *)(param_2 + *piVar4 * 4);
      bVar1 = true;
      FUN_089f4a90((float)((param_3 % local_38) / 5),(float)((param_3 % local_38) % 5),*piVar5);
      iVar3 = *piVar5;
      if ((param_3 == 0) && (0 < iVar2)) {
        bVar1 = false;
      }
      if (bVar1) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      }
      else {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      }
      param_3 = param_3 / local_38;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < 3);
  }
  return;
}


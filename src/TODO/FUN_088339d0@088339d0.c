#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088339d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08833568();
  iVar2 = param_1 + param_2;
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  param_1 = param_1 + param_2 * 4;
  if (*(char *)(iVar2 + 0x560) != '\0') {
    iVar1 = *(int *)(param_1 + 0x550) + 1;
    *(int *)(param_1 + 0x550) = iVar1;
    if (*(int *)(param_1 + 0x540) <= iVar1) {
      *(int *)(param_1 + 0x550) = *(int *)(param_1 + 0x540);
      *(undefined *)(iVar2 + 0x560) = 0;
      *(undefined *)(iVar2 + 0x564) = 1;
    }
  }
  return *(undefined4 *)(param_1 + 0x550);
}


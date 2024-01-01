#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0fc4c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar2 = param_1 * 0x24;
  if ((&DAT_08af1263)[iVar2] == '\0') {
    puVar3 = (&PTR_FUN_08af1258)[param_2 * 9];
    puVar4 = (&PTR_FUN_08af125c)[param_2 * 9];
    uVar1 = *(undefined2 *)(&DAT_08af1260 + param_2 * 0x24);
    (&DAT_08af1262)[iVar2] = (&DAT_08af1262)[param_2 * 0x24];
    (&PTR_FUN_08af1258)[param_1 * 9] = puVar3;
    (&PTR_FUN_08af125c)[param_1 * 9] = puVar4;
    *(undefined2 *)(&DAT_08af1260 + iVar2) = uVar1;
  }
  return;
}


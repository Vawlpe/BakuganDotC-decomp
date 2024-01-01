#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0fbcc(int param_1,undefined *param_2,undefined *param_3,undefined2 param_4,
                 undefined param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1 * 0x24;
  bVar2 = param_2 != (undefined *)0x0 && param_3 != (undefined *)0x0;
  if (param_2 == (undefined *)0x0) {
    (&PTR_FUN_08af1258)[param_1 * 9] = &LAB_08a10858;
  }
  else {
    (&PTR_FUN_08af1258)[param_1 * 9] = param_2;
  }
  if (param_3 != (undefined *)0x0) {
    (&DAT_08af1263)[iVar1] = bVar2;
    (&PTR_FUN_08af125c)[param_1 * 9] = param_3;
    *(undefined2 *)(&DAT_08af1260 + iVar1) = param_4;
    (&DAT_08af1262)[iVar1] = param_5;
    return;
  }
  (&DAT_08af1263)[iVar1] = bVar2;
  (&PTR_FUN_08af125c)[param_1 * 9] = &LAB_08a10860;
  *(undefined2 *)(&DAT_08af1260 + iVar1) = param_4;
  (&DAT_08af1262)[iVar1] = param_5;
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089d4144(int param_1)

{
  int iVar1;
  bool bVar2;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x30));
  bVar2 = *(char *)(param_1 + 0x1e) != '\0';
  if (bVar2) {
    bVar2 = false;
    iVar1 = FUN_089d49b0(param_1,0);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      bVar2 = true;
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x30));
  return bVar2;
}


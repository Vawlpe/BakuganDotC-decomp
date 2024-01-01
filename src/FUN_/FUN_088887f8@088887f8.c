#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088887f8(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = false;
  iVar3 = param_1 + param_2 * 6;
  if ((param_2 == 0x12) && (*(char *)(param_1 + 0x78) == '\0')) {
    *(undefined4 *)(param_1 + 0xf8) = 0x1e;
  }
  if (param_2 == 0x14) {
    if (*(char *)(param_1 + 0x84) == '\0') {
      *(undefined4 *)(param_1 + 0xfc) = 0xf;
    }
    cVar1 = *(char *)(iVar3 + 0xc);
  }
  else {
    cVar1 = *(char *)(iVar3 + 0xc);
  }
  if (cVar1 == '\0') {
    *(undefined *)(iVar3 + 0xc) = 1;
    *(short *)(iVar3 + 10) = (short)param_3;
    bVar2 = true;
  }
  else if (*(short *)(iVar3 + 10) < param_3) {
    *(short *)(iVar3 + 10) = (short)param_3;
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined2 *)(iVar3 + 8) = *(undefined2 *)(iVar3 + 10);
  }
  return;
}


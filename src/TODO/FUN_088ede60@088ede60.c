#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ede60(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 & 0xff) * 100;
  iVar2 = *(int *)(param_1 + 0x30) + iVar1;
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 4);
  *(uint *)(*(int *)(param_1 + 0x30) + iVar1 + 0x44) = param_3 & 0xffff;
  return;
}


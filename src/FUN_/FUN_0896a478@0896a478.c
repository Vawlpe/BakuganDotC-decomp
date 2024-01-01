#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896a478(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (param_2 & 0xff) * 6;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(byte *)(param_1 + 0x2b88) + iVar2) * 4 + 8);
  *(undefined4 *)(iVar3 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(byte *)(param_1 + 0x2b88) + iVar2) * 4 + 0x14
                  );
  iVar3 = param_1 + (param_2 & 0xff);
  *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
  if (*(char *)(iVar3 + 0x2a4c) == '2') {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(byte *)(param_1 + 0x2b88) + iVar2) * 4 + 8)
    ;
    *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar4 + 0xb8) = 0x3f000000;
    cVar1 = *(char *)(iVar3 + 0x2a4c);
  }
  else {
    cVar1 = *(char *)(iVar3 + 0x2a4c);
  }
  if (cVar1 == -0x6a) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(byte *)(param_1 + 0x2b88) + iVar2) * 4 +
                    0x14);
    *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08920c88(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  memset_jak((undefined *)(param_1 + 0x21dc),0,0x30);
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2137) != '\0') {
    iVar3 = 0;
    iVar2 = param_1;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x2a8);
      *(undefined4 *)(iVar4 + 0xc0) = 0;
      *(undefined4 *)(iVar4 + 0xc4) = 0;
      *(undefined4 *)(iVar4 + 200) = 0;
      *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
      if (*(char *)(param_1 + 0x75) == '\0') {
        if (iVar1 == *(char *)(param_1 + 0x78)) {
          *(undefined *)(iVar2 + 0x21dc) = param_2;
          if (*(char *)(iVar2 + 0x21dc) == '\x01') {
            *(undefined4 *)(iVar2 + 0x21e4) = 0x3f800000;
            uVar5 = (uint)*(byte *)(param_1 + 0x2137);
          }
          else {
            uVar5 = (uint)*(byte *)(param_1 + 0x2137);
          }
        }
        else {
          uVar5 = (uint)*(byte *)(param_1 + 0x2137);
        }
      }
      else {
        uVar5 = (uint)*(byte *)(param_1 + 0x2137);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < (int)uVar5);
  }
  return;
}


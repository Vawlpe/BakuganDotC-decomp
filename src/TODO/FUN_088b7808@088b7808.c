#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b7808(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  param_1[0x204] = -1;
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(param_1[0x20c] + iVar1) != 0) {
      if (param_2 == '\0') {
        iVar3 = *param_1;
      }
      else {
        *(undefined4 *)(*(int *)(param_1[0x20c] + iVar1) + 0xbc) = 0;
        iVar3 = *(int *)(param_1[0x20c] + iVar1);
        *(undefined4 *)(iVar3 + 0x60) = 0;
        *(undefined4 *)(iVar3 + 100) = 0xc47a0000;
        *(undefined4 *)(iVar3 + 0x68) = 0;
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        iVar3 = *param_1;
      }
      if (iVar3 == 0) {
        iVar3 = param_1[0x20c];
      }
      else {
        fVar4 = *(float *)(*param_1 + 0x40) * 10.0;
        iVar3 = *(int *)(param_1[0x20c] + iVar1);
        *(undefined4 *)(iVar3 + 0x7c) = 0;
        *(float *)(iVar3 + 0x70) = fVar4;
        *(float *)(iVar3 + 0x74) = fVar4;
        *(float *)(iVar3 + 0x78) = fVar4;
        iVar3 = param_1[0x20c];
      }
      *(undefined4 *)(*(int *)(iVar3 + iVar1) + 0x90) = 0x41f00000;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0xc0);
  if (*param_1 != 0) {
    param_1[0x208] = 0;
    param_1[0x209] = -0x3b860000;
    param_1[0x20a] = 0;
    param_1[0x20b] = 0;
  }
  return;
}


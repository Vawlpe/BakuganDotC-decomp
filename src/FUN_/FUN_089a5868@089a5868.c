#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a5868(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(param_1 + 0xd0) & 1) != 0) {
    cVar2 = *(char *)(param_2 + 7);
    if (*(int *)(DAT_08ac5934 + 0x1c) == 0) {
      fVar3 = 30.0;
    }
    else {
      fVar3 = 15.0;
    }
    if (cVar2 == '\0') {
      iVar1 = *(int *)(param_2 + 0x24);
    }
    else {
      if (*(char *)(param_2 + 0xb) != '\b') {
        *(char *)(param_2 + 0xb) = *(char *)(param_2 + 0xb) + '\x01';
        return;
      }
      iVar1 = *(int *)(param_2 + 0x24);
    }
    if (0.3 <= *(float *)(iVar1 + 0xc0)) {
      *(undefined *)(param_2 + 7) = 0;
      cVar2 = *(char *)(param_2 + 7);
    }
    if (cVar2 == '\0') {
      fVar3 = *(float *)(param_2 + 0x1c) + 1.0 / fVar3;
      fVar4 = fVar3 - 1.0;
      *(float *)(param_2 + 0x1c) = fVar3;
      *(float *)(param_1 + 0xbc) = *(float *)(param_2 + 0x20) - (1.0 - fVar4 * fVar4);
      fVar3 = *(float *)(param_2 + 0x1c) - 1.0;
      fVar3 = *(float *)(*(int *)(param_2 + 0x24) + 0x90) +
              (1.0 - fVar3 * fVar3) * (*(float *)(param_2 + 0x14) - 1.0);
      *(float *)(param_1 + 0x90) = fVar3;
      FUN_089f4954(fVar3,*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x94),
                   *(undefined4 *)(param_1 + 0x9c),param_1,0);
      *(float *)(param_1 + 0x68) = *(float *)(*(int *)(param_2 + 0x24) + 0x68) + 1.0;
      if (1.0 <= *(float *)(param_2 + 0x1c)) {
        *(undefined4 *)(param_2 + 0x1c) = 0;
        *(undefined *)(param_2 + 7) = 1;
        *(undefined *)(param_2 + 0xb) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
    }
  }
  return;
}


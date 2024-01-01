#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03c00(int param_1,int param_2,undefined param_3,int param_4,int param_5,
                 undefined param_6,int param_7,int param_8,int param_9)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_08a03668(0xa4);
  *piVar1 = (int)DAT_08af11d8;
  DAT_08af11d8 = piVar1;
  piVar1[1] = param_1;
  piVar1[2] = param_2;
  *(undefined *)(piVar1 + 3) = param_3;
  piVar1[4] = param_4;
  piVar1[5] = param_5;
  *(undefined *)((int)piVar1 + 0x32) = param_6;
  piVar1[6] = param_7;
  piVar1[7] = 0;
  piVar1[9] = param_9;
  piVar1[10] = 0;
  if (param_8 == 0) {
    iVar3 = *piVar1;
    piVar1[10] = piVar1[10] + 1;
  }
  else {
    *(int *)(param_9 + 0x28) = *(int *)(param_9 + 0x28) + 1;
    iVar3 = *piVar1;
  }
  *(char *)(piVar1 + 0xb) = (char)param_8;
  *(undefined *)((int)piVar1 + 0x2e) = 0;
  *(undefined *)((int)piVar1 + 0x2d) = 0;
  *(undefined *)((int)piVar1 + 0x2f) = 0;
  *(undefined *)((int)piVar1 + 0x31) = 0;
  *(undefined *)(piVar1 + 0xc) = 0;
  piVar1[0xd] = 0;
  *(undefined *)(piVar1 + 0xe) = 3;
  for (piVar2 = (int *)DAT_08af120c;
      (piVar2 != (int *)0x0 && ((*(char *)(piVar2 + 1) != '\0' || (piVar2[0x1a] != 0))));
      piVar2 = (int *)*piVar2) {
  }
  piVar1[8] = (int)piVar2;
  if ((iVar3 != 0) && ((int *)*(int *)(iVar3 + 0x20) == piVar2)) {
    FUN_08a03b24(piVar1);
  }
  return;
}


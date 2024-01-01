#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08976598(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 in_V7C;
  
  if ((*(int *)(param_1 + 0x51c) != 0) && (*(char *)(param_1 + 0x754) != '\0')) {
    bVar1 = *(byte *)(param_1 + 0x500);
    if (bVar1 == *(byte *)(param_1 + 0x502)) {
      fVar2 = *(float *)(param_1 + 0x75c);
    }
    else {
      *(byte *)(param_1 + 0x502) = bVar1;
      FUN_089e0694(0,*(int *)(param_1 + 0x51c),"Card_light");
      FUN_089e0694(0,*(undefined4 *)(param_1 + 0x51c),"Figure_light");
      FUN_089e0694(0,*(undefined4 *)(param_1 + 0x51c),"Sphere_light");
      FUN_089e0694(0,*(undefined4 *)(param_1 + 0x51c),"Theater_light");
      *(undefined4 *)(param_1 + 0x758) = 0;
      *(undefined4 *)(param_1 + 0x75c) = 0;
      bVar1 = *(byte *)(param_1 + 0x500);
      fVar2 = *(float *)(param_1 + 0x75c);
    }
    *(float *)(param_1 + 0x75c) = fVar2 + 0.01666667;
    uVar3 = vmul_s((fVar2 + 0.01666667) * 3.141593,in_V7C);
    fVar2 = (float)vcos_s(uVar3);
    *(float *)(param_1 + 0x758) = (1.0 - fVar2) * 0.5;
    if (bVar1 < 5) {
      if (bVar1 == 1) {
        FUN_089e0694(*(undefined4 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x51c),"Card_light")
        ;
      }
      else if (bVar1 == 2) {
        FUN_089e0694(*(undefined4 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x51c),
                     "Figure_light");
      }
      else if (bVar1 == 3) {
        FUN_089e0694(*(undefined4 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x51c),
                     "Theater_light");
      }
      else if (bVar1 != 4) {
        FUN_089e0694(*(undefined4 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x51c),
                     "Sphere_light");
      }
    }
  }
  return;
}


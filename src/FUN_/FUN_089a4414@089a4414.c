#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a4414(int param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
  
  iVar2 = *(int *)(param_1 + 0x69c);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0xe31);
    if (*(char *)(param_1 + 0xe30) == '\0') {
      if (bVar1 == 0) {
        FUN_089e0694(0,iVar2,"Mark_light");
        FUN_089e0694(0,*(undefined4 *)(param_1 + 0x69c),"Reset_light");
        FUN_089e0694(0,*(undefined4 *)(param_1 + 0x69c),"button_light");
        FUN_089e0694(0,*(undefined4 *)(param_1 + 0x69c),"Rock_light");
        *(undefined *)(param_1 + 0xe32) = 0x14;
        *(char *)(param_1 + 0xe31) = *(char *)(param_1 + 0xe31) + '\x01';
      }
      else if (bVar1 < 2) {
        if (*(char *)(param_1 + 0xe32) == '\0') {
          FUN_089e0694(0x3f800000,iVar2,"Reset_light");
          FUN_089e0694(0x3f800000,*(undefined4 *)(param_1 + 0x69c),"button_light");
          FUN_089e0694(0x3f800000,*(undefined4 *)(param_1 + 0x69c),"Rock_light");
          *(char *)(param_1 + 0xe31) = *(char *)(param_1 + 0xe31) + '\x01';
        }
        else {
          *(char *)(param_1 + 0xe32) = *(char *)(param_1 + 0xe32) + -1;
        }
      }
      else if (bVar1 < 3) {
        fVar3 = *(float *)(param_1 + 0xe38) + 0.03333334;
        *(float *)(param_1 + 0xe38) = fVar3;
        uVar4 = vmul_s(fVar3 * 3.141593,in_V7C);
        fVar3 = (float)vcos_s(uVar4);
        *(float *)(param_1 + 0xe34) = (1.0 - fVar3) * 0.5;
        FUN_089e0694(iVar2,"Mark_light");
      }
    }
    else if (bVar1 == 0) {
      FUN_089e0694(0,iVar2,"Mark_light");
      FUN_089e0694(0,*(undefined4 *)(param_1 + 0x69c),"Reset_light");
      FUN_089e0694(0,*(undefined4 *)(param_1 + 0x69c),"button_light");
      FUN_089e0694(0,*(undefined4 *)(param_1 + 0x69c),"Rock_light");
      *(char *)(param_1 + 0xe31) = *(char *)(param_1 + 0xe31) + '\x01';
    }
  }
  return;
}


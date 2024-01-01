#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d3028(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = *param_1;
  if (uVar3 < 5) {
    if (uVar3 == 1) {
      iVar2 = FUN_089d3160(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_089d3ab4();
        if (iVar2 == 0) {
          *param_1 = 3;
        }
        else {
          uVar1 = FUN_089d3adc();
          iVar2 = FUN_089d4144(uVar1);
          if (iVar2 != 0) {
            *param_1 = 3;
          }
        }
      }
      else {
        iVar2 = FUN_089cf8ec(0);
        if (iVar2 != 0) {
          zz_sceRtcGetCurrentClockLocalTime(&local_20);
          *(undefined4 *)(iVar2 + 0x100) = local_20;
          *(undefined4 *)(iVar2 + 0x104) = local_1c;
          *(undefined4 *)(iVar2 + 0x108) = local_18;
          *(undefined4 *)(iVar2 + 0x10c) = local_14;
          *param_1 = 2;
        }
      }
    }
    else if (uVar3 == 2) {
      FUN_089d125c();
      FUN_089d335c(param_1);
    }
    else if (uVar3 == 3) {
      *(undefined *)((int)param_1 + 0x12) = 0;
      iVar2 = FUN_089d32e0(param_1);
      if (iVar2 != 0) {
        *param_1 = 4;
      }
    }
    else if (uVar3 == 4) {
      FUN_089d2df4();
    }
    else {
      *param_1 = 1;
    }
  }
  return;
}


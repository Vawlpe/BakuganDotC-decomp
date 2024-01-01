#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b07d8(int param_1)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  
  iVar1 = FUN_088abfa8(*(float *)(param_1 + 0x1f0) * 5.0,0x451c4000,param_1,param_1,param_1 + 0x238,
                       param_1 + 0x283,0);
  *(bool *)(param_1 + 0x284) = iVar1 == 0;
  FUN_089dfc04(param_1);
  FUN_089dfdb0(param_1);
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
  iVar1 = FUN_0884b248();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x330);
  }
  else {
    iVar1 = FUN_0884b268();
    if (*(int *)(iVar1 + 0x440) == 6) {
      *(undefined *)(param_1 + 0xb8) = 0;
      if (*(char *)(param_1 + 0x32c) == '\x01') {
        *(undefined4 *)(param_1 + 0x228) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        FUN_089e0a70(param_1,&LAB_088b060c,0);
        *(undefined *)(param_1 + 0x32c) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x32c) == '\0') {
      *(undefined4 *)(param_1 + 0x228) = 0x3f7fbe77;
      FUN_089e0a70(param_1,&LAB_088b05ec,0);
      *(undefined *)(param_1 + 0x32c) = 1;
    }
    iVar1 = *(int *)(param_1 + 0x330);
  }
  if ((-1 < iVar1) && (iVar1 == 0)) {
    param_1 = param_1 + *(short *)(&DAT_08a850d8 + iVar1 * 8);
    pcVar3 = (code *)PTR_LAB_08a850dc;
    if (*(short *)(&DAT_08a850da + iVar1 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar3 + param_1) + *(short *)(&DAT_08a850da + iVar1 * 8) * 8);
      pcVar3 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar3)(param_1);
  }
  return;
}


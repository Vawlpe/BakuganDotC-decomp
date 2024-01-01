#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5e7c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    memset_jak(param_2,0,param_3 << 2);
  }
  iVar1 = FUN_089d6150(param_1);
  if ((iVar1 != 0) && (*(char *)((int)param_1 + 0x42) != '\0')) {
    iVar1 = param_1[0xf];
    iVar3 = param_1[0xd] + (0x800 - iVar1) * 4;
    iVar4 = param_3 * 4;
    if (iVar1 <= param_3) {
      if (iVar1 < 1) {
        uVar2 = *param_1;
      }
      else {
        if (param_2 != 0) {
          memcpy_jak(param_2,iVar3,iVar1 * 4);
          param_2 = param_2 + iVar1 * 4;
          iVar4 = iVar4 + iVar1 * -4;
          iVar1 = param_1[0xf];
        }
        param_3 = param_3 - iVar1;
        param_1[0xf] = 0;
        uVar2 = *param_1;
      }
      iVar1 = zz_scePsmfPlayerGetAudioData(uVar2,param_1[0xd]);
      if (iVar1 == 0) {
        iVar3 = param_1[0xd];
        param_1[0xf] = param_1[0xf] + 0x800;
      }
      else {
        iVar4 = 0;
      }
    }
    if (0 < iVar4) {
      if (param_2 != 0) {
        memcpy_jak(param_2,iVar3,iVar4);
      }
      param_1[0xf] = param_1[0xf] - param_3;
    }
  }
  return;
}


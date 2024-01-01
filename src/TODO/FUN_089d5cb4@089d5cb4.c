#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5cb4(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_089d6150();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = zz_scePsmfPlayerGetCurrentStatus(*param_1);
  if (iVar2 < 5) {
    if (3 < iVar2) {
      iVar2 = FUN_089d61b4(param_1);
      if (iVar2 != 0) {
        return;
      }
      if (*(char *)((int)param_1 + 0x42) == '\0') {
        return;
      }
      iVar2 = param_1[0xe];
      param_1[0xe] = iVar2 + 1;
      if (1 < iVar2 + 1) {
        param_1[0xe] = 0;
      }
      *(undefined4 *)(param_1[4] + 4) = param_1[param_1[0xe] + 0xb];
      iVar2 = zz_scePsmfPlayerGetVideoData(*param_1,param_1[4]);
      param_1[8] = iVar2;
      if (iVar2 == 0) {
        if (param_1[0x12] == 0) {
          param_1[0x12] = param_1[0x12] + 1;
          return;
        }
        *(undefined *)(param_1 + 0x11) = 1;
        return;
      }
      if (iVar2 == -0x7f9e9ff4) {
        return;
      }
      DAT_08ac5b78 = DAT_08ac5b78 + 1;
      return;
    }
    cVar1 = *(char *)((int)param_1 + 0x43);
  }
  else {
    if (iVar2 == 0x200) goto LAB_089d5d14;
    cVar1 = *(char *)((int)param_1 + 0x43);
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_089d5d14:
  iVar2 = FUN_089d61bc(param_1);
  if (iVar2 != 0) {
    *(undefined *)((int)param_1 + 0x42) = 0;
  }
  return;
}


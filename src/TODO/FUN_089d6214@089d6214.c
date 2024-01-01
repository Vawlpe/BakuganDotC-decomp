#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d6214(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  *(undefined *)((int)param_1 + 0x43) = 1;
  iVar2 = zz_scePsmfPlayerGetCurrentStatus(*param_1);
  bVar1 = iVar2 < 0x200;
  if (iVar2 < 0x100) {
    bVar1 = iVar2 < 5;
    if (iVar2 < 0) {
      return;
    }
    if (!bVar1) {
      return;
    }
    if (iVar2 == 0) goto LAB_089d62ec;
    if (iVar2 == 1) {
      iVar2 = zz_scePsmfPlayerDelete(*param_1);
      if (iVar2 != 0) {
        return;
      }
      *(undefined *)(param_1 + 0x10) = 0;
      FUN_089d61a0(param_1,0);
      return;
    }
    if (iVar2 == 2) {
      zz_scePsmfPlayerReleasePsmf(*param_1);
      return;
    }
    if (iVar2 == 3) {
      return;
    }
    if (iVar2 == 4) goto LAB_089d62ec;
  }
  if (bVar1) {
    if (0x100 < iVar2) {
      return;
    }
  }
  else if (0x200 < iVar2) {
    return;
  }
LAB_089d62ec:
  iVar2 = zz_scePsmfPlayerStop(*param_1);
  if (iVar2 == 0) {
    param_1[8] = 0x8061600c;
    param_1[0xf] = 0;
    *(undefined *)(param_1 + 0x11) = 0;
    *(undefined *)((int)param_1 + 0x41) = 1;
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c43d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (iVar2 < 1) {
        zz_sceKernelDcacheWritebackInvalidateRange
                  (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
        iVar2 = zz_sceAtracGetAtracID(0x1000);
        if (-1 < iVar2) {
          *(int *)(param_1 + 0xac) = iVar2;
          iVar2 = zz_sceAtracSetData(iVar2,*(undefined4 *)(param_1 + 0xc),
                                     *(undefined4 *)(param_1 + 0x10));
          if (iVar2 == -0x7f9cfff9) {
            zz_sceAtracReleaseAtracID(*(undefined4 *)(param_1 + 0xac));
            uVar1 = zz_sceAtracGetAtracID(0x1001);
            *(undefined4 *)(param_1 + 0xac) = uVar1;
            iVar2 = zz_sceAtracSetData(uVar1,*(undefined4 *)(param_1 + 0xc),
                                       *(undefined4 *)(param_1 + 0x10));
          }
          if (iVar2 < 0) {
            zz_sceAtracReleaseAtracID(*(undefined4 *)(param_1 + 0xac));
          }
          else {
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
        }
      }
      else {
        iVar2 = zz_sceAtracIsSecondBufferNeeded(*(undefined4 *)(param_1 + 0xac));
        if ((-1 < iVar2) && (iVar2 == 0)) {
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        }
      }
      goto LAB_089c45a0;
    }
  }
  else {
    if (iVar2 < 3) {
      iVar2 = zz_sceAtracGetSoundSample
                        (*(undefined4 *)(param_1 + 0xac),param_1 + 0xb8,param_1 + 0xbc,
                         param_1 + 0xc0);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      goto LAB_089c45a0;
    }
    if (iVar2 < 4) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar2 = zz_sceAtracGetNextSample(*(undefined4 *)(param_1 + 0xac),&local_20);
      if ((-1 < iVar2) &&
         (iVar2 = zz_sceAtracGetOutputChannel(*(undefined4 *)(param_1 + 0xac),&local_1c), -1 < iVar2
         )) {
        zz_sceAtracGetRemainFrame(*(undefined4 *)(param_1 + 0xac),&local_18);
        if (*(char *)(param_1 + 0x1b) == '\0') {
          *(undefined *)(param_1 + 0x18) = *(undefined *)(param_1 + 0x19);
          if (*(char *)(param_1 + 0x18) == '\0') {
            iVar2 = *(int *)(param_1 + 0x28);
          }
          else {
            zz_sceAtracSetLoopNum(*(undefined4 *)(param_1 + 0xac),0xffffffff);
            iVar2 = *(int *)(param_1 + 0x28);
          }
        }
        else {
          *(undefined *)(param_1 + 0x19) = *(undefined *)(param_1 + 0x18);
          iVar2 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar2 + 1;
      }
      goto LAB_089c45a0;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_089c45a0:
  FUN_089bb790(*(undefined4 *)(param_1 + 4));
  return;
}


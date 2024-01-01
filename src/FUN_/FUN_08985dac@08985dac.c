#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985dac(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xefc) != '\0') {
    bVar1 = *(byte *)(param_1 + 0xefd);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (120.0 <= (float)(uint)*(ushort *)(param_1 + 0xefe)) {
          *(undefined2 *)(param_1 + 0xefe) = 0;
          *(undefined *)(param_1 + 0xefd) = 1;
        }
        else {
          *(ushort *)(param_1 + 0xefe) = *(ushort *)(param_1 + 0xefe) + 1;
        }
      }
      else {
        FUN_089f3dd4(*(undefined4 *)
                      (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xcc));
        *(undefined4 *)(param_1 + 0xf04) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xcc) + 0x90);
        FUN_089a5408(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xcc),param_1 + 0x86c,3);
        *(char *)(param_1 + 0xefd) = *(char *)(param_1 + 0xefd) + '\x01';
      }
    }
    else if (bVar1 < 3) {
      iVar2 = FUN_089a91a0(*(float *)(param_1 + 0xf04),*(float *)(param_1 + 0xf04) * 1.4,0x42700000,
                           1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xcc),param_1 + 0x86c,3);
      if (iVar2 != 0) {
        *(char *)(param_1 + 0xefd) = *(char *)(param_1 + 0xefd) + '\x01';
      }
    }
    else if (bVar1 < 4) {
      if (15.0 <= (float)(uint)*(ushort *)(param_1 + 0xefe)) {
        *(undefined2 *)(param_1 + 0xefe) = 0;
        *(undefined *)(param_1 + 0xefd) = 1;
      }
      else {
        *(ushort *)(param_1 + 0xefe) = *(ushort *)(param_1 + 0xefe) + 1;
      }
    }
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0896e490(int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x77) == '\x02') {
    FUN_0896e06c(param_1);
    iVar2 = FUN_089a50c0(0);
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) +
                     ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6) * 4 +
                     (uint)*(byte *)(param_1 + 0x2a50) * 0xc + 8);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      iVar2 = 0;
      cVar1 = *(char *)(param_1 + 0x29be);
      while( true ) {
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b88) + cVar1 * 6 +
                  (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4) + 0x90) = 0x3f800000;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) +
                        ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6 +
                        (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4);
        *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 0x90);
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6 +
                  (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4) + 0x9c) = 0;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) +
                        ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6 +
                        (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4);
        FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                     *(undefined4 *)(iVar4 + 0x9c),iVar4,0);
        iVar2 = iVar2 + 1;
        if (2 < iVar2) break;
        cVar1 = *(char *)(param_1 + 0x29be);
      }
      return 1;
    }
    *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xb0) = 0x3e99999a;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3e99999a;
    *(undefined4 *)(iVar4 + 0xb8) = 0x3e99999a;
    iVar2 = 0;
    cVar1 = *(char *)(param_1 + 0x29be);
    while( true ) {
      pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                                 ((uint)*(byte *)(param_1 + 0x2b88) + cVar1 * 6 +
                                 (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4) + 0x90);
      *pfVar3 = *pfVar3 + 0.1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6 +
                      (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4);
      *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 0x90);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6 +
                (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4) + 0x9c) = 0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6 +
                      (uint)*(byte *)(param_1 + 0x2a50) * 3) * 4 + iVar2 * 4);
      FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                   *(undefined4 *)(iVar4 + 0x9c),iVar4,0);
      iVar2 = iVar2 + 1;
      if (2 < iVar2) break;
      cVar1 = *(char *)(param_1 + 0x29be);
    }
  }
  else {
    iVar2 = FUN_089a50c0(0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0898e124(int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar2 = FUN_089a50c0(0);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xe7b) * 0xc + 0x48);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
    iVar2 = 0;
    cVar1 = *(char *)(param_1 + 0xe7b);
    while( true ) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + cVar1 * 0xc + 0x40) + 0x90) =
           0x3f800000;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + *(char *)(param_1 + 0xe7b) * 0xc + 0x40) +
       0x94) = 0x40000000;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + *(char *)(param_1 + 0xe7b) * 0xc + 0x40) +
       0x9c) = 0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + *(char *)(param_1 + 0xe7b) * 0xc +
                      0x40);
      FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                   *(undefined4 *)(iVar4 + 0x9c),iVar4,0);
      iVar2 = iVar2 + 1;
      if (2 < iVar2) break;
      cVar1 = *(char *)(param_1 + 0xe7b);
    }
    return 1;
  }
  *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0xb0) = 0x3e99999a;
  *(undefined4 *)(iVar4 + 0xb4) = 0x3e99999a;
  *(undefined4 *)(iVar4 + 0xb8) = 0x3e99999a;
  iVar2 = 0;
  cVar1 = *(char *)(param_1 + 0xe7b);
  while( true ) {
    pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + cVar1 * 0xc + 0x40) + 0x90);
    *pfVar3 = *pfVar3 + 0.1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + *(char *)(param_1 + 0xe7b) * 0xc + 0x40)
    ;
    *(float *)(iVar4 + 0x94) = *(float *)(iVar4 + 0x90) * 2.0;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + *(char *)(param_1 + 0xe7b) * 0xc + 0x40) +
     0x9c) = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + *(char *)(param_1 + 0xe7b) * 0xc + 0x40)
    ;
    FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                 *(undefined4 *)(iVar4 + 0x9c),iVar4,0);
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    cVar1 = *(char *)(param_1 + 0xe7b);
  }
  return 0;
}


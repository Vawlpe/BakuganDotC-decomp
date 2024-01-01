#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893e4ac(int param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x7f8);
  if (fVar2 < 1.0) {
    fVar2 = fVar2 + 0.2;
    *(float *)(param_1 + 0x7f8) = fVar2;
  }
  fVar2 = fVar2 * 0.1 + 1.0;
  if (1.1 < fVar2) {
    fVar2 = 1.1;
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 4) + 0x68) =
         0xc2c80000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 0x50));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 0x50) + 0x68) = 0xc2cc0000
    ;
    FUN_089a51fc(fVar2,fVar2,0,**(undefined4 **)(param_1 + 0x1c));
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x68) = 0xc2ca0000;
  }
  else {
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x2c));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x2c) + 0x68) = 0xc2c80000
    ;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x80));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x80) + 0x68) = 0xc2cc0000
    ;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x94));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x94) + 0x68) = 0xc2ca0000;
  }
  return;
}


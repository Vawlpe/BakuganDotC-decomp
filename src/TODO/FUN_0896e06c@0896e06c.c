#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896e06c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x2a5c);
  if (bVar1 == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b82) + (int)*(char *)(param_1 + 0x29be)) * 4);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar3 = (int)*(char *)(param_1 + 0x29be);
    cVar2 = *(char *)(param_1 + iVar3 + 0x2a4c);
    if (cVar2 == '2') {
      memset_jak((undefined *)(param_1 + 0x2a5c),0,0x14);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b82) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4) + 0xbc)
           = 0x3f800000;
      FUN_089f4a90(0,0,*(undefined4 *)
                        (*(int *)(param_1 + 0x1c) +
                        ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4))
      ;
      iVar3 = (int)*(char *)(param_1 + 0x29be);
      uVar4 = *(undefined4 *)
               (*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(byte *)(param_1 + 0x2b84) + iVar3) * 4)
               + 0xbc);
      *(undefined *)(param_1 + 0x2a5c) = 1;
      *(undefined4 *)(param_1 + 0x2a64) = uVar4;
    }
    else if (cVar2 == -0x6a) {
      memset_jak((undefined *)(param_1 + 0x2a5c),0,0x14);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b82) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4) + 0xbc)
           = 0x3f800000;
      FUN_089f4a90(0,*(undefined4 *)
                      (*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4));
      iVar3 = (int)*(char *)(param_1 + 0x29be);
      uVar4 = *(undefined4 *)
               (*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(byte *)(param_1 + 0x2b84) + iVar3) * 4)
               + 0xbc);
      *(undefined *)(param_1 + 0x2a5c) = 2;
      *(undefined4 *)(param_1 + 0x2a64) = uVar4;
    }
    if (*(char *)(param_1 + 0x2a5c) != '\0') {
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(byte *)(param_1 + 0x2b8a) + iVar3 * 2) * 4) +
       0xbc) = 0x3f800000;
    }
  }
  else if (bVar1 < 2) {
    if (*(char *)(param_1 + *(char *)(param_1 + 0x29be) + 0x2a4c) == '2') {
      FUN_0896cde4(param_1);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b82) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                ((uint)*(byte *)(param_1 + 0x2b8a) + *(char *)(param_1 + 0x29be) * 2) * 4) + 0xbc) =
           0x3f800000;
      *(undefined *)(param_1 + 0x2a5c) = 0;
    }
  }
  else if (bVar1 < 3) {
    if (*(char *)(param_1 + *(char *)(param_1 + 0x29be) + 0x2a4c) == -0x6a) {
      FUN_0896cde4(param_1);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b82) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                ((uint)*(byte *)(param_1 + 0x2b8a) + *(char *)(param_1 + 0x29be) * 2) * 4) + 0xbc) =
           0x3f800000;
      *(undefined *)(param_1 + 0x2a5c) = 0;
    }
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089720e8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined *ptr;
  undefined *ptr_00;
  int iVar7;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0xbb4) = 0;
  uVar5 = 0;
  uVar2 = (uint)*(char *)(param_1 + 0x74);
  iVar6 = 0;
  ptr = (undefined *)(param_1 + 0x550);
  ptr_00 = (undefined *)(param_1 + 0x758);
  iVar7 = param_1;
  do {
    if (uVar5 < 6) {
      iVar3 = *(int *)(param_1 + 0x1c) + iVar6;
      if ((uVar5 == 4) || (uVar5 == 5)) {
        uVar4 = *(undefined4 *)(iVar3 + 0xb0);
        if (uVar5 == uVar2) {
          FUN_089714a8(param_1,uVar4,1);
          FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xb0),1);
        }
        else {
          FUN_089714a8(param_1,uVar4,0);
          FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xb0),0);
        }
        memset_jak(ptr_00,0,0x28);
        FUN_089a51fc(0x3f800000,0x3f800000,0,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xb0));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xb0) + 0x68) =
             *(undefined4 *)(iVar7 + 0xa60);
        FUN_089a51fc(0x3f800000,0x3f800000,0,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xb8));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xb8) + 0x68) =
             *(undefined4 *)(iVar7 + 0xa68);
        cVar1 = *(char *)(param_1 + 0x74);
      }
      else {
        uVar4 = *(undefined4 *)(iVar3 + 0x7c);
        if (uVar5 == uVar2) {
          FUN_0897144c(param_1,uVar4,1);
          FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x7c),1);
        }
        else {
          FUN_0897144c(param_1,uVar4,0);
          FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x7c),0);
        }
        memset_jak(ptr,0,0x28);
        cVar1 = *(char *)(param_1 + 0x74);
      }
      uVar2 = (uint)cVar1;
    }
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 4;
    ptr = ptr + 0x28;
    ptr_00 = ptr_00 + 0x28;
    iVar7 = iVar7 + 4;
  } while ((int)uVar5 < 6);
  if ((int)uVar2 < 4) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd0);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xe8);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
  }
  else {
    memset_jak((undefined *)(param_1 + 0x898),0,0x28);
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd0);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd0));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd0));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd0) + 0xbc) = 0x3f800000;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd0);
    *(undefined4 *)(iVar7 + 0xcc) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar7 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar7 + 200) = 0x3e99999a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd0) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0xb0) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd0) + 100) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0xb0) + 100);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd0) + 0x68) =
         *(undefined4 *)(param_1 + 0xa80);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd0),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe8),param_1 + 0x988);
  }
  return;
}


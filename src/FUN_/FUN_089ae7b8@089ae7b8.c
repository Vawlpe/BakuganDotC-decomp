#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ae7b8(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar3 = (uint)*(byte *)(param_1 + 0xbb3);
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  uVar6 = (uint)*(char *)(param_1 + 0x74);
  if (uVar3 != 0) {
    iVar9 = 0;
    iVar10 = param_1 + 0x550;
    iVar11 = param_1 + 0x7a8;
    iVar12 = param_1;
    do {
      if (uVar7 < 7) {
        uVar8 = (int)(uVar7 * 4) >> 2;
        iVar4 = *(int *)(param_1 + 0x1c) + iVar9;
        switch(uVar7) {
        default:
          uVar5 = *(undefined4 *)(iVar4 + 0x7c);
          if (uVar8 == uVar6) {
            FUN_089acbd8(param_1,uVar5,1);
            FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9 + 0x7c),1);
          }
          else {
            FUN_089acbd8(param_1,uVar5,0);
            FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9 + 0x7c),0);
          }
          memset_jak(iVar10,0,0x28);
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9 + 0x7c);
          *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
          bVar2 = *(byte *)(param_1 + 0xbb3);
          cVar1 = *(char *)(param_1 + 0x74);
          break;
        case 4:
        case 5:
        case 6:
          uVar5 = *(undefined4 *)(iVar4 + 0xb8);
          if (uVar8 == uVar6) {
            FUN_089ac2a8(param_1,uVar5,1);
            FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9 + 0xb8),1);
          }
          else {
            FUN_089ac2a8(param_1,uVar5,0);
            FUN_089a522c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9 + 0xb8),0);
          }
          memset_jak(iVar11,0,0x28);
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9 + 0xb8);
          *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
          FUN_089a51fc(0x3f800000,0x3f800000,0,
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9 + 0xb8));
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9 + 0xb8) + 0x68) =
               *(undefined4 *)(iVar12 + 0xb30);
          FUN_089a51fc(0x3f800000,0x3f800000,0,
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9 + 0xc4));
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9 + 0xc4) + 0x68) =
               *(undefined4 *)(iVar12 + 0xb3c);
          bVar2 = *(byte *)(param_1 + 0xbb3);
          cVar1 = *(char *)(param_1 + 0x74);
        }
        uVar6 = (uint)cVar1;
        uVar3 = (uint)bVar2;
        uVar7 = uVar8;
      }
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 0x28;
      iVar11 = iVar11 + 0x28;
      iVar12 = iVar12 + 4;
    } while ((int)uVar7 < (int)uVar3);
  }
  if ((int)uVar6 < 4) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x1c) + 0xe0);
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
    iVar12 = *(int *)(*(int *)(param_1 + 0x1c) + 0xfc);
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
  }
  else {
    memset_jak(param_1 + 0x938,0,0x28);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe0) + 0x128) = 2;
    iVar12 = *(int *)(*(int *)(param_1 + 0x1c) + 0xe0);
    *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe0));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe0));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe0) + 0xbc) = 0x3f800000;
    iVar12 = *(int *)(*(int *)(param_1 + 0x1c) + 0xe0);
    *(undefined4 *)(iVar12 + 0xcc) = 0x3f800000;
    *(undefined4 *)(iVar12 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar12 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar12 + 200) = 0x3e99999a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe0) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0xb8) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe0) + 100) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0xb8) + 100);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe0) + 0x68) =
         *(undefined4 *)(param_1 + 0xb58);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe0),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xfc),param_1 + 0xa50);
  }
  FUN_089a5278();
  return;
}


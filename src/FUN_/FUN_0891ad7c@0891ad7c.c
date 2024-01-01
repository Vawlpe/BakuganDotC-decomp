#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0891ad7c(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 0x90c);
  if (bVar1 < 6) {
    if (bVar1 == 1) {
      cVar2 = FUN_089a91a0(0x3f800000,0x3f800000,0x42000000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84),param_1 + 0x5a0,1);
      cVar3 = FUN_089a91a0(0x40000000,0x3f800000,0x42000000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),param_1 + 0xa0,3);
      cVar4 = FUN_089a91a0(0x40000000,0x3f800000,0x42000000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),param_1 + 0x118,3);
      if ((char)(cVar2 + cVar3 + cVar4) != '\0') {
        *(char *)(param_1 + 0x90c) = *(char *)(param_1 + 0x90c) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      FUN_08918ce4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),
                   *(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a1),1);
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x48);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x48) + 0xbc) =
           0x3f800000;
      FUN_0892c44c(*(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0));
      *(char *)(param_1 + 0x90c) = *(char *)(param_1 + 0x90c) + '\x01';
    }
    else if (bVar1 == 3) {
      FUN_089a4f4c(0x41000000,**(undefined4 **)(param_1 + 0x1c),0,0);
      FUN_089a4f4c(0x41000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),0,1);
      *(char *)(param_1 + 0x90c) = *(char *)(param_1 + 0x90c) + '\x01';
    }
    else if (bVar1 == 4) {
      FUN_089a50c0(1);
      iVar6 = FUN_089a50c0(0);
      if (iVar6 != 0) {
        *(char *)(param_1 + 0x90c) = *(char *)(param_1 + 0x90c) + '\x01';
      }
    }
    else if (bVar1 == 5) {
      if (*(char *)(param_1 + 0x90d) == ' ') {
        *(undefined *)(param_1 + 0x90c) = 6;
      }
      else {
        *(char *)(param_1 + 0x90d) = *(char *)(param_1 + 0x90d) + '\x01';
      }
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      FUN_08919894(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84),
                   *(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x84) + 0xbc) = 0;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84),param_1 + 0x5a0,1);
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = 0;
      FUN_089a5408(0x40000000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),param_1 + 0xa0,3);
      FUN_08918ce4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),
                   *(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a1),1);
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0xbc) = 0;
      FUN_089a5408(0x40000000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),param_1 + 0x118,3);
      iVar6 = FUN_089c59d4();
      if (iVar6 == 0) {
        cVar2 = *(char *)(param_1 + 0x90c);
      }
      else {
        uVar5 = FUN_089c59f0();
        FUN_089c6350(uVar5,10,0,0);
        cVar2 = *(char *)(param_1 + 0x90c);
      }
      *(char *)(param_1 + 0x90c) = cVar2 + '\x01';
    }
    return 0;
  }
  return 1;
}


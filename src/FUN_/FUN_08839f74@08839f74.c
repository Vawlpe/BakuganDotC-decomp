#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08839f74(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = FUN_0882c548();
  if (DAT_08aba77d == '\0') {
    iVar5 = *(int *)(DAT_08ac58c4 + 4);
    iVar2 = FUN_0880d354();
    if ((((iVar2 == 0) && (*(int *)(DAT_08ac58c4 + 0x20) != 2)) && (iVar1 != 0)) &&
       (iVar2 = FUN_0882c220(0xb), iVar2 != 0)) {
      iVar2 = FUN_0884b248();
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x168);
      }
      else {
        iVar2 = FUN_0884b268();
        if (*(int *)(iVar2 + 0x440) != 1) {
          return;
        }
        iVar2 = *(int *)(iVar1 + 0x168);
      }
      if (*(char *)(iVar2 + 0xc) == '\0') {
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
        uVar3 = FUN_08860344(iVar1);
        iVar2 = FUN_08860188(uVar3);
        if ((iVar2 != 0) && (*(char *)(iVar2 + 0x4c1) != '\0')) {
          iVar2 = 0;
        }
        FUN_08838368(param_1,iVar1);
        if ((iVar5 != 0x24) &&
           (piVar4 = (int *)FUN_0880cc48(), *(char *)(*piVar4 + 0x6ab) != '\x01')) {
          FUN_08838780(param_1,iVar1,0);
          FUN_088388d4(param_1,iVar1,1);
          FUN_08838a38(param_1,iVar1,2);
          FUN_08838ba4(param_1,iVar1,iVar2,3);
          FUN_08838cc8(param_1,iVar1,iVar2,4);
          if (iVar5 < 0x19) {
            if (0x17 < iVar5) {
              return;
            }
          }
          else if (iVar5 == 0x25) {
            return;
          }
          FUN_08838dec(param_1,iVar1,5);
          FUN_08838ecc(param_1,iVar1,6);
          FUN_08838fb4(param_1,iVar1,7);
          FUN_08839054(param_1,iVar1,8);
          FUN_088390f8(param_1,iVar1,9);
          FUN_088391a4(param_1,iVar1,10);
          FUN_088392b8(param_1,iVar1,0xb);
          FUN_088393d4(param_1,iVar1,0xc);
          FUN_08839548(param_1,iVar1,0xd);
          FUN_088396c8(param_1,iVar1,0xe);
          FUN_0883983c(param_1,iVar1,0xf);
          FUN_088399bc(param_1,iVar1,iVar2,0x10);
          FUN_08839ac4(param_1,iVar1,iVar2,0x11);
          FUN_08839bd8(param_1,iVar1,iVar2,0x12);
          FUN_08839ce8(param_1,iVar1,0x13);
          FUN_08839d7c(param_1,iVar1,0x14);
          FUN_08839e3c(param_1,iVar1,0x15);
        }
      }
    }
  }
  return;
}


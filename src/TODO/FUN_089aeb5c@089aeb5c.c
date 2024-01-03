#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089aeb5c(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x02') {
    if (-1 < cVar1) {
      iVar6 = *(int *)(param_1 + 0x20);
      if (cVar1 < '\x01') {
        bVar2 = *(byte *)(param_1 + 0xbb0);
        if (((int)*(char *)(iVar6 + 2) & 0x80U) == 0) {
          if (((*(byte *)(iVar6 + 2) & 0x20) != 0) && (bVar2 < 9)) {
            *(byte *)(param_1 + 0xbb0) = bVar2 + 1;
            uVar4 = DONE_Get_DAT_08AAC9E0();
            uVar5 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbb0),uVar4);
            FUN_0880c85c(uVar4,uVar5);
            *(undefined *)(param_1 + 0xb7a) = 1;
            return 1;
          }
        }
        else if (bVar2 != 0) {
          *(byte *)(param_1 + 0xbb0) = bVar2 - 1;
          uVar4 = DONE_Get_DAT_08AAC9E0();
          uVar5 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbb0),uVar4);
          FUN_0880c85c(uVar4,uVar5);
          *(undefined *)(param_1 + 0xb7a) = 0;
          return 1;
        }
      }
      else {
        bVar2 = *(byte *)(param_1 + 0xbb1);
        if (((int)*(char *)(iVar6 + 2) & 0x80U) == 0) {
          if (((*(byte *)(iVar6 + 2) & 0x20) != 0) && (bVar2 < 9)) {
            *(byte *)(param_1 + 0xbb1) = bVar2 + 1;
            uVar4 = DONE_Get_DAT_08AAC9E0();
            uVar5 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbb1),uVar4);
            FUN_0880c97c(uVar4,uVar5);
            *(undefined *)(param_1 + 0xb7a) = 1;
            return 1;
          }
        }
        else if (bVar2 != 0) {
          *(byte *)(param_1 + 0xbb1) = bVar2 - 1;
          uVar4 = DONE_Get_DAT_08AAC9E0();
          uVar5 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbb1),uVar4);
          FUN_0880c97c(uVar4,uVar5);
          *(undefined *)(param_1 + 0xb7a) = 0;
          return 1;
        }
      }
    }
  }
  else if (cVar1 < '\x03') {
    bVar2 = *(byte *)(param_1 + 0xbb2);
    if (((int)*(char *)(*(int *)(param_1 + 0x20) + 2) & 0x80U) == 0) {
      if (((*(byte *)(*(int *)(param_1 + 0x20) + 2) & 0x20) != 0) && (bVar2 < 9)) {
        *(byte *)(param_1 + 0xbb2) = bVar2 + 1;
        uVar4 = DONE_Get_DAT_08AAC9E0();
        uVar5 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbb2),uVar4);
        FUN_0880c8f4(uVar4,uVar5);
        *(undefined *)(param_1 + 0xb7a) = 1;
        return 1;
      }
    }
    else if (bVar2 != 0) {
      *(byte *)(param_1 + 0xbb2) = bVar2 - 1;
      uVar4 = DONE_Get_DAT_08AAC9E0();
      uVar5 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbb2),uVar4);
      FUN_0880c8f4(uVar4,uVar5);
      *(undefined *)(param_1 + 0xb7a) = 0;
      return 1;
    }
  }
  else if ((cVar1 < '\x04') && (iVar6 = FUN_089abfa0(param_1), iVar6 == 1)) {
    piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
    cVar1 = *(char *)(*piVar3 + 0x6ab);
    if (((int)*(char *)(*(int *)(param_1 + 0x20) + 2) & 0x80U) == 0) {
      if (((*(byte *)(*(int *)(param_1 + 0x20) + 2) & 0x20) != 0) && (cVar1 == '\0')) {
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        *(char *)(*piVar3 + 0x6ab) = cVar1 + '\x01';
        *(undefined *)(param_1 + 0xb7a) = 1;
        return 1;
      }
    }
    else if (cVar1 != '\0') {
      piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
      *(char *)(*piVar3 + 0x6ab) = cVar1 + -1;
      *(undefined *)(param_1 + 0xb7a) = 0;
      return 1;
    }
  }
  return 0;
}


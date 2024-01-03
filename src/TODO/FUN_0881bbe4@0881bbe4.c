#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881bbe4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  code *pcVar6;
  int local_20;
  
  *(undefined *)(param_1 + 0xde) = 0;
  iVar1 = FUN_089cc058();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    uVar2 = DONE_GetPtr_DAT_08AC58E0();
    iVar1 = FUN_089cc300(uVar2);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 4);
  }
  if ((-1 < iVar1) && (iVar1 < 9)) {
    if ((iVar1 != 8) && (*(char *)(param_1 + 0xe) != '\0')) {
      *(undefined4 *)(param_1 + 4) = 8;
      *(undefined4 *)(param_1 + 8) = 0;
      iVar1 = 8;
    }
    iVar4 = param_1 + *(short *)(&DAT_08a509a0 + iVar1 * 8);
    pcVar6 = (code *)(&PTR_LAB_08a509a4)[iVar1 * 2];
    if (*(short *)(&DAT_08a509a2 + iVar1 * 8) != 0) {
      psVar5 = (short *)(*(int *)(pcVar6 + iVar4) + *(short *)(&DAT_08a509a2 + iVar1 * 8) * 8);
      iVar4 = iVar4 + *psVar5;
      pcVar6 = *(code **)(psVar5 + 2);
    }
    (*pcVar6)(iVar4);
    iVar1 = *(int *)(param_1 + 4);
  }
  if (iVar1 == 7) {
    iVar1 = FUN_089d0178();
    if (iVar1 == 0) {
      iVar1 = FUN_089d0158();
      if (iVar1 == 0) {
        cVar3 = *(char *)(param_1 + 0xd);
        goto LAB_0881bd58;
      }
      iVar1 = FUN_089cf8ec(0);
      *(undefined *)(param_1 + 0xb9) = 0;
      *(undefined *)(param_1 + 0xb8) = 0;
      if (iVar1 != 0) {
        uVar2 = FUN_0881b64c(param_1);
        local_20 = -1;
        iVar4 = FUN_089d08ec(iVar1,uVar2);
        if (iVar4 != 0) {
          iVar1 = FUN_089d09dc(iVar1,&local_20);
          if (iVar1 == 0) {
            cVar3 = *(char *)(param_1 + 0xd);
            goto LAB_0881bd58;
          }
          *(undefined *)(param_1 + 0xb9) = 1;
          if (*(int *)(param_1 + 0xe8) < local_20) {
            *(int *)(param_1 + 0xe8) = local_20;
            *(undefined *)(param_1 + 0xb8) = 1;
          }
        }
      }
    }
    else {
      *(undefined *)(param_1 + 0xb9) = 1;
      *(undefined *)(param_1 + 0xb8) = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0xb8) = 1;
  }
  cVar3 = *(char *)(param_1 + 0xd);
LAB_0881bd58:
  *(undefined *)(param_1 + 0xde) = 1;
  if (cVar3 != '\0') {
    FUN_0881b1ac();
  }
  return;
}


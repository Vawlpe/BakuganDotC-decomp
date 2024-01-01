#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d686c(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = *(char **)(param_1 + 500);
  bVar4 = true;
  if (pcVar3 != (char *)0x0) {
    if (*(short *)(pcVar3 + 2) < 1) {
      if (*(char *)(param_1 + 0x1f8) == '\0') {
        *(undefined *)(param_1 + 0x1f8) = 1;
        *(undefined2 *)(pcVar3 + 2) = 0x1e;
        cVar2 = *(char *)(param_1 + 0x1f8);
      }
      else {
        if (*pcVar3 == '\0') {
          *pcVar3 = '\x01';
          *(undefined2 *)(*(int *)(param_1 + 500) + 2) =
               *(undefined2 *)(*(int *)(param_1 + 500) + 4);
        }
        else {
          *pcVar3 = '\0';
          *(undefined2 *)(*(int *)(param_1 + 500) + 2) =
               *(undefined2 *)(*(int *)(param_1 + 500) + 6);
        }
        *(undefined *)(param_1 + 0x1f8) = 0;
        cVar2 = *(char *)(param_1 + 0x1f8);
      }
    }
    else {
      *(short *)(pcVar3 + 2) = *(short *)(pcVar3 + 2) + -1;
      cVar2 = *(char *)(param_1 + 0x1f8);
    }
    bVar4 = false;
    if ((cVar2 == '\0') && (bVar4 = false, **(char **)(param_1 + 500) != '\0')) {
      bVar4 = true;
    }
  }
  if ((bVar4) && (iVar1 = FUN_088d67c0(param_1), iVar1 != 0)) {
    iVar1 = FUN_089bfa40(500);
    if ((*(char *)(iVar1 + 0x6e8) == '\0') &&
       ((iVar1 = FUN_088e1948(), iVar1 != 0 && (*(char *)(iVar1 + 0x354) == '\0')))) {
      *(undefined *)(iVar1 + 0x354) = 1;
      FUN_088e2788(iVar1,9,0);
      if (DAT_08b00bd8._1_1_ == '\0') {
        FUN_088e14d4(iVar1);
      }
      *(undefined4 *)(iVar1 + 0x324) = 0;
      *(undefined *)(iVar1 + 0x540) = 0xff;
      *(undefined4 *)(iVar1 + 0x544) = 0;
    }
    *(undefined4 *)(param_1 + 0x16c) = 1;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03d68(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_08af11d8;
  if (DAT_08af11d8 != (int *)0x0) {
    do {
      if ((*(char *)((int)piVar2 + 0x2f) != '\0') && (*(char *)(piVar2 + 0xb) == '\0')) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  if (piVar2 == (int *)0x0) {
    FUN_08a04520();
    iVar1 = iRam00000004;
  }
  else {
    iVar1 = piVar2[1];
  }
  FUN_08a03c00(iVar1,piVar2[2],*(undefined *)(piVar2 + 3),piVar2[4],piVar2[5],
               *(undefined *)((int)piVar2 + 0x32),piVar2[6],1,piVar2);
  FUN_08a03fbc();
  return;
}


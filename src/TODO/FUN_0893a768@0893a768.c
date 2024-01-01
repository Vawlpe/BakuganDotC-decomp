#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893a768(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  cVar4 = '\0';
  if (*(char *)(param_1 + 0x5ee) == '\x02') {
    iVar5 = 0;
    if (*(char *)(param_1 + 0x637) != '\0') {
      do {
        cVar1 = FUN_08939d9c(param_1,param_2,iVar5 + 8U & 0xff);
        cVar4 = cVar4 + cVar1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x637));
    }
  }
  else if (*(char *)(param_1 + 0x5ee) == '\x05') {
    iVar5 = FUN_08939d9c(param_1,param_2,0xf);
    iVar2 = FUN_08939d9c(param_1,param_2,0x10);
    iVar3 = FUN_08939d9c(param_1,param_2,0x11);
    if (0 < iVar5 + iVar2 + iVar3) {
      cVar4 = '\x01';
    }
  }
  else {
    cVar4 = '\x01';
  }
  return cVar4 != '\0';
}


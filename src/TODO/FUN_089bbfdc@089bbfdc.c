#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char FUN_089bbfdc(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 local_80 [10];
  undefined4 local_58;
  int local_3c;
  
  cVar2 = '\0';
  iVar1 = FUN_089bbed0();
  if (0 < iVar1) {
    local_80[0] = 0x6c;
    iVar1 = zz_sceKernelReferThreadStatus(iVar1,local_80);
    if (iVar1 == 0) {
      switch(local_58) {
      case 1:
      case 2:
        break;
      case 4:
        if (local_3c == 1) {
          cVar2 = '\x01';
        }
      }
    }
  }
  if (cVar2 == '\0') {
    cVar2 = (&DAT_08ac4f94)[param_1 * 0x20];
  }
  return cVar2;
}


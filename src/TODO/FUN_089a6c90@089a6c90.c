#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a6c90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_08ac0e78 < 0x136) {
    if (DAT_08ac0e78 < 0x65) {
      if (DAT_08ac0e78 < 100) {
LAB_089a6d18:
        iVar1 = FUN_089a5d34(0);
        if (iVar1 == 0) goto LAB_089a6d30;
      }
    }
    else if (DAT_08ac0e78 != 200) goto LAB_089a6d18;
  }
  else if (DAT_08ac0e78 < 0x19b) {
    if ((0x137 < DAT_08ac0e78) && (DAT_08ac0e78 < 0x19a)) goto LAB_089a6d18;
  }
  else if (DAT_08ac0e78 != 0xbbc) goto LAB_089a6d18;
  uVar2 = 1;
LAB_089a6d30:
  FUN_089a5c54(2,0);
  return uVar2;
}


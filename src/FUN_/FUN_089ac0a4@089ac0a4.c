#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ac0a4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (-1 < cVar1) {
    if (cVar1 < '\x02') {
      if ('\0' < cVar1) {
        if ((*(int *)(param_1 + 0xb7c) != 0) && (iVar2 = FUN_089c59d4(), iVar2 != 0)) {
          uVar3 = FUN_089c59f0();
          FUN_089c6588(uVar3,*(undefined4 *)(param_1 + 0xb7c));
        }
        uVar3 = FUN_089c59f0();
        uVar3 = FUN_089c6350(uVar3,0x430001e,0,0);
        *(undefined4 *)(param_1 + 0xb7c) = uVar3;
        return;
      }
    }
    else if ('\x03' < cVar1) {
      return;
    }
    iVar2 = FUN_089c59d4();
    if (iVar2 != 0) {
      uVar3 = FUN_089c59f0();
      FUN_089c6350(uVar3,1,0,0);
    }
  }
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cfbf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (DAT_08ac5938 != (undefined4 *)0x0) {
    iVar4 = 0;
    iVar1 = FUN_089d3ab4();
    if (iVar1 != 0) {
      iVar1 = FUN_089d3adc();
      iVar4 = *(int *)(iVar1 + 0x24);
    }
    FUN_089bb728(DAT_08ac5938[1]);
    iVar1 = FUN_08a31570(*DAT_08ac5938);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xc), iVar1 != 0)) {
      FUN_089bb728(*(undefined4 *)(iVar1 + 8));
      if (iVar4 == 2) {
        FUN_089d1578(iVar1);
        FUN_089d0798(iVar1);
        *(uint *)(iVar1 + 0xf4) = (int)*(short *)(iVar1 + 0x3e) & 0x7ff;
        iVar3 = 0x34;
        *(ushort *)(iVar1 + 0x3e) = *(ushort *)(iVar1 + 0x3e) | 0x800;
        memcpy_jak(param_1,iVar1 + 0xc,0x34);
        param_1 = param_1 + 0x34;
        iVar4 = *(int *)(iVar1 + 0xf4);
      }
      else {
        *(ushort *)(iVar1 + 0x3e) =
             *(ushort *)(iVar1 + 0x3e) & 0xf800 | (ushort)*(undefined4 *)(iVar1 + 0xf4) & 0x7ff;
        *(ushort *)(iVar1 + 0x3e) = *(ushort *)(iVar1 + 0x3e) & 0xf7ff;
        memcpy_jak(param_1,iVar1 + 0xc,0x34);
        iVar4 = 0;
        iVar3 = FUN_0881b22c();
        if (iVar3 != 0) {
          uVar2 = DONE_GetPtr_DAT_08AB0300();
          iVar4 = FUN_0881b280(uVar2,0);
        }
        if (iVar4 == 0) {
          memset_jak((undefined *)(param_1 + 0x34),0,0x7c);
          iVar4 = *(int *)(iVar1 + 0xf4);
        }
        else {
          memcpy_jak((undefined *)(param_1 + 0x34),iVar4,0x7c);
          iVar4 = *(int *)(iVar1 + 0xf4);
        }
        param_1 = param_1 + 0xb0;
        iVar3 = 0xb0;
      }
      if (0 < iVar4) {
        memcpy_jak(param_1,*(undefined4 *)(iVar1 + 0xf0),iVar4);
        iVar3 = iVar3 + *(int *)(iVar1 + 0xf4);
      }
      FUN_089bb790(*(undefined4 *)(iVar1 + 8));
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return iVar3;
}


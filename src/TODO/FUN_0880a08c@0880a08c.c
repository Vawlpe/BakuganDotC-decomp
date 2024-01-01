#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880a08c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0x21);
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0xc);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  iVar2 = FUN_089f5630(*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2c));
  *(int *)(*(int *)(param_1 + 0x20) + 0x68) = iVar2;
  *(undefined4 *)(iVar2 + 0xdc) = 3;
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x10) = 3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = FUN_089f7720("lan_pane");
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_089f7720("lan_pane_on");
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}


#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893db10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (uint)*(byte *)(param_1 + 0x7de) * 8;
  uVar2 = *(undefined4 *)(&DAT_08a9ce24 + iVar1);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(&DAT_08a9ce20 + iVar1);
  *(undefined4 *)(param_1 + 0x7e4) = uVar2;
  *(undefined *)(param_1 + 0x74) = 0;
  memset_jak(param_1 + 0x75,0,2);
  memset_jak(param_1 + 0x7ec,0xff,0xc);
  FUN_089a4c74(param_1 + 0x7ec,*(undefined4 *)(param_1 + 0x7e0),*(undefined *)(param_1 + 0x7e4),0xff
              );
  *(undefined *)(param_1 + 0x7fc) = 0;
  return;
}


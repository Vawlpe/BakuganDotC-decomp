#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0881d814(undefined4 param_1,int param_2,int *param_3,ushort *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  iVar1 = *param_3;
  if ((int)(uint)*(byte *)(param_4 + 1) <= iVar1) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + iVar1 * 4);
  iVar2 = iVar1 + 1;
  if (((int)(uint)*param_4 >> (iVar1 * 3 & 0x1fU) & 7U) == 3) {
    *param_3 = iVar2;
    iVar2 = *(int *)(param_2 + iVar2 * 4);
    *param_3 = iVar1 + 2;
    iVar2 = iVar2 - iVar3;
    local_c = vrndi_s();
    if (iVar2 != 0) {
      local_c = (local_c >> 0x10) * iVar2 >> 0x10;
    }
    return iVar3 + local_c;
  }
  *param_3 = iVar2;
  return iVar3;
}


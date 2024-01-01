#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a23be0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08afee1c == 0) {
    DAT_08b000b4 = &DAT_08afee24;
    DAT_08b000b0 = &DAT_08afee94;
    zz_sceKernelMemset(&DAT_08affca4,0,0x200);
    zz_sceKernelMemset(&DAT_08affea4,0,0x200);
    DAT_08b000a8 = zz_sceAudioChReserve(0xffffffff,0x1c0,0);
    if (-1 < DAT_08b000a8) {
      iVar3 = 0;
      iVar2 = 0;
      while( true ) {
        iVar1 = zz_sceAudioChReserve(0xffffffff,0x100,0);
        *(int *)((int)&DAT_08b000bc + iVar2) = iVar1;
        if (iVar1 < 0) break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar3 * 4;
        if (2 < iVar3) {
          DAT_08afee1c = 1;
          return 0;
        }
      }
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        zz_sceAudioChRelease(iVar3);
      }
      zz_sceAudioChRelease(DAT_08b000a8);
    }
  }
  return 0x80440001;
}


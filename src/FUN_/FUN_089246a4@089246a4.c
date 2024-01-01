#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089246a4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x20fc);
  if (fVar4 < 1.0) {
    fVar4 = fVar4 + 0.1;
    *(float *)(param_1 + 0x20fc) = fVar4;
  }
  fVar4 = fVar4 * 0.2 + 1.0;
  if (1.2 < fVar4) {
    fVar4 = 1.2;
  }
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if (*(char *)(param_1 + 0x77) < 2) {
        FUN_089a51fc(fVar4,fVar4,0,
                     *(undefined4 *)
                      (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2d0));
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2d0) + 0x68) =
             0xc2c80000;
        FUN_089a51fc(fVar4,fVar4,0,
                     *(undefined4 *)
                      (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2dc));
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2dc) + 0x68) =
             0xc2ca0000;
        FUN_089a51fc(fVar4,fVar4,0,
                     *(undefined4 *)
                      (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2e4));
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2e4) + 0x68) =
             0xc2cc0000;
        FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2d8));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2d8) + 0x68) = 0xc2ce0000;
      }
      else {
        FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x200));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x200) + 0x68) = 0xc2c80000;
        FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x208));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x208) + 0x68) = 0xc2ca0000;
        FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0x68) = 0xc2cc0000;
      }
    }
  }
  else if (cVar1 < '\x02') {
    if (*(char *)(param_1 + 0x75) == '\0') {
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x19c)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x19c) + 0x68) =
           0xc2c80000;
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1b0)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1b0) + 0x68) =
           0xc2ca0000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1b0);
      *(float *)(iVar2 + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2214) * *(float *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4;
      iVar3 = *(int *)(iVar2 + 0x1b0);
      *(float *)(iVar3 + 100) =
           *(float *)(*(int *)(iVar2 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2218) * *(float *)(iVar3 + 0x94);
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1d0)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1d0) + 0x68) =
           0xc2ca0000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1d0);
      *(float *)(iVar2 + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x221c) * *(float *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4;
      iVar3 = *(int *)(iVar2 + 0x1d0);
      *(float *)(iVar3 + 100) =
           *(float *)(*(int *)(iVar2 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2220) * *(float *)(iVar3 + 0x94);
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1c0)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1c0) + 0x68) =
           0xc2ca0000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1c0);
      *(float *)(iVar2 + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2224) * *(float *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4;
      iVar3 = *(int *)(iVar2 + 0x1c0);
      *(float *)(iVar3 + 100) =
           *(float *)(*(int *)(iVar2 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2228) * *(float *)(iVar3 + 0x94);
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1f0)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1f0) + 0x68) =
           0xc2ca0000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1f0);
      *(float *)(iVar2 + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x222c) * *(float *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4;
      iVar3 = *(int *)(iVar2 + 0x1f0);
      *(float *)(iVar3 + 100) =
           *(float *)(*(int *)(iVar2 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2230) * *(float *)(iVar3 + 0x94);
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x168)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x168) + 0x68) =
           0xc2cc0000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x168);
      *(float *)(iVar2 + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2234) * *(float *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4;
      iVar3 = *(int *)(iVar2 + 0x168);
      *(float *)(iVar3 + 100) =
           *(float *)(*(int *)(iVar2 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2238) * *(float *)(iVar3 + 0x94);
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1e0)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1e0) + 0x68) =
           0xc2d00000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1e0);
      *(float *)(iVar2 + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x223c) * *(float *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4;
      iVar3 = *(int *)(iVar2 + 0x1e0);
      *(float *)(iVar3 + 100) =
           *(float *)(*(int *)(iVar2 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2240) * *(float *)(iVar3 + 0x94);
      FUN_089a51fc(fVar4,fVar4,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x20))
      ;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x20) + 0x68) =
           0xc2d20000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x20);
      *(float *)(iVar2 + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2244) * *(float *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4;
      iVar3 = *(int *)(iVar2 + 0x20);
      *(float *)(iVar3 + 100) =
           *(float *)(*(int *)(iVar2 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2248) * *(float *)(iVar3 + 0x94);
      FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1ac));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1ac) + 0x68) = 0xc2ce0000;
    }
    else {
      FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x200));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x200) + 0x68) = 0xc2c80000;
      FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x204));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x204) + 0x68) = 0xc2ca0000;
      FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0x68) = 0xc2cc0000;
    }
  }
  else if (cVar1 < '\x03') {
    FUN_089a51fc(fVar4,fVar4,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x218));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x218) + 0x68) =
         0xc2c80000;
    FUN_089a51fc(fVar4,fVar4,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x234));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x234) + 0x68) =
         0xc2ca0000;
    FUN_089a51fc(fVar4,fVar4,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 600));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 600) + 0x68)
         = 0xc2cc0000;
    FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x230));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x230) + 0x68) = 0xc2ce0000;
  }
  return;
}


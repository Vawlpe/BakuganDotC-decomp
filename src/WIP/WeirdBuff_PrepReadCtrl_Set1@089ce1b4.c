#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 WIP_WeirdBuff_PrepReadCtrl_Set1(config_buffer *weird_buff,undefined2 val)

{
  undefined2 old;
  
  old = *(undefined2 *)((int)&weird_buff->field37_0x2d + 1);
  *(undefined2 *)((int)&weird_buff->field37_0x2d + 1) = val;
  return old;
}


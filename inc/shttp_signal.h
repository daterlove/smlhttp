/*************************************************************************
    > File Name: shttp_signal.h
    > Author: 浅握双手
    > ---------------- 
    > Created Time: 2016年02月02日 21时09分48秒 CST
 ************************************************************************/

#ifndef _SHTTP_SIGNAL_H_
#define _SHTTP_SIGNAL_H_
    void signal_exit();
    int signal_init();
    void signal_record();
    void signal_alarm_handlde(int signum);
    void signal_record_handlde(int signum);
#endif

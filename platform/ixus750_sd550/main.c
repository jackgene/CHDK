#include "../generic/main.c"

long get_vbatt_min()
{
    return 3550;
}

long get_vbatt_max()
{
    return 4110;
}


static const int fl_tbl[] = {7700,9030,10490,12520,15600,18780,23100};
#define NUM_FL (sizeof(fl_tbl)/sizeof(fl_tbl[0]))
#define CF_EFL 48052

const int zoom_points = NUM_FL;

int get_effective_focal_length(int zp) {
    return (CF_EFL*get_focal_length(zp))/10000;
}

int get_focal_length(int zp) {
    if (zp<0) return fl_tbl[0];
    else if (zp>NUM_FL-1) return fl_tbl[NUM_FL-1];
    else return fl_tbl[zp];
}

int get_zoom_x(int zp) {
    if (zp<1) return 10;
    else if (zp>NUM_FL-1) return fl_tbl[NUM_FL-1]*10/fl_tbl[0];
    else return fl_tbl[zp]*10/fl_tbl[0];
}

#if 0
int rec_switch_state(void) {
//    mode  = (physw_status[1]&0x0F)==0x0B ?  MODE_PLAY : MODE_REC;
	return (physw_status[1]&0x0F)!=0x0B;
}
#endif

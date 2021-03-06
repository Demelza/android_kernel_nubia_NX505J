#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {3062, 3064, 3079, 3100, 3045},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 31,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.sf		= {
				{1285, 455, 100, 79, 72},
				{1282, 454, 100, 79, 72},
				{1176, 430, 103, 82, 74},
				{1121, 411, 106, 85, 76},
				{1099, 405, 112, 88, 78},
				{1079, 406, 117, 91, 80},
				{1081, 402, 122, 95, 82},
				{1089, 399, 128, 100, 85},
				{1102, 399, 124, 100, 87},
				{1126, 406, 104, 87, 76},
				{1153, 421, 104, 82, 75},
				{1184, 444, 108, 85, 77},
				{1217, 471, 112, 89, 79},
				{1251, 504, 116, 91, 82},
				{1289, 540, 120, 89, 79},
				{1339, 576, 122, 88, 77},
				{1411, 610, 122, 89, 76},
				{1491, 641, 122, 88, 75},
				{1563, 673, 125, 89, 76},
				{1602, 695, 132, 93, 79},
				{1641, 711, 137, 96, 79},
				{1702, 732, 142, 97, 80},
				{1848, 756, 147, 100, 81},
				{2046, 781, 150, 100, 79},
				{2297, 802, 146, 97, 79},
				{2639, 820, 148, 98, 81},
				{3108, 845, 156, 104, 87},
				{3797, 883, 175, 115, 94},
				{4891, 938, 216, 133, 104},
				{7112, 1220, 353, 189, 130},
				{17348, 5612, 4995, 4391, 1145}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4334, 4328, 4324, 4331, 4313},
				{4244, 4254, 4263, 4269, 4254},
				{4175, 4193, 4206, 4213, 4198},
				{4114, 4138, 4152, 4158, 4145},
				{4053, 4087, 4100, 4105, 4094},
				{3983, 4036, 4052, 4057, 4045},
				{3933, 3980, 4003, 4009, 4001},
				{3892, 3930, 3960, 3967, 3960},
				{3860, 3887, 3916, 3924, 3919},
				{3836, 3853, 3868, 3875, 3869},
				{3817, 3827, 3839, 3842, 3839},
				{3801, 3809, 3816, 3818, 3816},
				{3785, 3794, 3797, 3798, 3796},
				{3771, 3781, 3781, 3781, 3778},
				{3755, 3768, 3767, 3764, 3757},
				{3739, 3752, 3751, 3746, 3732},
				{3720, 3729, 3725, 3721, 3706},
				{3700, 3707, 3695, 3689, 3677},
				{3682, 3693, 3683, 3676, 3664},
				{3669, 3685, 3679, 3673, 3661},
				{3661, 3681, 3677, 3671, 3660},
				{3650, 3676, 3675, 3669, 3657},
				{3638, 3669, 3669, 3666, 3652},
				{3623, 3660, 3657, 3656, 3638},
				{3603, 3643, 3629, 3630, 3609},
				{3575, 3612, 3584, 3587, 3567},
				{3537, 3565, 3527, 3534, 3516},
				{3484, 3499, 3456, 3469, 3453},
				{3406, 3408, 3369, 3383, 3367},
				{3277, 3270, 3247, 3250, 3237},
				{3000, 3000, 3000, 3000, 3000}
	}
};

static struct  sf_lut   pc_sf = {
	.rows		= 1,
	.cols		= 1,
	.row_entries		= {0},
	.percent	= {100},
	.sf			= {
				{100}
	}
};

struct bms_battery_data ztemt_3000mAh_data = {
	.fcc				= 3000,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.pc_sf_lut				= &pc_sf,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 149
};

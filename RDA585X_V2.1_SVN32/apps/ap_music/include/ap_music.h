/********************************************************************************
*                RDA API FOR MP3HOST
*
*        (c) Copyright, RDA Co,Ld.
*             All Right Reserved
*
********************************************************************************/

#ifndef _AP_MUSIC_H_
#define _AP_MUSIC_H_

#include "ap_gui.h"
#include "ap_media.h"

//配置音量的调节级数
#define MUSIC_MAX_VOLUME           AUD_MAX_LEVEL

//------------------------------
#define FollowReadTempShortName   "FLWWAV  TMP"
#define FollowReadTempLongName    L"FLWWAV.TMP"
#define scrolltime_def           260/20           //20ms * 13 = 260ms//滚屏频率分频系数
#define ABReplayMiniTime_def     400/20           //20ms * 10 = 200ms//AB复读的最小长度
//由于有些歌曲计算时间比较长，如每首歌第一时间都先计算出总时间，这样会造成在停止
//  状态下长按NEXT浏览时速度较慢，现采用了如下方法，在停止状态下选中一首歌时
//  开始时间为0（没有计算出时间），如这时要跳到下一首，则刚才那首歌的时间就不
//  计算，而是直接跳到下一首，但如果等待 2秒钟还未有按键，则开始计算当前歌曲的
//  总时间并及时显示。 下面就是设置这个等待的时间 (定义的值/2就是要设的时间，
//  误差在 +- 0.5秒)
#define CaltimeCNT_def           2                //等1秒没有按键就开始算总时间

#define RESULT_CURR_UI           NULL//在当前界面
#define RESULT_LAST_UI           RESULT_USER1+1//回上一界面
#define RESULT_UI_STOP           RESULT_USER1+2//回 STOP 界面
#define RESULT_UI_FOLLOW           RESULT_USER1+3//回 STOP 界面

//第二种方式回到 STOP 界面,这种方式是先停止播放
#define RESULT_UI_STOP2          RESULT_USER1+3
#define RESULT_UI_PLAY           RESULT_USER1+4//回 PLAY 界面
#define RESULT_RE_INIT           RESULT_USER1+5

#define Music_Reset_Head         0
#define Music_Reset_End          1
#define Music_Cur                2//选当前
#define Music_Next               3//选下一首
#define Music_Prev               4//选上一首

//g_DiskStateFlag mask
#define SetDiskOKFlag_def         0x80
#define ClrDiskOKFlag_def         0x7f
#define SetDiskNoFile_def         0x40
#define ClrDiskNoFile_def         0xbf
#define SetCardOKFlag_def         0x08
#define ClrCardOKFlag_def         0xf7
#define SetCardNoFile_def         0x04
#define ClrCardNoFile_def         0xfb

#define BASE_SRS_WOW              0x40
#define eqcount_def               8
#define DEF_RecLowBatt            5//定义最低能录音的电压

#define  AUDPLY_LYRIC_MAX_LINE_SIZE   64   /* pre-defined max lyric buffer size for one line : bytes ; must be two bytes aligned */

//判断是低电的次数，当电压值低于DEF_RecLowBatt值次数超过这个值时确认为低电
#define DEF_RecLowBatTime         5
#define ExproTimeDef              5//浏览的延时值
#define IntCntValDef              5  // second

//如下定义了结构中的开关位
#define on_AllItem_def             0x80
#define on_PLAYCNT_def             0x20
#define on_BEGINDAT_def            0x10
#define on_EXPDATE_def             0x08
#define on_REMAINTM_def            0x04
#define on_REMAINST_def            0x02
#define on_DEALCLKBCK_def          0x01

#define DisplayItem0_def           0
#define DisplayItem1_def           1
#define DisplayItem2_def           2
#define DisplayItem3_def           3
#define DisplayItem4_def           4
#define DisplayItem5_def           5
#define DisplayItem6_def           6

#define RemainPlayCntDisp_def      DisplayItem0_def
#define OriginalPlayCntDisp_def    DisplayItem1_def
#define BeginDateTimeDisp_def      DisplayItem2_def
#define ExpDateTimeDisp_def        DisplayItem3_def
#define RemainTimeDisp_def         DisplayItem4_def
#define RemainStoreTimeDisp_def    DisplayItem5_def
#define DealOnClkBckDisp_def       DisplayItem6_def
#define lincensinf_maxitem_def     DisplayItem6_def

//===========================================================
//下面定义结构类型
//===========================================================
/*for compiler compatible */
typedef struct
{
	UINT16 TimeMs;
	UINT8 TimeSecond;
	UINT8 TimeMinute;
	UINT8 TimeHour;
} Full_time_t;

typedef enum
{
	MusicStop,   // stop mode (0)
	NormalPlay,         //普通模式的显示(1)
	LoopPlay,         //复读播放(2)
	FollowRec,//跟读录音(3)
	CompareAB,//对比放AB(4)
	ComparePlay//对比播放(5)
} Replay_status_t;

typedef enum
{
	Stop_key,
	Play_play,
	Play_key
} Music_sel_mod_t;

typedef enum
{
	mplaylist,
	martists,
	malbum,
	mgenre,
	mcomposers,
	mlistnor
} play_listmod_t;

typedef struct
{
	UINT8 min;
	UINT8 sec;
	UINT8 p1s;
	UINT16 buffaddr;
} LrcTime_t;

//AP_MUSIC使用的系统变量
typedef struct
{
	INT8 volume;               //
	INT8 repeat_mode; //repeat 菜单的序号  //+1
	INT8 loop_mode;
	eq_t eq_type;              //+2
	//INT8 play_rate;     //播放速度 //+3
	UINT8 replaytimes;          //复读次数// +4
	//UINT8 replaygap;            //复读间隔//+5
	UINT8 maxReplayTime;          //复读次数// +4
	//Open_mod_t MusicOpenMod;    //打开方式 +6
	file_location_t location;  //+ 9
	UINT32 BreakTime;
	//ap_time_t BreakPTDisTime;     //断点时间备份 +
	//play_listmod_t play_listmod;//播放列表
	//UINT8 fselmod;               //文件选择器的模式
	//UINT8 PLmod;                   //play list的模式
	//UINT8 Srs;                   // SRS WOW 音效
	//UINT8 Wow;
	//UINT8 Bass;
	UINT8 Lyric_Size;
	BOOL show_lyric;
#if APP_SUPPORT_FM_OUT
	BOOL fm_out;
	UINT32 freq;  // fm output freq
#endif
	UINT16 magic;                // +0
} music_vars_t;

//===========================================================

//--------- [UpDisplayFlag] ---要求刷新标志
#define up_musictypeflag     0x8000
#define up_cardflag         0x4000
#define up_musicbitrate      0x2000
#define up_musicloopmode     0x1000
#define up_musicsequence     0x0800
#define up_musiceqmode       0x0400
#define up_musiccurrenttime  0x0200
#define up_musictotaltime    0x0100
#define up_musicbattery      0x0080
#define up_musicinformation  0x0040
#define up_musicscroll      0x0020
#define up_musiclyric       0x0010
#define up_musicfmout       0x0008
#define up_followmode          0x0004

//-----------------------------清除刷新标志
#define clr_musictypeflag    0x7fff
#define clr_lyricflag        0xbfff
#define clr_musicbitrate     0xdfff
#define clr_musicloopmode    0xefff
#define clr_musicsequence    0xf7ff
#define clr_MPRLmode         clr_musicsequence
#define clr_musiceqmode      0xfbff
#define clr_musiccurrenttime 0xfdff
#define clr_musictotaltime   0xfeff
#define clr_musicbattery     0xff7f
#define clr_musicinformation 0xffbf



//=========设置STOP界面参数==========
#define SetStopInterface()          \
    {                                   \
    GUI_ClearScreen(NULL);       \
    ui_auto_update=FALSE;               \
    UpDisplayFlag=UpDisplayFlag |       \
                  up_musictypeflag |    \
                  up_cardflag |        \
                  up_musicbitrate |     \
                  up_musicloopmode |    \
                  up_musicsequence |    \
                  up_musiceqmode |      \
                  up_musiccurrenttime | \
                  up_musictotaltime |   \
                  up_musicbattery |     \
                  up_musicfmout; \
    }

//=================================

//=========设置刷新全界面参数=====
#define SetFullInterface()          \
    {                                   \
    GUI_ClearScreen(NULL);                  \
    ui_auto_update=FALSE;               \
    UpDisplayFlag=UpDisplayFlag |       \
                  up_musictypeflag |    \
                  up_cardflag |        \
                  up_musicbitrate |     \
                  up_musicloopmode |    \
                  up_musicsequence |    \
                  up_musiceqmode |      \
                  up_musiccurrenttime | \
                  up_musictotaltime |   \
                  up_musicbattery |     \
                  up_musicinformation |  \
                  up_musicfmout   ;  \
    }

//======================================

//=========设置刷新全界面参数=====
#define SetStopToPlayInterface() \
    {                                \
    ui_auto_update=FALSE;            \
    UpDisplayFlag=UpDisplayFlag |    \
                  up_musictypeflag | \
                  up_cardflag |     \
                  up_musicbitrate |  \
                  up_musicloopmode | \
                  up_musicsequence | \
                  up_musiceqmode |   \
                  up_musictotaltime | \
                  up_musicbattery |   \
                  up_musicinformation | \
                  up_musicfmout; \
    }

//======================================

#define StartIntro(mode)
/*\
    {                                         \
    g_introCntMode = mode;                    \
    / *g_OldSecTempBackup = g_music_vars.BreakPTDisTime.second;* / \
    g_introCNT = 0;                           \
    }
*/


//===================歌词翻屏时间的设置(表示翻屏时间最大不能超过这个值)============注要用标准时间写法
#define         MaxOneScreenTimeMin        0                   //这里指分钟数   （0-59）                     //
#define         MaxOneScreenTimeSec        5                   //这里指的是秒数 （0-59）                     //表示5.5秒
#define         MaxOneScreenTime100Ms      5                   //这里指的是100毫秒数 9 表示 900ms（0-9）      //
//=======================================================================



void MUSIC_GetPara( void );/*Read Para From Flash */
INT32 MUSIC_Main(void);
INT32 MUSIC_DisplayPlay( void );
INT32 MUSIC_DisplayStop( void );
INT32 MUSIC_FollowRec( void );    //跟读录音
INT32 MUSIC_LyricDisplay( void );

INT32 ui_play_menu( void );
INT32 ui_stop_menu( void );
INT32 ui_SRS_menu( void );
INT32 ui_EQ_menu( void );
INT32 ui_loop_menu( void );
INT32 ui_follow_compare( void );
INT32 ui_followAB( void );     //跟读AB
INT32 ui_compareAB( void );    //比较AB
INT32 ui_comparePlay( void );  //比较播放
INT32 ui_srs_user_menu(void);

#ifdef _LICENSE_SUPPORT_
INT32 ui_licensinf(INT32 string_id);
#endif

//---------------------------

//-------class display-------
void RealDisplay( void );
void RefreshMainScreen( void );
void MUSIC_AudioBitRateDisplay( void );          //显示比特率
void MUSIC_AudioTypeDisplay(void);//显示音乐类型图标
//---------------------------

//-------class functions-----
INT32 play_key_next( UINT32 key );
INT32 play_key_prev( UINT32 key );
INT32 ToNextMusic( Music_sel_mod_t mod );
INT32 MUSIC_GetInformation( void );
BOOL  MUSIC_SelectAudio( UINT8 Direct, Music_sel_mod_t mod );
void  SelectCurMusic(void);//选择当前歌曲
INT32 MUSIC_HandleKey(UINT32 key);
INT32 ChangeVolume( UINT32 key );
INT32 DealMusicFileEnd( INT8 DisMod );
INT32 DealPlayKey( void );
void  FadeOut( BOOL DisMod );
INT32 PrevMusicInPlay(void);

INT32 InitFileSelector(void);
INT32 UpdateFileSelector(void);
void  ErrReport(UINT8 status);
//------------------------------

INT8 NextItem(licensinf_t *infbuf, INT8 cnt,  INT32  lan_id);
INT8 PrevItem(licensinf_t *infbuf, INT8 cnt,  INT32 lan_id);
void OpenMusic( void );
void DealForExitRec( void );


#if APP_SUPPORT_LYRIC==1//支持歌词显示功能

// load the lyric matching the music file specified by strMusicFile. position initialized.
// return the page mode , 0 means fail.
BOOL  lyricLoad( const UINT32 file_entry);

// Get the lyric by time, limited len, return next time
BOOL  lyricGetNext( INT8 * strLyric, UINT8 len, UINT32 *nextTime);

// Load lyric background
BOOL  lyricPreLoad(void);

#endif


UINT32 MUSIC_GetPlaySeconds(void);//Get Cur Play Time

/* ------音乐文件tag操作 ------*/
BOOL mp3GetID3Info(const UINT32 fileEntry, ID3Info_t *ID3Info, INT32 string_id);
BOOL oggGetTAGInfo(const TCHAR *filename, ID3Info_t *ID3Info, INT32 string_id);

INT32 MUSIC_Entry(INT32 param);

#endif     /*_AP_MUSIC_H_*/




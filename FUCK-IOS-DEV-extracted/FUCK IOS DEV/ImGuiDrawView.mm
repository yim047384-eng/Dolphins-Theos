#include "MenuLoad/Includes.h"
#import "MenuLoad/Other/Bools.h"
#include "MenuLoad/Other/byte_array.h"
#include "MenuLoad/Other/nav_elements.h"
#include "MenuLoad/Other/etc_elements.h"
#import <Foundation/Foundation.h>
#import <os/log.h>
#import "pthread.h"
#include <cmath>
#include <deque>
#include "ESP/Tools.h"
#include <vector>
#include "Vector/Vector3.h"
#include "Vector/Vector2.h"
#include "Vector/monoString.h"
#include <fstream>
#import <dlfcn.h>
#include <map>
#import "ESP/UE4.h"
#include "SDK.hpp"

#import "ESP/FarsiType.h"



#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height
#define kScale [UIScreen umainScreen].scale

NSString *xrpb = NSSENCRYPT("Paste Key...");

#define E(str) _xor_(str).c_str()

#define iPhone8P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

NSString *bundle;
uint64_t GUObjectArray;
uint64_t GNameFun;

typedef uintptr_t kaddr;
using namespace std;
using namespace SDK;


bool isAimKnocked = true;
bool IsValidAddress(kaddr addr) {
    return addr > 0x100000000 && addr < 0x2000000000;
}



uintptr_t UE4;
//kaddr module= (unsigned long)_dyld_get_image_vmaddr_slide(0);
namespace Options
{
int boxtype = 1;
int healthbartype = 0;
int Nationtype = 2;
int DirectionLineSize = 70;
int VehicleDirectionLineSize = 100;
int offscreen_range = 40;
int max_distance_offscreen = 400;
int playersdistancessize = 600;
bool esp_Outline = true;
int distance_Radar = 150;
}



long l1 = 0xFF544;
long l2 = 0xFFFFF;
//const char * stack230 = 0;//index of class array 75
int stack_20;
NSString * val_1;
NSString * val_x2 ;
int sort = 1,sort_1 = 3;
long RAMADDRESS = 0x4332443;//0x4332443 + F = 0x4332452
bool stack_193 = NO;

//extern bool  AntiHooK;

bool bonn =false;
bool ESPGAME = true;
float CenterX=0.0f;
float CenterY=0.0f;
bool DrawPlayerLine = true;
bool IsAutofire = false;
bool IsNorecoil = false;
bool INTAHIT =false;
bool IsNOcameras = false;
bool ipadview= false;
bool Igronebot =false;
bool TrackingCar=false;
bool  AIMHEAD1 = false; //head
bool  AIMNeck1 = false; //root
bool  AIMcheat1 = false; //Pelvis
bool iSPLAYERDIS =true;
bool IsShoot =false;
bool IsSCope = false;
bool IsBothaim =false;
bool IsAny=false;
static int chedoaim = 1;
bool batchedoaim = true;
bool playerradar = false;
bool IsAimbot = true;
bool AimbotStatus = false;
bool IsAimbotFov = true;
bool IsAimbotDis = false;
bool IsAimHead =false; //head
bool IsAimNeck =false; //root
bool IsAimRoot =false; // Pelvis
bool IsGRWAR =true;
bool initkillmsghook = false;
bool rbg = false;
FRotator g_aimRotation;
FVector Tarloc;
FVector headp;
FVector myloc;
bool IsFastBullet = false;
FRotator g_cartrack;
FVector g_trackaim ;
bool boquabot = false;
bool IsBone =true;
bool isbypass = false;
bool IsJump =false;
bool IsFastshoot = false;
bool GodMode = false;
bool IsFly = false;
bool IsLootBox = false;
bool IsNocamerashake = false;
bool IsVehcleEsp = false;
bool IsWarring = true;
bool Is3Dbox =false;
bool IsPLayerName = true;
bool IsPlayerHP =true;
bool IsFastKnock = false;
bool IsFastswim = false;
bool IsVehcle = false;
bool IsboxVechle =false;
bool IsCarHP = false;
bool IsCarFuel =false;
bool IsPostil =false;
bool IsSniper = false;
bool IsWeapon =false;
bool IsAmmo =false;
bool IsFov =false;
bool IsHitXPL =false;
bool IsPlayerSP= false;
bool isAimvisual =true;
bool BulletTracking = false;
bool thongtin = false;
bool IsPlayerWEP = true;
bool hidename = false;


static int Styleesp = 1;

bool ConfigSilentAimEnable = false;

//
bool IsCrossHair = false;
bool IsSMG =false;
bool IsAR =false;
bool IsShotgun = false;
bool IsLV3 = true;
bool IsLuc = false;
bool IsOngngam = false;
bool IsSungmay = false;
bool TeleportCar = false;
bool IsSilentAIM= false;
bool GODVIEWUUP= false;
bool GODVIEWFRONT= false;
bool GODVIEWLEFT= false;
bool AUOTJUMPAN= false;

bool Flash = false;
bool xoay360 = false;
bool IsbulletTrack=false;


static int AR_language = 0;//for languae support AR = True mean arabic or false mean not arabic
UISlider * Auto1;//autofire

bool IsAirDrop = false;
int Interval = 1;
int counter;
int iAwareTexSiz = 20;
bool iAwareText = true;
int EspTextSiz = 9;
float EspBoxThik = 2.0f;
float EspSktonThik = 1.8f;
float IsfovSlider = 150.0f;
float AimSmooth = 4.0f;

float spinspeed = 6.0f;
//UISlider * Aimbot2;
//aimbot bool
float g_disstance;


int boxtype = 1;
int healthbartype = 0;
int Nationtype = 2;
int DirectionLineSize = 70;
int VehicleDirectionLineSize = 100;
int offscreen_range = 40;
int max_distance_offscreen = 400;
int playersdistancessize = 600;
bool esp_Outline = true;
int distance_Radar = 150;

int DancerValue ;
float DanceValue = 0.0f;



int glWidth, glHeight;
int g_screenWidth ;
int g_screenHeight ;
int screenWidth ;
int screenHeight ;
int screenDensity = 0;
int getEspFramerate;
int SCOLOR;
int scc;


char extra[30];
float density = -1;
float gDistance;
int localFiring{0};
BOOL kaiguan1 = NO;
BOOL kaiguan2 = NO;
BOOL kaiguan3 = NO;
BOOL kaiguan4 = NO;
#define PI 3.14159265358979323846

bool ARWP = false;
bool SMGWP =false;
bool SNPWP = false;
bool otherWP =false;
bool AmmoWP =false;
bool LIGHTMW = false;
bool SHOTGUNWP = false;
bool scopewp = false;
bool POSTOLWP = false;
bool ARMORWP =false;
//extern float FovRadousVal;
float IsAimBotRecc = 1.0f;

static int Istargets = 1;


bool tamnho = false;

bool modsungto = false;

float dorong = 88.0f;
float alphawarring = 120.0f;

float IsDistance = 120;

//---------------------------khai báo mod skin---------------------------//

struct JsonPreferences {
  
int xsuit = 0;
int skinm4 = 0;
int skinakm = 0;
int para = 0;
int bag = 0;
int helmet = 0;
bool CoupeRB = false;
bool Dacia = false;
bool UAZ = false;
bool MiniBus = false;
bool BigFoot = false;
bool Boat = false;
bool Mirado = false;
bool Buggy = false;
bool RZR = false;
bool OMirado = false;
bool Moto = false;
bool Emote = false;
bool Helmett = false;
bool Bagg = false;
bool Fac= false;
bool Face= false;
bool Outfit = false;
bool Parachute = false;
bool Hieuungbay = false;
bool Comrade = false;
bool M416 = false;
bool AKM = false;
bool SCARL = false;
bool M762 = false;
bool MG3 = false;
bool Honey = false;
bool S12K = false;
bool DBS = false;
bool S1897 = false;
bool AWM = false;
bool Machete = false;
bool AMR = false;
bool MK14 = false;
bool MINI14 =false;
bool KAR98 = false;
bool M24 = false;
bool M16 = false;
bool M249 = false;
bool DP28 = false;
bool GROZA = false;
bool FAMAS = false;
bool AUG = false;
bool QBZ = false;
bool PAN = false;
bool UZI = false;
bool UMP = false;
bool TOMMY = false;
bool P90 = false;
bool BIZON = false;
bool ACE32 = false;
bool VECTOR = false;

    struct sConfig {
     
        struct sModSkin {
  bool Enable = 1;
  bool HitEffect = 0;
  bool KillMessage = 0;
  bool DeadBox = 0;
  int XSuits = 1;
  int AKM = 1;
  int M16A4 = 1;
  int Scar = 1;
  int M416 = 1;
  int Groza = 1;
  int Famas =1;
  int AUG = 1;
  int QBZ = 1;
  int M762 = 1;
  int MG3 = 1;
  int Honey = 1;
  int S12K = 1;
  int DBS = 1;
  int S1897 = 1;
  int ACE32 = 1;
  int Parachute = 1;
  int Fac = 1;
  int Hieuungbay = 1;
  int Comrade = 1;
  int UZI = 1;
  int UMP = 1;
  int Vector = 1;
  int Thompson = 1;
  int P90 = 1;
  int Bizon = 1;
  int K98 = 1;
  int M24 = 1;
  int AWM = 1;
  int AMR = 1;
  int Machete = 1;
  int MK14 = 1;
  int MINI14 =1;
  int DP28 = 1;
  int M249 = 1;
  int Pan = 1;
  int Moto = 1;
  int CoupeRP = 1;
  int UAZ = 1;
  int Dacia = 1;
  int Bigfoot = 1;
  int Mirado = 1;
  int OMirado = 1;
  int Buggy = 1;
  int RZR = 1;
  int MiniBus = 1;
  int Boat = 1;
};
sModSkin Skin{false};
        
    };
    sConfig Config{false};

} preferences;
static int helmett1 = 1;
static int helmett2 = 1;
static int helmett3 = 1;
static int bag1 = 1;
static int bag2 = 1;
static int bag3 = 1;
bool ModSkinn = false;
bool KillMessage = false;
bool DeadBox = false;
int sEmote1 = 2200101;
int sEmote2 = 2200201;
int sEmote3 = 2200301;
int ModEmote1 = 1;
namespace Active {
   int SkinCarDefault = 0;
   int SkinCarMod = 0;
   int SkinCarNew = 0;
}

//--------------------Hết Khai Báo---------------------//

int autodiss()
{
    return Auto1.value;
}

NSString *sfcssfdsfv =@" SHN " ;

//float Professor
std::string ServerName;
NSString *nsString = [NSString stringWithFormat:sfcssfdsfv];
  const char *cString = [nsString UTF8String];

std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
   std::wstring stdWString = converter.from_bytes(cString);
const static std::wstring sESP_Header = stdWString;
const static std::string sEngine_Font_Name = ("Font Roboto.Roboto");



//-------KHAI BÁO MOD SKIN---------//

ImVec4 to_vec4(float r, float g, float b, float a)
    {
        return ImVec4(r / 255.0, g / 255.0, b / 255.0, a / 255.0);
    }
namespace Settings
{
    static int Tab = 0;
}
int newUAZID = 0;
int lastUAZID = 0;
int newDaciaID = 0;
int lastDaciaID = 0;
int newCoupeID = 0;
int lastCoupeID = 0;
struct snew_Skin {
  int XSuits = 403003; // Áo
    int XSuits1 = 40604002; // Đầu
    int quan = 404026; // quan
    int giay = 0;
    int Kaaba = 410517;
    
    
    
    
  int Balo1 = 501001;
  int Balo2 = 501002;
  int Balo3 = 501003;
  int Balo4 = 501004;
  int Balo5 = 501005;
  int Balo6 = 501006;
  int Helmet1 = 502001;
  int Helmet2 = 502002;
  int Helmet3 = 502003;
  int Helmet4 = 502004;
  int Helmet5 = 502005;

  int Helmet6 = 502114;
  int Helmet7 = 502115;
  int Helmet8 = 502116;
  int Parachute = 703001;
  int Fac = 1400560;
  int Hieuungbay = 4151001;
  int Comrade = 1601051;
    
    
  int AKM = 101001;
  int AKM_Mag = 291001;
    int AKM_flash = 201010;
    int AKM_compe = 201009;
    int AKM_silent = 201011;
    int AKM_reddot = 203001;
    int AKM_holo = 203002;
    int AKM_x2 = 203003;
    int AKM_x3 = 203014;
    int AKM_x4 = 203004;
    int AKM_x6 = 203015;
    int AKM_quickMag = 204012;
    int AKM_extendedMag = 204011;
    int AKM_quickNextended = 204013;
    
  int M16A4 = 101002;
  int M16A4_Stock = 205007;
  int M16A4_Mag = 291002;
    
    
  int Scar = 101003;
  int Scar_Mag = 291003;
    int Scar_3 = 203007;
    int Scar_flash = 201010;
    int Scar_compe = 201009;
    int Scar_silent = 201011;
    int Scar_reddot = 203001;
    int Scar_holo = 203002;
    int Scar_x2 = 203003;
    int Scar_x3 = 203014;
    int Scar_x4 = 203004;
    int Scar_x6 = 203015;
    int Scar_quickMag = 204012;
    int Scar_extendedMag = 204011;
    int Scar_quickNextended = 204013;
    int Scar_verical = 202002;
    int Scar_angle = 202001;
    int Scar_lightgrip = 202004;
    int Scar_pink = 202005;
    int Scar_lazer = 202007;
    int Scar_thumb = 202006;
    
    
  int Pan = 108004;

  int M416_1 = 101004;
  int M416_2 = 291004;
  int M416_3 = 203008;
  int M416_4 = 205005;
  int M416_flash = 201010;
  int M416_compe = 201009;
  int M416_silent = 201011;
  int M416_reddot = 203001;
  int M416_holo = 203001;
  int M416_x2 = 203003;
  int M416_x3 = 203014;
  int M416_x4 = 203004;
  int M416_x6 = 203015;
  int M416_quickMag = 204012;
  int M416_extendedMag = 204011;
  int M416_quickNextended = 204013;
  int M416_stock = 205002;
  int M416_verical = 203015;
  int M416_angle = 202001;
  int M416_lightgrip = 202004;
  int M416_pink = 202005;
  int M416_lazer = 202007;
  int M416_thumb = 202006;
    
    int K98 = 103001;
  int K98_reddot = 203001;
    int K98_holo = 203002;
    int K98_x2 = 203003;
    int K98_x3 = 203014;
    int K98_x4 = 203004;
    int K98_x6 = 203015;
    int K98_x8 = 203005;
    
    
    

  int Groza = 101005;
    int Groza_2 = 291005;
    int Groza_silent = 201011;
    int Groza_reddot = 203001;
    int Groza_holo = 203002;
    int Groza_x2 = 203003;
    int Groza_x3 = 203014;
    int Groza_x4 = 203004;
    int Groza_x6 = 203015;
    int Groza_quickMag = 204012;
    int Groza_extendedMag = 204011;
    int Groza_quickNextended = 204013;
    
    int Famas = 101100;
    int Famas_reddot = 203001;
      int Famas_holo = 203002;
      int Famas_x2 = 203003;
      int Famas_x3 = 203014;
      int Famas_x4 = 203004;
      int Famas_x6 = 203015;
    
    
    
    
    
  int QBZ = 101007;
    
    
    
    
  int AUG = 101006;
    int AUG_reddot = 203001;
    int AUG_holo = 203002;
    int AUG_x2 = 203003;
    int AUG_x3 = 203014;
    int AUG_x4 = 203004;
    int AUG_x6 = 203015;
    int AUG_lazer = 202007;
    int AUG_flash = 201010;

    
    
    
  int M762 = 101008;
  int M762_Mag = 291008;
    int M762_reddot = 203001;
    int M762_holo = 203002;
    int M762_x2 = 203003;
    int M762_x3 = 203014;
    int M762_x4 = 203004;
    int M762_x6 = 203015;
    int M762_lazer = 202007;
    int M762_flash = 201010;

    
    
    
    
    
    
    
  int ACE32 = 101102;
      int ACE32_reddot = 203001;
      int ACE32_holo = 203002;
      int ACE32_x2 = 203003;
      int ACE32_x3 = 203014;
      int ACE32_x4 = 203004;
      int ACE32_x6 = 203015;
    
    
    
  int Honey = 101012;
  int UZI = 102001;
    
  int UMP = 102002;
    int UMP_reddot = 203001;
    int UMP_holo = 203002;
    int UMP_x2 = 203003;
    int UMP_x3 = 203014;
    int UMP_x4 = 203004;
    int UMP_x6 = 203015;
    
    
    
  int Vector = 102003;
  int Thompson = 102004;
  int P90 = 102105;
  int Bizon = 102005;
  int M24 = 103002;
    int M24_reddot = 203001;
      int M24_holo = 203002;
      int M24_x2 = 203003;
      int M24_x3 = 203014;
      int M24_x4 = 203004;
      int M24_x6 = 203015;
      int M24_x8 = 203005;
    
    
    
    
  int AWM = 103003;
    int AWM_reddot = 203001;
      int AWM_holo = 203002;
      int AWM_x2 = 203003;
      int AWM_x3 = 203014;
      int AWM_x4 = 203004;
      int AWM_x6 = 203015;
      int AWM_x8 = 203005;
    
    
    
    
  int AMR = 103012;
    int AMR_reddot = 203001;
      int AMR_holo = 203002;
      int AMR_x2 = 203003;
      int AMR_x3 = 203014;
      int AMR_x4 = 203004;
      int AMR_x6 = 203015;
      int AMR_x8 = 203005;
 
int FAMAS = 101100;
    int FAMAS_reddot = 203001;
      int FAMAS_holo = 203002;
      int FAMAS_x2 = 203003;
      int FAMAS_x3 = 203014;
      int FAMAS_x4 = 203004;
      int FAMAS_x6 = 203015;
    
    
    
  int Machete = 108001;
  int VSS = 103005;
  int SKS = 103004;
  int Mini14 = 103006;
  int MK14 = 103007;
  int SLR = 103009;
  int S1897 = 104002;
  int DP28 = 105002;
  int M249 = 105001;
    
    
  int MG3 = 105010;
    int MG3_reddot = 203001;
    int MG3_holo = 203002;
    int MG3_x2 = 203003;
    int MG3_x3 = 203014;
    int MG3_x4 = 203004;
    int MG3_x6 = 203015;
    
    
    
    
    
    
    
    
  int DBS = 104004;
  int S12K = 104003;
  int Skorpion = 106008;
  int Moto = 1901001;
  int CoupeRP = 1961001;
  int Dacia = 1903001;
  int UAZ = 1908001;
  int Bigfoot = 1953001;
  int Mirado = 1914004;
  int OMirado = 1915001;
  int Buggy = 1907001;
  int RZR = 1966017;
  int MiniBus = 1904001;
  int Boat = 1911001;
  int M249s = 205009;

};

inline snew_Skin new_Skin;



std::chrono::steady_clock::time_point lastChangeTime;
std::chrono::steady_clock::time_point lastWeaponChangeTime;

void updateSkin() {
    if (preferences.bag == 0)
        bag1 = 501001;
    if (preferences.bag == 1)
        bag1 = 1501003174; //blood raven x suit
    if (preferences.bag == 2)
        bag1 = 1501003220; //Golden Pharaoh X-Suit
    if (preferences.bag == 3)
        bag1 = 1501003607; //Avalanche
    if (preferences.bag == 4)
        bag1 = 1501003318; //Irresidence
    if (preferences.bag == 5)
        bag1 = 1501003411; //Poseidon
    if (preferences.bag == 6)
        bag1 = 1501003422; //Arcane Jester X-suit
    if (preferences.bag == 7)
        bag1 = 1501003443; //Silvanus X-Suit
    if (preferences.bag == 8)
        bag1 = 1501003466;
    if (preferences.bag == 9)
        bag1 = 1501003061;
    if (preferences.bag == 10)
        bag1 = 1501003047;
    if (preferences.bag == 11)
        bag1 = 1501003039;
    if (preferences.bag == 12)
        bag1 = 1501003471;
    if (preferences.bag == 13)
        bag1 = 1501003487;
    if (preferences.bag == 14)
        bag1 = 1501003503;
    if (preferences.bag == 15)
        bag1 = 1501003515;
    if (preferences.bag == 16)
        bag1 = 1501003550;
    if (preferences.bag == 17)
        bag1 = 1501003558;
    if (preferences.bag == 18)
        bag1 = 1501003058;
    if (preferences.bag == 19)
        bag1 = 1501003057;
    if (preferences.bag == 20)
        bag1 = 1501003051;
    if (preferences.bag == 21)
        bag1 = 1501003043;
    if (preferences.bag == 22)
        bag1 = 1501003042;
    if (preferences.bag == 23)
        bag1 = 1501003229;
    if (preferences.bag == 24)
        bag1 = 1501003023;
    if (preferences.bag == 25)
        bag1 = 1501003022;
    if (preferences.bag == 26)
        bag1 = 1501003608;
    if (preferences.bag == 27)
        bag1 = 1501003605;
    
    
    
    if (preferences.bag == 0)
        bag2 = 501002;
    if (preferences.bag == 1)
        bag2 = 1501003174; //blood raven x suit
    if (preferences.bag == 2)
        bag2 = 1501003220; //Golden Pharaoh X-Suit
    if (preferences.bag == 3)
        bag2 = 1501003607; //Avalanche
    if (preferences.bag == 4)
        bag2 = 1501003318; //Irresidence
    if (preferences.bag == 5)
        bag2 = 1501003411; //Poseidon
    if (preferences.bag == 6)
        bag2 = 1501003422; //Arcane Jester X-suit
    if (preferences.bag == 7)
        bag2 = 1501003443; //Silvanus X-Suit
    if (preferences.bag == 8)
        bag2 = 1501003466;
    if (preferences.bag == 9)
        bag2 = 1501003061;
    if (preferences.bag == 10)
        bag2 = 1501003047;
    if (preferences.bag == 11)
        bag2 = 1501003039;
    if (preferences.bag == 12)
        bag2 = 1501003471;
    if (preferences.bag == 13)
        bag2 = 1501003487;
    if (preferences.bag == 14)
        bag2 = 1501003503;
    if (preferences.bag == 15)
        bag2 = 1501003515;
    if (preferences.bag == 16)
        bag2 = 1501003550;
    if (preferences.bag == 17)
        bag2 = 1501003558;
    if (preferences.bag == 18)
        bag2 = 1501003058;
    if (preferences.bag == 19)
        bag2 = 1501003057;
    if (preferences.bag == 20)
        bag2 = 1501003051;
    if (preferences.bag == 21)
        bag2 = 1501003043;
    if (preferences.bag == 22)
        bag2 = 1501003042;
    if (preferences.bag == 23)
        bag2 = 1501003229;
    if (preferences.bag == 24)
        bag2 = 1501003023;
    if (preferences.bag == 25)
        bag2 = 1501003022;
    if (preferences.bag == 26)
        bag2 = 1501003608;
    if (preferences.bag == 27)
        bag2 = 1501003605;
    
    
    
    
    
    if (preferences.bag == 0)
        bag3 = 501003;
    if (preferences.bag == 1)
        bag3 = 1501003174; //blood raven x suit
    if (preferences.bag == 2)
        bag3 = 1501003220; //Golden Pharaoh X-Suit
    if (preferences.bag == 3)
        bag3 = 1501003607; //Avalanche
    if (preferences.bag == 4)
        bag3 = 1501003318; //Irresidence
    if (preferences.bag == 5)
        bag3 = 1501003411; //Poseidon
    if (preferences.bag == 6)
        bag3 = 1501003422; //Arcane Jester X-suit
    if (preferences.bag == 7)
        bag3 = 1501003443; //Silvanus X-Suit
    if (preferences.bag == 8)
        bag3 = 1501003466;
    if (preferences.bag == 9)
        bag3 = 1501003061;
    if (preferences.bag == 10)
        bag3 = 1501003047;
    if (preferences.bag == 11)
        bag3 = 1501003039;
    if (preferences.bag == 12)
        bag3 = 1501003471;
    if (preferences.bag == 13)
        bag3 = 1501003487;
    if (preferences.bag == 14)
        bag3 = 1501003503;
    if (preferences.bag == 15)
        bag3 = 1501003515;
    if (preferences.bag == 16)
        bag3 = 1501003550;
    if (preferences.bag == 17)
        bag3 = 1501003558;
    if (preferences.bag == 18)
        bag3 = 1501003058;
    if (preferences.bag == 19)
        bag3 = 1501003057;
    if (preferences.bag == 20)
        bag3 = 1501003051;
    if (preferences.bag == 21)
        bag3 = 1501003043;
    if (preferences.bag == 22)
        bag3 = 1501003042;
    if (preferences.bag == 23)
        bag3 = 1501003229;
    if (preferences.bag == 24)
        bag3 = 1501003023;
    if (preferences.bag == 25)
        bag3 = 1501003022;
    if (preferences.bag == 26)
        bag3 = 1501003608;
    if (preferences.bag == 27)
        bag3 = 1501003605;
    
    
    
    
    if (preferences.helmet == 0)
        helmett1 = 502001;
    if (preferences.helmet == 1)
        helmett1 = 1502003014; //blood raven x suit
    if (preferences.helmet == 2)
        helmett1 = 1502003349; //Golden Pharaoh X-Suit
    if (preferences.helmet == 3)
        helmett1 = 1502003012; //Avalanche
    if (preferences.helmet == 4)
        helmett1 = 1502003009; //Irresidence
    if (preferences.helmet == 5)
        helmett1 = 1502003397; //Poseidon
    if (preferences.helmet == 6)
        helmett1 = 1502003390; //Arcane Jester X-suit
    if (preferences.helmet == 7)
        helmett1 = 1502003381; //Silvanus X-Suit
    if (preferences.helmet == 8)
        helmett1 = 1502003358;
    if (preferences.helmet == 9)
        helmett1 = 1502003350;
    if (preferences.helmet == 10)
        helmett1= 1502003342;
    if (preferences.helmet == 11)
        helmett1 = 1502003336;
    if (preferences.helmet == 12)
        helmett1 = 1502003333;
    if (preferences.helmet == 13)
        helmett1 = 1502003327;
    if (preferences.helmet == 14)
        helmett1 = 1502003325;
    if (preferences.helmet == 15)
        helmett1 = 1502003299;
    if (preferences.helmet == 16)
        helmett1 = 1502003295;
    if (preferences.helmet == 17)
        helmett1 = 1502003222;
    if (preferences.helmet == 18)
        helmett1 = 1502003069;
    if (preferences.helmet == 19)
        helmett1 = 1502003054;
    if (preferences.helmet == 20)
        helmett1 = 1502003033;
    if (preferences.helmet == 21)
        helmett1 = 1502003016;
    if (preferences.helmet == 22)
        helmett1 = 1502003031;
    if (preferences.helmet == 23)
        helmett1 = 1502003023;
    if (preferences.helmet == 24)
        helmett1 = 1502003018;
    if (preferences.helmet == 25)
        helmett1 = 1502003410;
    if (preferences.helmet == 26)
        helmett1 = 1502003408;
    
    if (preferences.helmet == 0)
        helmett2 = 502002;
    if (preferences.helmet == 1)
        helmett2 = 1502003014; //blood raven x suit
    if (preferences.helmet == 2)
        helmett2 = 1502003349; //Golden Pharaoh X-Suit
    if (preferences.helmet == 3)
        helmett2 = 1502003012; //Avalanche
    if (preferences.helmet == 4)
        helmett2 = 1502003009; //Irresidence
    if (preferences.helmet == 5)
        helmett2 = 1502003397; //Poseidon
    if (preferences.helmet == 6)
        helmett2 = 1502003390; //Arcane Jester X-suit
    if (preferences.helmet == 7)
        helmett2 = 1502003381; //Silvanus X-Suit
    if (preferences.helmet == 8)
        helmett2 = 1502003358;
    if (preferences.helmet == 9)
        helmett2 = 1502003350;
    if (preferences.helmet == 10)
        helmett2 = 1502003342;
    if (preferences.helmet == 11)
        helmett2 = 1502003336;
    if (preferences.helmet == 12)
        helmett2 = 1502003333;
    if (preferences.helmet == 13)
        helmett2 = 1502003327;
    if (preferences.helmet == 14)
        helmett2 = 1502003325;
    if (preferences.helmet == 15)
        helmett2 = 1502003299;
    if (preferences.helmet == 16)
        helmett2 = 1502003295;
    if (preferences.helmet == 17)
        helmett2 = 1502003222;
    if (preferences.helmet == 18)
        helmett2 = 1502003069;
    if (preferences.helmet == 19)
        helmett2 = 1502003054;
    if (preferences.helmet == 20)
        helmett2 = 1502003033;
    if (preferences.helmet == 21)
        helmett2 = 1502003016;
    if (preferences.helmet == 22)
        helmett2 = 1502003031;
    if (preferences.helmet == 23)
        helmett2 = 1502003023;
    if (preferences.helmet == 24)
        helmett2 = 1502003018;
    if (preferences.helmet == 25)
        helmett2 = 1502003410;
    if (preferences.helmet == 26)
        helmett2  = 1502003408;
    
    
    if (preferences.helmet == 0)
        helmett3 = 502003;
    if (preferences.helmet == 1)
        helmett3 = 1502003014; //blood raven x suit
    if (preferences.helmet == 2)
        helmett3 = 1502003349; //Golden Pharaoh X-Suit
    if (preferences.helmet == 3)
        helmett3 = 1502003012; //Avalanche
    if (preferences.helmet == 4)
        helmett3 = 1502003009; //Irresidence
    if (preferences.helmet == 5)
        helmett3 = 1502003397; //Poseidon
    if (preferences.helmet == 6)
        helmett3 = 1502003390; //Arcane Jester X-suit
    if (preferences.helmet == 7)
        helmett3 = 1502003381; //Silvanus X-Suit
    if (preferences.helmet == 8)
        helmett3 = 1502003358;
    if (preferences.helmet == 9)
        helmett3 = 1502003350;
    if (preferences.helmet == 10)
        helmett3 = 1502003342;
    if (preferences.helmet == 11)
        helmett3 = 1502003336;
    if (preferences.helmet == 12)
        helmett3 = 1502003333;
    if (preferences.helmet == 13)
        helmett3 = 1502003327;
    if (preferences.helmet == 14)
        helmett3 = 1502003325;
    if (preferences.helmet == 15)
        helmett3 = 1502003299;
    if (preferences.helmet == 16)
        helmett3 = 1502003295;
    if (preferences.helmet == 17)
        helmett3 = 1502003222;
    if (preferences.helmet == 18)
        helmett3 = 1502003069;
    if (preferences.helmet == 19)
        helmett3 = 1502003054;
    if (preferences.helmet == 20)
        helmett3 = 1502003033;
    if (preferences.helmet == 21)
        helmett3 = 1502003016;
    if (preferences.helmet == 22)
        helmett3 = 1502003031;
    if (preferences.helmet == 23)
        helmett3 = 1502003023;
    if (preferences.helmet == 24)
        helmett3 = 1502003018;
    if (preferences.helmet == 25)
        helmett3 = 1502003410;
    if (preferences.helmet == 26)
        helmett3 = 1502003408;
    
    
    
    
    
    
    
    
    if (ModEmote1 == 0)
        sEmote1 = 2200101;
    if (ModEmote1 == 1)
        sEmote1 = 12220023;
    if (ModEmote1 == 2)
        sEmote1 = 12219677;
    if (ModEmote1 == 3)
        sEmote1 = 12219716;
    if (ModEmote1 == 4)
        sEmote1 = 12209401;
    if (ModEmote1 == 5)
        sEmote1 = 12209501;
    if (ModEmote1 == 6)
        sEmote1 = 12209701;
    if (ModEmote1 == 7)
        sEmote1 = 12209801;
    if (ModEmote1 == 8)
        sEmote1 = 12209901;
    
    
    if (ModEmote1 == 0)
        sEmote2 = 2200201;
    if (ModEmote1 == 1)
        sEmote2 = 12210201;
    if (ModEmote1 == 2)
        sEmote2 = 12210601;
    if (ModEmote1 == 3)
        sEmote2 = 12220028;
    if (ModEmote1 == 4)
        sEmote2 = 12219819;
    if (ModEmote1 == 5)
        sEmote2 = 12211801;
    if (ModEmote1 == 6)
        sEmote2 = 12212001;
    if (ModEmote1 == 7)
        sEmote2 = 12212201;
    if (ModEmote1 == 8)
        sEmote2 = 12212401;
    
    
    if (ModEmote1 == 0)
        sEmote3 = 2200301;
    if (ModEmote1 == 1)
        sEmote3 = 12212601;
    if (ModEmote1 == 2)
        sEmote3 = 12213201;
    if (ModEmote1 == 3)
        sEmote3 = 12219715;
    if (ModEmote1 == 4)
        sEmote3 = 12219814;
    if (ModEmote1 == 5)
        sEmote3 = 12213601;
    if (ModEmote1 == 6)
        sEmote3 = 12213801;
    if (ModEmote1 == 7)
        sEmote3 = 12214001;
    if (ModEmote1 == 8)
        sEmote3 = 12214201;
    
    
    
    if (preferences.Config.Skin.Parachute == 0)
        new_Skin.Parachute = 703001;
    if (preferences.Config.Skin.Parachute == 1)
        new_Skin.Parachute = 1401619; //Pharaoh's Scarab Parachute
    if (preferences.Config.Skin.Parachute == 2)
        new_Skin.Parachute = 1401625; // Enigmatic Nomad Parachute
    if (preferences.Config.Skin.Parachute == 3)
        new_Skin.Parachute = 1401624; //parashot Parachute
    if (preferences.Config.Skin.Parachute == 4)
        new_Skin.Parachute = 1401836; //Paperfold Gambit Parachute
    if (preferences.Config.Skin.Parachute == 5)
        new_Skin.Parachute = 1401833; //Labyrinth Beast Parachute
    if (preferences.Config.Skin.Parachute == 6)
        new_Skin.Parachute = 1401287; //Flamewraith Parachute
    if (preferences.Config.Skin.Parachute == 7)
        new_Skin.Parachute = 1401282; //Mega Kitty Parachute
    if (preferences.Config.Skin.Parachute == 8)
        new_Skin.Parachute = 1401385; //Mega Yeti Parachute
    if (preferences.Config.Skin.Parachute == 9)
        new_Skin.Parachute = 1401549; //Endless Glory Parachute
    if (preferences.Config.Skin.Parachute == 10)
        new_Skin.Parachute = 1401336; //Magma Skull Parachute
    if (preferences.Config.Skin.Parachute == 11)
        new_Skin.Parachute = 1401335; //Aquatic Fury Parachute
    if (preferences.Config.Skin.Parachute == 12)
        new_Skin.Parachute = 1401629; //CyberGen: Zero Parachute
    if (preferences.Config.Skin.Parachute == 13)
        new_Skin.Parachute = 1401628; //Radiant Phoenix Adarna Parachute
    if (preferences.Config.Skin.Parachute == 14)
        new_Skin.Parachute = 1401615; //Will of Horus
    if (preferences.Config.Skin.Parachute == 15)
        new_Skin.Parachute = 1401613; //Anubian Magistrate Parachute
    
    
    if (preferences.Config.Skin.Hieuungbay == 0)
        new_Skin.Hieuungbay = 4151001;
    if (preferences.Config.Skin.Hieuungbay == 1)
        new_Skin.Hieuungbay = 4151050; //Pharaoh's Scarab Parachute
    if (preferences.Config.Skin.Hieuungbay == 2)
        new_Skin.Hieuungbay = 4151052; // Enigmatic Nomad Parachute
    if (preferences.Config.Skin.Hieuungbay == 3)
        new_Skin.Hieuungbay = 4151054; //parashot Parachute
    if (preferences.Config.Skin.Hieuungbay == 4)
        new_Skin.Hieuungbay = 4151039; //Paperfold Gambit Parachute
    if (preferences.Config.Skin.Hieuungbay == 5)
        new_Skin.Hieuungbay = 4151048;
    if (preferences.Config.Skin.Hieuungbay == 6)
        new_Skin.Hieuungbay = 4151065;
    if (preferences.Config.Skin.Hieuungbay == 7)
        new_Skin.Hieuungbay = 4151066;
    if (preferences.Config.Skin.Hieuungbay == 8)
        new_Skin.Hieuungbay = 4151068;
    if (preferences.Config.Skin.Hieuungbay == 9)
        new_Skin.Hieuungbay = 4151070;
    if (preferences.Config.Skin.Hieuungbay == 10)
        new_Skin.Hieuungbay = 4151064;
    if (preferences.Config.Skin.Hieuungbay == 10)
        new_Skin.Hieuungbay = 4151067;
    if (preferences.Config.Skin.Hieuungbay == 11)
        new_Skin.Hieuungbay = 4151072;
    if (preferences.Config.Skin.Hieuungbay == 12)
        new_Skin.Hieuungbay = 4151075;
    if (preferences.Config.Skin.Hieuungbay == 13)
        new_Skin.Hieuungbay = 4151073;
    if (preferences.Config.Skin.Hieuungbay == 14)
        new_Skin.Hieuungbay = 4151085;
    if (preferences.Config.Skin.Hieuungbay == 15)
        new_Skin.Hieuungbay = 4151041;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    if (preferences.Config.Skin.Hieuungbay == 0)
        new_Skin.Hieuungbay = 4151001;
    if (preferences.Config.Skin.Hieuungbay == 1)
        new_Skin.Hieuungbay = 4151050; //Pharaoh's Scarab Parachute
    if (preferences.Config.Skin.Hieuungbay == 2)
        new_Skin.Hieuungbay = 4151052; // Enigmatic Nomad Parachute
    
    
    
    
    
    
    
    if (preferences.Config.Skin.Fac == 0)
        new_Skin.Fac = 1400560;
    if (preferences.Config.Skin.Fac == 1)
        new_Skin.Fac = 1400563; //Pharaoh's Scarab Parachute
    if (preferences.Config.Skin.Fac == 2)
        new_Skin.Fac = 1406001; // Enigmatic N
    
    
    
    if (preferences.Config.Skin.Pan == 0)
        new_Skin.Pan = 108004; // 108004 - Pan
    if (preferences.Config.Skin.Pan == 1)
        new_Skin.Pan = 1108004125; // Honeypot - Pan
    if (preferences.Config.Skin.Pan == 2)
        new_Skin.Pan = 1108004145; // Night of Rock - Pan
    if (preferences.Config.Skin.Pan == 3)
        new_Skin.Pan = 1108004160; // Crocodile - Pan
    if (preferences.Config.Skin.Pan == 4)
        new_Skin.Pan = 1108004283; // Accolade - Pan
    if (preferences.Config.Skin.Pan == 5)
        new_Skin.Pan = 1108004337; // Break Pad - Pan
    if (preferences.Config.Skin.Pan == 6)
        new_Skin.Pan = 1108004356; // Chicken Hot - Pan
    if (preferences.Config.Skin.Pan == 7)
        new_Skin.Pan = 1108004365; // Faerie Luster - Pan
    if (preferences.Config.Skin.Pan == 8)
        new_Skin.Pan = 1108004054; // Chicken Hot - Pan
    if (preferences.Config.Skin.Pan == 9)
        new_Skin.Pan = 1108004008;
    
    
    //--- Trang Phục -------
    
    if (preferences.Config.Skin.XSuits == 0) {
        new_Skin.XSuits = 403003;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 1) {
        new_Skin.XSuits = 1405628;
        new_Skin.XSuits1 = 1402578;
    }
    if (preferences.Config.Skin.XSuits == 2) {
        new_Skin.XSuits = 1405870;
        new_Skin.XSuits1 = 1403257;
    }
    if (preferences.Config.Skin.XSuits == 3) {
        new_Skin.XSuits = 1407140;
        new_Skin.XSuits1 = 1402874;
    }
    if (preferences.Config.Skin.XSuits == 4) {
        new_Skin.XSuits = 1407141;
        new_Skin.XSuits1 = 1403393;
    }
    if (preferences.Config.Skin.XSuits == 5) {
        new_Skin.XSuits = 1406311;
        new_Skin.XSuits1 = 1410011; //Mặt nạ 1.403.414
    }
    if (preferences.Config.Skin.XSuits == 6) {
        new_Skin.XSuits = 1406475;
        new_Skin.XSuits1 = 1410131;
    }
    if (preferences.Config.Skin.XSuits == 7) {
        new_Skin.XSuits = 1406638;
        new_Skin.XSuits1 = 1410242;
    }
    if (preferences.Config.Skin.XSuits == 8) {
        new_Skin.XSuits = 1406872;
        //new_Skin.XSuits1 = 1410346; // khung
        new_Skin.XSuits1 = 402133;
    }
    if (preferences.Config.Skin.XSuits == 9) {
        new_Skin.XSuits = 1406971;
        new_Skin.XSuits1 = 402147;
    }
    if (preferences.Config.Skin.XSuits == 10) {
        new_Skin.XSuits = 1407103;
        new_Skin.XSuits1 = 40604002;
    }
    
    if (preferences.Config.Skin.XSuits == 11) {
        new_Skin.XSuits = 1407391;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 12) {
        new_Skin.XSuits = 1407366;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 13) {
        new_Skin.XSuits = 1407330;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 14) {
        new_Skin.XSuits = 1407329;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 15) {
        new_Skin.XSuits = 1407286;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 16) {
        new_Skin.XSuits = 1407285;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 17) {
        new_Skin.XSuits = 1407277;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 18) {
        new_Skin.XSuits = 1407276;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 19) {
        new_Skin.XSuits = 1407275;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 20) {
        new_Skin.XSuits = 1407225;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 21) {
        new_Skin.XSuits = 1407224;
        new_Skin.XSuits1 = 40604002;
    }
    
    if (preferences.Config.Skin.XSuits == 23) {
        new_Skin.XSuits = 1407259;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 24) {
        new_Skin.XSuits = 1407161;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 25) {
        new_Skin.XSuits = 1407160;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 26) {
        new_Skin.XSuits = 1407107;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 27) {
        new_Skin.XSuits = 1407106;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 28) {
        new_Skin.XSuits = 1407079;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 29) {
        new_Skin.XSuits = 1407048;
        new_Skin.XSuits1 = 40604002;
    }
    
    if (preferences.Config.Skin.XSuits == 30) {
        new_Skin.XSuits = 1406977;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 31) {
        new_Skin.XSuits = 1406976;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 32) {
        new_Skin.XSuits = 1406898;
        new_Skin.XSuits1 = 40604002;
    }
    
    if (preferences.Config.Skin.XSuits == 33) {
        new_Skin.XSuits = 1400569;
        new_Skin.quan = 1400650;
        new_Skin.giay = 1404003;
    }
    if (preferences.Config.Skin.XSuits == 34) {
        new_Skin.XSuits = 1404000;
        new_Skin.quan = 1404002;
        new_Skin.giay = 1404003;
        new_Skin.Kaaba = 1410323;
    }
    if (preferences.Config.Skin.XSuits == 35) {
        new_Skin.XSuits = 1404049;
        new_Skin.quan = 1404050;
        new_Skin.giay = 1404051;
    }
    if (preferences.Config.Skin.XSuits == 36) {
        new_Skin.XSuits = 1400119;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 37) {
        new_Skin.XSuits = 1400117;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 38) {
        new_Skin.XSuits = 1406060;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 39) {
        new_Skin.XSuits = 1406891;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 40) {
        new_Skin.XSuits = 1400687;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 41) {
        new_Skin.XSuits = 1405160;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 42) {
        new_Skin.XSuits = 1405145;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 43) {
        new_Skin.XSuits = 1405436;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 44) {
        new_Skin.XSuits = 1405435;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 45) {
        new_Skin.XSuits = 1405434;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 46) {
        new_Skin.XSuits = 1405064;
        new_Skin.XSuits1 = 40604002;
    }
    
    
    if (preferences.Config.Skin.XSuits == 47) {
        new_Skin.XSuits = 1405207;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 48) {
        new_Skin.XSuits = 1406895;
        new_Skin.XSuits1 = 40604002;
    }
    
    if (preferences.Config.Skin.XSuits == 49) {
        new_Skin.XSuits = 1400333;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 50) {
        new_Skin.XSuits = 1400377;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 51) {
        new_Skin.XSuits = 1405092;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 52) {
        new_Skin.XSuits = 1405121;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 53) {
        new_Skin.XSuits = 1406889;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 54) {
        new_Skin.XSuits = 1407278;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 55) {
        new_Skin.XSuits = 1407279;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 56) {
        new_Skin.XSuits = 1407381;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 57) {
        new_Skin.XSuits = 1407380;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 58) {
        new_Skin.XSuits = 1407385;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 59) {
        new_Skin.XSuits = 1406389;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 60) {
        new_Skin.XSuits = 1406388;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 61) {
        new_Skin.XSuits = 1406387;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 62) {
        new_Skin.XSuits = 1406386;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 63) {
        new_Skin.XSuits = 1406385;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 64) {
        new_Skin.XSuits = 1406140;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 65) {
        new_Skin.XSuits = 1400782;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 66) {
        new_Skin.XSuits = 1407392;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 67) {
        new_Skin.XSuits = 1407318;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 68) {
        new_Skin.XSuits = 1407317;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 69) {
        new_Skin.XSuits = 1407404;
        new_Skin.XSuits1 = 40604002;
    }
    
    if (preferences.Config.Skin.XSuits == 70) {
        new_Skin.XSuits = 1407402;
        new_Skin.XSuits1 = 40604002;
    }
    
    
    if (preferences.Config.Skin.XSuits == 71) {
        new_Skin.XSuits = 1407401;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 72) {
        new_Skin.XSuits = 1407387;
        new_Skin.XSuits1 = 40604002;
    }
    if (preferences.Config.Skin.XSuits == 73) {
        new_Skin.XSuits = 1407066;
        new_Skin.XSuits1 = 40604002;
        new_Skin.Kaaba = 1410517;
    }
  
    
    
    
    
    
    //----------------------
    
    if (preferences.Config.Skin.AKM == 0) {
        new_Skin.AKM = 101001;
        new_Skin.AKM_Mag = 291001;
        new_Skin.AKM_flash = 201010;
        new_Skin.AKM_compe = 201009;
        new_Skin.AKM_silent = 201011;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 203002;
        new_Skin.AKM_x2 = 203003;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 203004;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    if (preferences.Config.Skin.AKM == 1){
        new_Skin.AKM = 1101001213;
        new_Skin.AKM_Mag = 1010012131;
        new_Skin.AKM_flash = 1010012067;
        new_Skin.AKM_compe = 1010012068;
        new_Skin.AKM_silent = 1010012069;
        new_Skin.AKM_reddot = 1010012066;
        new_Skin.AKM_holo = 1010012065;
        new_Skin.AKM_x2 = 1010012064;
        new_Skin.AKM_x3 = 1010012063;
        new_Skin.AKM_x4 = 1010012062;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 1010012070;
        new_Skin.AKM_extendedMag = 1010012072;
        new_Skin.AKM_quickNextended = 1010012073;
    }
    if (preferences.Config.Skin.AKM == 2) {
        new_Skin.AKM = 1101001103;
        new_Skin.AKM_Mag = 1010011031;
        new_Skin.AKM_flash = 201010;
        new_Skin.AKM_compe = 201009;
        new_Skin.AKM_silent = 201011;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 203002;
        new_Skin.AKM_x2 = 203003;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 203004;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    if (preferences.Config.Skin.AKM == 3) {
        new_Skin.AKM = 1101001116;
        new_Skin.AKM_Mag = 1010011161;
        new_Skin.AKM_compe = 1010011107;
        new_Skin.AKM_silent = 1010011108;
        new_Skin.AKM_reddot = 1010011105;
        new_Skin.AKM_holo = 1010011104;
        new_Skin.AKM_x2 = 1010011103;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 1010011102;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 1010011109;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 1010011112;
    }
    if (preferences.Config.Skin.AKM == 4) {
        new_Skin.AKM = 1101001128;
        new_Skin.AKM_Mag = 1010011281;
        new_Skin.AKM_flash = 1010011232;
        new_Skin.AKM_compe = 1010011233;
        new_Skin.AKM_silent = 1010011234;
        new_Skin.AKM_reddot = 1010011226;
        new_Skin.AKM_holo = 1010011225;
        new_Skin.AKM_x2 = 1010011224;
        new_Skin.AKM_x3 = 1010011223;
        new_Skin.AKM_x4 = 1010011222;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 1010011227;
        new_Skin.AKM_extendedMag = 1010011228;
        new_Skin.AKM_quickNextended = 1010011229;
    }
    if (preferences.Config.Skin.AKM == 5) {
        new_Skin.AKM = 1101001143;
        new_Skin.AKM_Mag = 1010011431;
        new_Skin.AKM_flash = 201010;
        new_Skin.AKM_compe = 201009;
        new_Skin.AKM_silent = 201011;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 203002;
        new_Skin.AKM_x2 = 203003;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 203004;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    if (preferences.Config.Skin.AKM == 6) {
        new_Skin.AKM = 1101001154;
        new_Skin.AKM_Mag = 1010011541;
        new_Skin.AKM_flash = 1010011487;
        new_Skin.AKM_compe = 1010011488;
        new_Skin.AKM_silent = 1010011489;
        new_Skin.AKM_reddot = 1010011486;
        new_Skin.AKM_holo = 1010011485;
        new_Skin.AKM_x2 = 1010011484;
        new_Skin.AKM_x3 = 1010011483;
        new_Skin.AKM_x4 = 1010011482;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 1010011490;
        new_Skin.AKM_extendedMag = 1010011493;
        new_Skin.AKM_quickNextended = 1010011494;
    }
    if (preferences.Config.Skin.AKM == 7) {
        new_Skin.AKM = 1101001174;
        new_Skin.AKM_Mag = 1010011741;
        new_Skin.AKM_flash = 1010011667;
        new_Skin.AKM_compe = 1010011668;
        new_Skin.AKM_silent = 1010011669;
        new_Skin.AKM_reddot = 1010011666;
        new_Skin.AKM_holo = 1010012265;
        new_Skin.AKM_x2 = 1010011664;
        new_Skin.AKM_x3 = 1010011663;
        new_Skin.AKM_x4 = 1010011662;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 1010011670;
        new_Skin.AKM_extendedMag = 1010011673;
        new_Skin.AKM_quickNextended = 1010011674;
    }
    if (preferences.Config.Skin.AKM == 8) {
        new_Skin.AKM = 1101001231;
        new_Skin.AKM_Mag = 1010012311;
        new_Skin.AKM_flash = 1010012267;
        new_Skin.AKM_compe = 1010012274;
        new_Skin.AKM_silent = 1010012269;
        new_Skin.AKM_reddot = 1010012266;
        new_Skin.AKM_holo = 1010012265;
        new_Skin.AKM_x2 = 1010012264;
        new_Skin.AKM_x3 = 1010012263;
        new_Skin.AKM_x4 = 1010012262;
        new_Skin.AKM_x6 = 1010012276;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    if (preferences.Config.Skin.AKM == 9) {
        new_Skin.AKM = 1101001089;
        new_Skin.AKM_Mag = 1010010891;
        new_Skin.AKM_flash = 201010;
        new_Skin.AKM_compe = 201009;
        new_Skin.AKM_silent = 201011;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 203002;
        new_Skin.AKM_x2 = 203003;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 203004;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    
    if (preferences.Config.Skin.AKM == 10) {
        new_Skin.AKM = 1101001242;
        new_Skin.AKM_Mag = 1010012421;
        new_Skin.AKM_flash = 201010;
        new_Skin.AKM_compe = 201009;
        new_Skin.AKM_silent = 201011;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 203002;
        new_Skin.AKM_x2 = 203003;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 203004;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    if (preferences.Config.Skin.AKM == 11) {
        new_Skin.AKM = 1101001249;
        new_Skin.AKM_Mag = 1010012491;
        new_Skin.AKM_flash = 1010012507;
        new_Skin.AKM_compe = 1010012508;
        new_Skin.AKM_silent = 1010012509;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 1010012505;
        new_Skin.AKM_x2 = 1010012504;
        new_Skin.AKM_x3 = 1010012503;
        new_Skin.AKM_x4 = 1010012502;
        new_Skin.AKM_x6 = 1010012516;
        new_Skin.AKM_quickMag = 1010012512;
        new_Skin.AKM_extendedMag = 1010012513;
        new_Skin.AKM_quickNextended = 1010012514;
    }
    if (preferences.Config.Skin.AKM == 12) {
        new_Skin.AKM = 1101001256;
        new_Skin.AKM_Mag = 1010012491;
        new_Skin.AKM_flash = 1010012507;
        new_Skin.AKM_compe = 1010012508;
        new_Skin.AKM_silent = 1010012509;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 1010012505;
        new_Skin.AKM_x2 = 1010012504;
        new_Skin.AKM_x3 = 1010012503;
        new_Skin.AKM_x4 = 1010012502;
        new_Skin.AKM_x6 = 1010012516;
        new_Skin.AKM_quickMag = 1010012512;
        new_Skin.AKM_extendedMag = 1010012513;
        new_Skin.AKM_quickNextended = 1010012514;
    }
    if (preferences.Config.Skin.AKM == 13) {
        new_Skin.AKM = 1101001023;
        new_Skin.AKM_Mag = 291001;
        new_Skin.AKM_flash = 201010;
        new_Skin.AKM_compe = 201009;
        new_Skin.AKM_silent = 201011;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 203002;
        new_Skin.AKM_x2 = 203003;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 203004;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    if (preferences.Config.Skin.AKM == 14) {
        new_Skin.AKM = 1101001068;
        new_Skin.AKM_Mag = 291001;
        new_Skin.AKM_flash = 201010;
        new_Skin.AKM_compe = 201009;
        new_Skin.AKM_silent = 201011;
        new_Skin.AKM_reddot = 203001;
        new_Skin.AKM_holo = 203002;
        new_Skin.AKM_x2 = 203003;
        new_Skin.AKM_x3 = 203014;
        new_Skin.AKM_x4 = 203004;
        new_Skin.AKM_x6 = 203015;
        new_Skin.AKM_quickMag = 204012;
        new_Skin.AKM_extendedMag = 204011;
        new_Skin.AKM_quickNextended = 204013;
    }
    
    
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    if (preferences.Config.Skin.M16A4 == 0) {
        new_Skin.M16A4 = 101002;
        new_Skin.M16A4_Stock = 205007;
        new_Skin.M16A4_Mag = 291002;
    }
    if (preferences.Config.Skin.M16A4 == 1) {
        new_Skin.M16A4 = 1101002029;
        new_Skin.M16A4_Stock = 1010020292;
        new_Skin.M16A4_Mag = 1010020291;
    }
    if (preferences.Config.Skin.M16A4 == 2) {
        new_Skin.M16A4 = 1101002056;
        new_Skin.M16A4_Stock = 1010020562;
        new_Skin.M16A4_Mag = 1010020561;
    }
    if (preferences.Config.Skin.M16A4 == 3) {
        new_Skin.M16A4 = 1101002068;
        new_Skin.M16A4_Stock = 1010020682;
        new_Skin.M16A4_Mag = 1010020681;
    }
    if (preferences.Config.Skin.M16A4 == 4) {
        new_Skin.M16A4 = 1101002081;
        new_Skin.M16A4_Stock = 1010020812;
        new_Skin.M16A4_Mag = 1010020811;
    }
    if (preferences.Config.Skin.M16A4 == 5) {
        new_Skin.M16A4 = 1101002103;
        new_Skin.M16A4_Stock = 1010021032;
        new_Skin.M16A4_Mag = 1010021031;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    if (preferences.Config.Skin.Scar == 0) {
        new_Skin.Scar = 101003;
        new_Skin.Scar_Mag = 291003;
        new_Skin.Scar_3 = 203007;
        new_Skin.Scar_flash = 201010;
        new_Skin.Scar_compe = 201009;
        new_Skin.Scar_silent = 201011;
        new_Skin.Scar_reddot = 203001;
        new_Skin.Scar_holo = 203002;
        new_Skin.Scar_x2 = 203003;
        new_Skin.Scar_x3 = 203014;
        new_Skin.Scar_x4 = 203004;
        new_Skin.Scar_x6 = 203015;
        new_Skin.Scar_quickMag = 204012;
        new_Skin.Scar_extendedMag = 204011;
        new_Skin.Scar_quickNextended = 204013;
        new_Skin.Scar_verical = 202002;
        new_Skin.Scar_angle = 202001;
        new_Skin.Scar_lightgrip = 202004;
        new_Skin.Scar_pink = 202005;
        new_Skin.Scar_lazer = 202007;
        new_Skin.Scar_thumb = 202006;
    }
    if (preferences.Config.Skin.Scar == 1){
        
        new_Skin.Scar = 1101003167;
        new_Skin.Scar_Mag = 1010031671;
        new_Skin.Scar_3 = 1010031672;
        new_Skin.Scar_flash = 1010031609;
        new_Skin.Scar_compe = 1010031610;
        new_Skin.Scar_silent = 1010031613;
        new_Skin.Scar_reddot = 1010031606;
        new_Skin.Scar_holo = 1010031605;
        new_Skin.Scar_x2 = 1010031604;
        new_Skin.Scar_x3 = 1010031603;
        new_Skin.Scar_x4 = 1010031602;
        new_Skin.Scar_quickMag = 1010031607;
        new_Skin.Scar_extendedMag = 1010031608;
        new_Skin.Scar_quickNextended = 1010031617;
        new_Skin.Scar_verical = 1010031615;
        new_Skin.Scar_angle = 1010031614;
        new_Skin.Scar_lightgrip = 202004;
        new_Skin.Scar_thumb = 1010031616;
        
    }
    if (preferences.Config.Skin.Scar == 2) {
        new_Skin.Scar = 1101003070;
        new_Skin.Scar_Mag = 1010030701;
        new_Skin.Scar_3 = 1010030702;
    }
    if (preferences.Config.Skin.Scar == 3) {
        new_Skin.Scar = 1101003080;
        new_Skin.Scar_Mag = 1010030801;
        new_Skin.Scar_3 = 1010030802;
    }
    if (preferences.Config.Skin.Scar == 4) {
        new_Skin.Scar = 1101003119;
        new_Skin.Scar_Mag = 1010031191;
        new_Skin.Scar_3 = 1010031192;
        new_Skin.Scar_flash = 1010031139;
        new_Skin.Scar_compe = 1010031140;
        new_Skin.Scar_silent = 1010031142;
        new_Skin.Scar_reddot = 1010031136;
        new_Skin.Scar_holo = 1010031135;
        new_Skin.Scar_x2 = 1010031134;
        new_Skin.Scar_x3 = 1010031133;
        new_Skin.Scar_x4 = 1010031132;
        new_Skin.Scar_quickMag = 1010031137;
        new_Skin.Scar_extendedMag = 1010031138;
        new_Skin.Scar_quickNextended = 1010031146;
        new_Skin.Scar_verical = 1010031144;
        new_Skin.Scar_angle = 1010031143;
        new_Skin.Scar_lightgrip = 202004;
        new_Skin.Scar_thumb = 1010031145;
    }
    if (preferences.Config.Skin.Scar == 5) {
        new_Skin.Scar = 1101003146;
        new_Skin.Scar_Mag = 1010031461;
        new_Skin.Scar_3 = 1010031462;
    }
    if (preferences.Config.Skin.Scar == 6) {
        new_Skin.Scar = 1101003181;
        new_Skin.Scar_Mag = 1010031811;
        new_Skin.Scar_flash = 1010031765;
        new_Skin.Scar_compe = 1010031764;
        new_Skin.Scar_silent = 1010031766;
        new_Skin.Scar_reddot = 1010031757;
        new_Skin.Scar_holo = 1010031756;
        new_Skin.Scar_x2 = 1010031755;
        new_Skin.Scar_x3 = 1010031754;
        new_Skin.Scar_x4 = 1010031753;
        new_Skin.Scar_x6 = 1010031752;
        new_Skin.Scar_quickMag = 1010031758;
        new_Skin.Scar_extendedMag = 1010031759;
        new_Skin.Scar_quickNextended = 1010031763;
        new_Skin.Scar_verical = 1010031769;
        new_Skin.Scar_angle = 1010031767;
        new_Skin.Scar_lightgrip = 1010031773;
        new_Skin.Scar_pink = 1010031774;
        new_Skin.Scar_lazer = 1010031772;
        new_Skin.Scar_thumb = 1010031768;
    }
    
    if (preferences.Config.Skin.Scar == 7) {
        new_Skin.Scar = 1101003195;
        new_Skin.Scar_Mag = 291003;
        new_Skin.Scar_3 = 203007;
        new_Skin.Scar_flash = 201010;
        new_Skin.Scar_compe = 201009;
        new_Skin.Scar_silent = 201011;
        new_Skin.Scar_reddot = 203001;
        new_Skin.Scar_holo = 203002;
        new_Skin.Scar_x2 = 203003;
        new_Skin.Scar_x3 = 203014;
        new_Skin.Scar_x4 = 203004;
        new_Skin.Scar_x6 = 203015;
        new_Skin.Scar_quickMag = 204012;
        new_Skin.Scar_extendedMag = 204011;
        new_Skin.Scar_quickNextended = 204013;
        new_Skin.Scar_verical = 202002;
        new_Skin.Scar_angle = 202001;
        new_Skin.Scar_lightgrip = 202004;
        new_Skin.Scar_pink = 202005;
        new_Skin.Scar_lazer = 202007;
        new_Skin.Scar_thumb = 202006;
    }
    
    if (preferences.Config.Skin.Scar == 8) {
        new_Skin.Scar = 1101003099;
        new_Skin.Scar_Mag = 291003;
        new_Skin.Scar_3 = 203007;
        new_Skin.Scar_flash = 201010;
        new_Skin.Scar_compe = 201009;
        new_Skin.Scar_silent = 201011;
        new_Skin.Scar_reddot = 203001;
        new_Skin.Scar_holo = 203002;
        new_Skin.Scar_x2 = 203003;
        new_Skin.Scar_x3 = 203014;
        new_Skin.Scar_x4 = 203004;
        new_Skin.Scar_x6 = 203015;
        new_Skin.Scar_quickMag = 204012;
        new_Skin.Scar_extendedMag = 204011;
        new_Skin.Scar_quickNextended = 204013;
        new_Skin.Scar_verical = 202002;
        new_Skin.Scar_angle = 202001;
        new_Skin.Scar_lightgrip = 202004;
        new_Skin.Scar_pink = 202005;
        new_Skin.Scar_lazer = 202007;
        new_Skin.Scar_thumb = 202006;
    }
    
    if (preferences.Config.Skin.Scar == 9) {
        new_Skin.Scar = 1101003173;
        new_Skin.Scar_Mag = 291003;
        new_Skin.Scar_3 = 203007;
        new_Skin.Scar_flash = 201010;
        new_Skin.Scar_compe = 201009;
        new_Skin.Scar_silent = 201011;
        new_Skin.Scar_reddot = 203001;
        new_Skin.Scar_holo = 203002;
        new_Skin.Scar_x2 = 203003;
        new_Skin.Scar_x3 = 203014;
        new_Skin.Scar_x4 = 203004;
        new_Skin.Scar_x6 = 203015;
        new_Skin.Scar_quickMag = 204012;
        new_Skin.Scar_extendedMag = 204011;
        new_Skin.Scar_quickNextended = 204013;
        new_Skin.Scar_verical = 202002;
        new_Skin.Scar_angle = 202001;
        new_Skin.Scar_lightgrip = 202004;
        new_Skin.Scar_pink = 202005;
        new_Skin.Scar_lazer = 202007;
        new_Skin.Scar_thumb = 202006;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    if (preferences.Config.Skin.M416 == 0) {
        new_Skin.M416_1 = 101004;
        new_Skin.M416_2 = 291004;
        new_Skin.M416_3 = 203008;
        new_Skin.M416_4 = 205005;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 1) {
        new_Skin.M416_1 = 1101004046;
        new_Skin.M416_2 = 1010040461;
        new_Skin.M416_3 = 1010040462;
        new_Skin.M416_4 = 1010040463;
        new_Skin.M416_flash = 1010040474;
        new_Skin.M416_compe = 1010040475;
        new_Skin.M416_silent = 1010040476;
        new_Skin.M416_reddot = 1010040470;
        new_Skin.M416_holo = 1010040469;
        new_Skin.M416_x2 = 1010040468;
        new_Skin.M416_x3 = 1010040467;
        new_Skin.M416_x4 = 1010040466;
        new_Skin.M416_x6 = 1010040481;
        new_Skin.M416_quickMag = 1010040471;
        new_Skin.M416_extendedMag = 1010040472;
        new_Skin.M416_quickNextended = 1010040473;
        new_Skin.M416_stock = 1010040480;
        new_Skin.M416_verical = 1010040479;
        new_Skin.M416_thumb = 1010040478;
        new_Skin.M416_angle = 1010040477;
        new_Skin.M416_lightgrip = 1010040482;
        new_Skin.M416_pink = 1010040483;
        new_Skin.M416_lazer = 1010040484;
    }
    if (preferences.Config.Skin.M416 == 2) {
        new_Skin.M416_1 = 1101004062;
        new_Skin.M416_2 = 1010040611;
        new_Skin.M416_3 = 1010040612;
        new_Skin.M416_4 = 1010040613;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 3) {
        new_Skin.M416_1 = 1101004078;
        new_Skin.M416_2 = 1010040781;
        new_Skin.M416_3 = 1010040782;
        new_Skin.M416_4 = 1010040783;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 4) {
        new_Skin.M416_1 = 1101004086;
        new_Skin.M416_2 = 1010040861;
        new_Skin.M416_3 = 1010040862;
        new_Skin.M416_4 = 1010040863;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 5) {
        new_Skin.M416_1 = 1101004098;
        new_Skin.M416_2 = 1010040981;
        new_Skin.M416_3 = 1010040982;
        new_Skin.M416_4 = 1010040983;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 6) {
        new_Skin.M416_1 = 1101004138;
        new_Skin.M416_2 = 1010041381;
        new_Skin.M416_3 = 1010041382;
        new_Skin.M416_4 = 1010041383;
        new_Skin.M416_flash = 1010041136;
        new_Skin.M416_compe = 1010041137;
        new_Skin.M416_silent = 1010041138;
        new_Skin.M416_reddot = 1010041128;
        new_Skin.M416_holo = 1010041127;
        new_Skin.M416_x2 = 1010041126;
        new_Skin.M416_x3 = 1010041125;
        new_Skin.M416_x4 = 1010041124;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 1010041134;
        new_Skin.M416_extendedMag = 1010041129;
        new_Skin.M416_quickNextended = 1010041135;
        new_Skin.M416_stock = 1010041146;
        new_Skin.M416_verical = 1010041145;
        new_Skin.M416_angle = 1010041139;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 7) {
        new_Skin.M416_1 = 1101004163;
        new_Skin.M416_2 = 1010041631;
        new_Skin.M416_3 = 1010041632;
        new_Skin.M416_4 = 1010041633;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 1010041574;
        new_Skin.M416_silent = 1010041575;
        new_Skin.M416_reddot = 1010041566;
        new_Skin.M416_holo = 1010041565;
        new_Skin.M416_x2 = 1010041564;
        new_Skin.M416_x3 = 1010041560;
        new_Skin.M416_x4 = 1010041554;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 1010041568;
        new_Skin.M416_extendedMag = 1010041569;
        new_Skin.M416_quickNextended = 1010041567;
        new_Skin.M416_stock = 1010041579;
        new_Skin.M416_verical = 1010041578;
        new_Skin.M416_angle = 1010041576;
        new_Skin.M416_lightgrip = 20200400;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 1010041577;
    }
    if (preferences.Config.Skin.M416 == 8) {
        new_Skin.M416_1 = 1101004201;
        new_Skin.M416_2 = 1010042011;
        new_Skin.M416_3 = 1010042012;
        new_Skin.M416_4 = 1010042013;
        new_Skin.M416_flash = 1010041956;
        new_Skin.M416_compe = 1010041957;
        new_Skin.M416_silent = 1010041958;
        new_Skin.M416_reddot = 1010041948;
        new_Skin.M416_holo = 1010041947;
        new_Skin.M416_x2 = 1010041946;
        new_Skin.M416_x3 = 1010041945;
        new_Skin.M416_x4 = 1010041944;
        new_Skin.M416_x6 = 1010041967;
        new_Skin.M416_quickMag = 1010041949;
        new_Skin.M416_extendedMag = 1010041950;
        new_Skin.M416_quickNextended = 1010041955;
        new_Skin.M416_stock = 1010041966;
        new_Skin.M416_verical = 1010041965;
        new_Skin.M416_angle = 1010041959;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 9) {
        new_Skin.M416_1 = 1101004209;
        new_Skin.M416_2 = 1010042073;
        new_Skin.M416_3 = 1010042083;
        new_Skin.M416_4 = 1010042093;
        new_Skin.M416_flash = 20101000;
        new_Skin.M416_compe = 1010042037;
        new_Skin.M416_silent = 1010042039;
        new_Skin.M416_reddot = 1010042029;
        new_Skin.M416_holo = 1010042028;
        new_Skin.M416_x2 = 1010042027;
        new_Skin.M416_x3 = 1010042026;
        new_Skin.M416_x4 = 1010042025;
        new_Skin.M416_x6 = 1010042024;
        new_Skin.M416_quickMag = 1010042034;
        new_Skin.M416_extendedMag = 1010042035;
        new_Skin.M416_quickNextended = 1010042036;
        new_Skin.M416_stock = 1010042047;
        new_Skin.M416_verical = 1010042046;
        new_Skin.M416_angle = 1010042044;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 10) {
        new_Skin.M416_1 = 1101004218;
        new_Skin.M416_2 = 1010042181;
        new_Skin.M416_3 = 1010042182;
        new_Skin.M416_4 = 1010042183;
        new_Skin.M416_flash = 1010042128;
        new_Skin.M416_compe = 1010042127;
        new_Skin.M416_silent = 1010042129;
        new_Skin.M416_reddot = 1010042119;
        new_Skin.M416_holo = 1010042118;
        new_Skin.M416_x2 = 1010042117;
        new_Skin.M416_x3 = 1010042116;
        new_Skin.M416_x4 = 1010042115;
        new_Skin.M416_x6 = 1010042114;
        new_Skin.M416_quickMag = 1010042125;
        new_Skin.M416_extendedMag = 1010042124;
        new_Skin.M416_quickNextended = 1010042126;
        new_Skin.M416_stock = 1010042137;
        new_Skin.M416_verical = 1010042136;
        new_Skin.M416_angle = 1010042134;
        new_Skin.M416_lightgrip = 1010042138;
        new_Skin.M416_pink = 1010042139;
        new_Skin.M416_lazer = 1010042144;
        new_Skin.M416_thumb = 1010042135;
        
    }
    if (preferences.Config.Skin.M416 == 11) {
        new_Skin.M416_1 = 1101004226;
        new_Skin.M416_2 = 1010042214;
        new_Skin.M416_3 = 1010042215;
        new_Skin.M416_4 = 1010042216;
        new_Skin.M416_flash = 1010042238;
        new_Skin.M416_compe = 1010042237;
        new_Skin.M416_silent = 1010042239;
        new_Skin.M416_reddot = 1010042233;
        new_Skin.M416_holo = 1010042232;
        new_Skin.M416_x2 = 1010042231;
        new_Skin.M416_x3 = 1010042219;
        new_Skin.M416_x4 = 1010042218;
        new_Skin.M416_x6 = 1010042217;
        new_Skin.M416_quickMag = 1010042235;
        new_Skin.M416_extendedMag = 1010042234;
        new_Skin.M416_quickNextended = 1010042236;
        new_Skin.M416_stock = 1010042244;
        new_Skin.M416_verical = 1010042243;
        new_Skin.M416_angle = 1010042241;
        new_Skin.M416_lightgrip = 1010042245;
        new_Skin.M416_pink = 1010042246;
        new_Skin.M416_lazer = 1010042247;
        new_Skin.M416_thumb = 1010042242;
        
    }
    
    if (preferences.Config.Skin.M416 == 12) {
        new_Skin.M416_1 = 1101004154;
        new_Skin.M416_2 = 291004;
        new_Skin.M416_3 = 203008;
        new_Skin.M416_4 = 205005;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 13) {
        new_Skin.M416_1 = 1101004151;
        new_Skin.M416_2 = 291004;
        new_Skin.M416_3 = 203008;
        new_Skin.M416_4 = 205005;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 14) {
        new_Skin.M416_1 = 1101004089;
        new_Skin.M416_2 = 291004;
        new_Skin.M416_3 = 203008;
        new_Skin.M416_4 = 205005;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 15) {
        new_Skin.M416_1 = 1101004034;
        new_Skin.M416_2 = 291004;
        new_Skin.M416_3 = 203008;
        new_Skin.M416_4 = 205005;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 16) {
        new_Skin.M416_1 = 1101004002;
        new_Skin.M416_2 = 291004;
        new_Skin.M416_3 = 203008;
        new_Skin.M416_4 = 205005;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    if (preferences.Config.Skin.M416 == 17) {
        new_Skin.M416_1 = 1101004227;
        new_Skin.M416_2 = 291004;
        new_Skin.M416_3 = 203008;
        new_Skin.M416_4 = 205005;
        new_Skin.M416_flash = 201010;
        new_Skin.M416_compe = 201009;
        new_Skin.M416_silent = 201011;
        new_Skin.M416_reddot = 203001;
        new_Skin.M416_holo = 203002;
        new_Skin.M416_x2 = 203003;
        new_Skin.M416_x3 = 203014;
        new_Skin.M416_x4 = 203004;
        new_Skin.M416_x6 = 203015;
        new_Skin.M416_quickMag = 204012;
        new_Skin.M416_extendedMag = 204011;
        new_Skin.M416_quickNextended = 204013;
        new_Skin.M416_stock = 205002;
        new_Skin.M416_verical = 203015;
        new_Skin.M416_angle = 202001;
        new_Skin.M416_lightgrip = 202004;
        new_Skin.M416_pink = 202005;
        new_Skin.M416_lazer = 203015;
        new_Skin.M416_thumb = 202006;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.Groza == 0) {
        new_Skin.Groza = 101005;
        new_Skin.Groza_2 = 291005;
        new_Skin.Groza_silent = 201011;
        new_Skin.Groza_reddot = 203001;
        new_Skin.Groza_holo = 203002;
        new_Skin.Groza_x2 = 203003;
        new_Skin.Groza_x3 = 203014;
        new_Skin.Groza_x4 = 203004;
        new_Skin.Groza_x6 = 203015;
        new_Skin.Groza_quickMag = 204012;
        new_Skin.Groza_extendedMag = 204011;
        new_Skin.Groza_quickNextended = 204013;
    }
    if (preferences.Config.Skin.Groza == 1) {
        
        new_Skin.Groza = 1101005052;
        new_Skin.Groza_2 = 1010050521;
        new_Skin.Groza_silent = 1010050467;
        new_Skin.Groza_reddot = 1010050466;
        new_Skin.Groza_holo = 1010050465;
        new_Skin.Groza_x2 = 1010050464;
        new_Skin.Groza_x3 = 1010050463;
        new_Skin.Groza_x4 = 1010050462;
        new_Skin.Groza_x6 = 203015;
        new_Skin.Groza_quickMag = 1010050468;
        new_Skin.Groza_extendedMag = 1010050469;
        new_Skin.Groza_quickNextended = 1010050470;
    }
    if (preferences.Config.Skin.Groza == 2) {
        new_Skin.Groza = 1101005025;
        new_Skin.Groza_2 = 1010050251;
        new_Skin.Groza_silent = 201011;
        new_Skin.Groza_reddot = 203001;
        new_Skin.Groza_holo = 203002;
        new_Skin.Groza_x2 = 203003;
        new_Skin.Groza_x3 = 203014;
        new_Skin.Groza_x4 = 203004;
        new_Skin.Groza_x6 = 203015;
        new_Skin.Groza_quickMag = 204012;
        new_Skin.Groza_extendedMag = 204011;
        new_Skin.Groza_quickNextended = 204013;
    }
    if (preferences.Config.Skin.Groza == 3) {
        new_Skin.Groza = 1101005019;
        new_Skin.Groza_2 = 1010050191;
        new_Skin.Groza_silent = 201011;
        new_Skin.Groza_reddot = 203001;
        new_Skin.Groza_holo = 203002;
        new_Skin.Groza_x2 = 203003;
        new_Skin.Groza_x3 = 203014;
        new_Skin.Groza_x4 = 203004;
        new_Skin.Groza_x6 = 203015;
        new_Skin.Groza_quickMag = 204012;
        new_Skin.Groza_extendedMag = 204011;
        new_Skin.Groza_quickNextended = 204013;
    }
    if (preferences.Config.Skin.Groza == 4) {
        new_Skin.Groza = 1101005043;
        new_Skin.Groza_2 = 1010050431;
        new_Skin.Groza_silent = 201011;
        new_Skin.Groza_reddot = 203001;
        new_Skin.Groza_holo = 203002;
        new_Skin.Groza_x2 = 203003;
        new_Skin.Groza_x3 = 203014;
        new_Skin.Groza_x4 = 203004;
        new_Skin.Groza_x6 = 203015;
        new_Skin.Groza_quickMag = 204012;
        new_Skin.Groza_extendedMag = 204011;
        new_Skin.Groza_quickNextended = 204013;
    }
    if (preferences.Config.Skin.Groza == 5) {
        new_Skin.Groza = 1101005038;
        new_Skin.Groza_2 = 1010050381;
        new_Skin.Groza_silent = 1010050327;
        new_Skin.Groza_reddot = 1010050326;
        new_Skin.Groza_holo = 1010050325;
        new_Skin.Groza_x2 = 1010050324;
        new_Skin.Groza_x3 = 1010050323;
        new_Skin.Groza_x4 = 1010050322;
        new_Skin.Groza_x6 = 203015;
        new_Skin.Groza_quickMag = 1010050328;
        new_Skin.Groza_extendedMag = 1010050329;
        new_Skin.Groza_quickNextended = 1010050330;
    }
    if (preferences.Config.Skin.Groza == 6) {
        new_Skin.Groza = 1101005082;
        new_Skin.Groza_2 = 1010050821;
        new_Skin.Groza_silent = 201011;
        new_Skin.Groza_reddot = 203001;
        new_Skin.Groza_holo = 203002;
        new_Skin.Groza_x2 = 203003;
        new_Skin.Groza_x3 = 203014;
        new_Skin.Groza_x4 = 203004;
        new_Skin.Groza_x6 = 203015;
        new_Skin.Groza_quickMag = 204012;
        new_Skin.Groza_extendedMag = 204011;
        new_Skin.Groza_quickNextended = 204013;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.Famas == 0) {
        new_Skin.Famas = 101100;
        new_Skin.Famas_reddot = 203001;
        new_Skin.Famas_holo = 203002;
        new_Skin.Famas_x2 = 203003;
        new_Skin.Famas = 203014;
        new_Skin.Famas_x4 = 203004;
        new_Skin.Famas_x6 = 203015;
    }
    if (preferences.Config.Skin.Famas == 1) {
        new_Skin.Famas = 1101100012;
        new_Skin.Famas_reddot = 203001;
        new_Skin.Famas_holo = 203002;
        new_Skin.Famas_x2 = 203003;
        new_Skin.Famas = 203014;
        new_Skin.Famas_x4 = 203004;
        new_Skin.Famas_x6 = 203015;
    }
    if (preferences.Config.Skin.Famas == 2) {
        new_Skin.Famas = 1101100013;
        new_Skin.Famas_reddot = 203001;
        new_Skin.Famas_holo = 203002;
        new_Skin.Famas_x2 = 203003;
        new_Skin.Famas = 203014;
        new_Skin.Famas_x4 = 203004;
        new_Skin.Famas_x6 = 203015;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.AUG == 0){
        new_Skin.AUG = 101006;
        new_Skin.AUG_reddot = 203001;
        new_Skin.AUG_holo = 203002;
        new_Skin.AUG_x2 = 203003;
        new_Skin.AUG_x3 = 203014;
        new_Skin.AUG_x4 = 203004;
        new_Skin.AUG_x6 = 203015;
    }
    
    if (preferences.Config.Skin.AUG == 1){
        new_Skin.AUG = 1101006062;
        new_Skin.AUG_reddot = 1010060562;
        new_Skin.AUG_holo = 1010060561;
        new_Skin.AUG_x2 = 1010060554;
        new_Skin.AUG_x3 = 1010060553;
        new_Skin.AUG_x4 = 1010060552;
        new_Skin.AUG_x6 = 1010060551;
        new_Skin.AUG_lazer = 1010060574;
        new_Skin.AUG_flash = 1010060571;
    }
    
    
    
    if (preferences.Config.Skin.AUG == 2){
        new_Skin.AUG = 1101006044;
        new_Skin.AUG = 101006;
        new_Skin.AUG_reddot = 203001;
        new_Skin.AUG_holo = 203002;
        new_Skin.AUG_x2 = 203003;
        new_Skin.AUG_x3 = 203014;
        new_Skin.AUG_x4 = 203004;
        new_Skin.AUG_x6 = 203015;
    }
    if (preferences.Config.Skin.AUG == 3){
        new_Skin.AUG = 1101006033;
        new_Skin.AUG = 101006;
        new_Skin.AUG_reddot = 203001;
        new_Skin.AUG_holo = 203002;
        new_Skin.AUG_x2 = 203003;
        new_Skin.AUG_x3 = 203014;
        new_Skin.AUG_x4 = 203004;
        new_Skin.AUG_x6 = 203015;
        new_Skin.AUG_lazer = 202007;
        new_Skin.AUG_flash = 201010;
    }
    
    if (preferences.Config.Skin.AUG == 4){
        new_Skin.AUG = 1101006075;
        new_Skin.AUG_reddot = 1010060696;
        new_Skin.AUG_holo = 1010060695;
        new_Skin.AUG_x2 = 1010060694;
        new_Skin.AUG_x3 = 1010060693;
        new_Skin.AUG_x4 = 1010060692;
        new_Skin.AUG_x6 = 1010060691;
        new_Skin.AUG_lazer = 1010060707;
        new_Skin.AUG_flash = 1010060699;
    }
    if (preferences.Config.Skin.AUG == 5){
        new_Skin.AUG = 1101006067;
        new_Skin.AUG = 101006;
        new_Skin.AUG_reddot = 203001;
        new_Skin.AUG_holo = 203002;
        new_Skin.AUG_x2 = 203003;
        new_Skin.AUG_x3 = 203014;
        new_Skin.AUG_x4 = 203004;
        new_Skin.AUG_x6 = 203015;
        new_Skin.AUG_lazer = 202007;
        new_Skin.AUG_flash = 201010;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.QBZ == 0)
        new_Skin.QBZ = 101007;
    if (preferences.Config.Skin.QBZ == 1)
        new_Skin.QBZ = 1101007062;
    if (preferences.Config.Skin.QBZ == 2)
        new_Skin.QBZ = 1101007046;
    if (preferences.Config.Skin.QBZ == 3)
        new_Skin.QBZ = 1101007036;
    if (preferences.Config.Skin.QBZ == 4)
        new_Skin.QBZ = 1101007025;
    
    
    
    
    
    
    
    
    if (preferences.Config.Skin.MG3 == 0){
        new_Skin.MG3 = 105010;
        new_Skin.MG3_reddot = 203001;
        new_Skin.MG3_holo = 203002;
        new_Skin.MG3_x2 = 203003;
        new_Skin.MG3_x3 = 203014;
        new_Skin.MG3_x4 = 203004;
        new_Skin.MG3_x6 = 203015;
    }
    if (preferences.Config.Skin.MG3 == 1){
        new_Skin.MG3 = 1105010019;
        new_Skin.MG3_reddot = 203001;
        new_Skin.MG3_holo = 203002;
        new_Skin.MG3_x2 = 203003;
        new_Skin.MG3_x3 = 203014;
        new_Skin.MG3_x4 = 203004;
        new_Skin.MG3_x6 = 203015;
    }
    if (preferences.Config.Skin.MG3 == 2){
        new_Skin.MG3 = 1105010008;
        new_Skin.MG3_reddot = 203001;
        new_Skin.MG3_holo = 203002;
        new_Skin.MG3_x2 = 203003;
        new_Skin.MG3_x3 = 203014;
        new_Skin.MG3_x4 = 203004;
        new_Skin.MG3_x6 = 203015;
    }
    
    
    
    
    
    
    
    if (preferences.Config.Skin.Honey == 0)
        new_Skin.Honey = 101012;
    if (preferences.Config.Skin.Honey == 1)
        new_Skin.Honey = 1101012009;
    
    
    if (preferences.Config.Skin.S1897 == 0)
        new_Skin.S1897 = 104002;
    if (preferences.Config.Skin.S1897 == 1)
        new_Skin.S1897 = 1104002022;
    if (preferences.Config.Skin.S1897 == 2)
        new_Skin.S1897 = 1104002035;
    if (preferences.Config.Skin.S1897 == 3)
        new_Skin.S1897 = 1104002004;
    
    
    
    
    
    if (preferences.Config.Skin.DBS == 0)
        new_Skin.DBS = 104004;
    if (preferences.Config.Skin.DBS == 1)
        new_Skin.DBS = 1104004035;
    if (preferences.Config.Skin.DBS == 2)
        new_Skin.DBS = 1104004014;
    if (preferences.Config.Skin.DBS == 3)
        new_Skin.DBS = 1104004015;
    if (preferences.Config.Skin.DBS == 4)
        new_Skin.DBS = 1104004024;
    
    
    
    
    if (preferences.Config.Skin.S12K == 0)
        new_Skin.S12K = 104003;
    if (preferences.Config.Skin.S12K == 1)
        new_Skin.S12K = 1104003038;
    if (preferences.Config.Skin.S12K == 2)
        new_Skin.S12K = 1104003037;
    
    if (preferences.Config.Skin.S12K == 3)
        new_Skin.S12K = 1104003026;
    
    
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.M762 == 0) {
        new_Skin.M762 = 101008;
        new_Skin.M762_Mag = 291008;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
        
    }
    if (preferences.Config.Skin.M762 == 1) {
        
        new_Skin.M762 = 1101008081;
        new_Skin.M762_Mag = 1010080811;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
        
    }
    if (preferences.Config.Skin.M762 == 2) {
        new_Skin.M762 = 1101008051;
        new_Skin.M762_Mag = 1010080511;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 3) {
        new_Skin.M762 = 1101008061;
        new_Skin.M762_Mag = 1010080611;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 4) {
        new_Skin.M762 = 1101008026;
        new_Skin.M762_Mag = 1010080261;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 5) {
        new_Skin.M762 = 1101008104;
        new_Skin.M762_Mag = 1010081041;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 6) {
        new_Skin.M762 = 1101008116;
        new_Skin.M762_Mag = 1010081161;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 7) {
        new_Skin.M762 = 1101008126;
        new_Skin.M762_Mag = 1010081261;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 8) {
        new_Skin.M762 = 1101008136;
        new_Skin.M762_Mag = 1010081361;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 9) {
        new_Skin.M762 = 1101008070;
        new_Skin.M762_Mag = 1010081361;
        new_Skin.M762_reddot = 203001;
        new_Skin.M762_holo = 203002;
        new_Skin.M762_x2 = 203003;
        new_Skin.M762_x3 = 203014;
        new_Skin.M762_x4 = 203004;
        new_Skin.M762_x6 = 203015;
        new_Skin.M762_lazer = 202007;
        new_Skin.M762_flash = 201010;
    }
    if (preferences.Config.Skin.M762 == 10) {
        new_Skin.M762 = 1101008146;
        new_Skin.M762_Mag = 1010081361;
        new_Skin.M762_reddot = 1010081396;
        new_Skin.M762_holo = 1010081395;
        new_Skin.M762_x2 = 1010081394;
        new_Skin.M762_x3 = 1010081393;
        new_Skin.M762_x4 = 1010081392;
        new_Skin.M762_x6 = 1010081391;
        new_Skin.M762_lazer = 1010081409;
        new_Skin.M762_flash = 1010081399;
    }
    if (preferences.Config.Skin.M762 == 11) {
        new_Skin.M762 = 1101008154;
        new_Skin.M762_Mag = 1010081361;
        new_Skin.M762_reddot = 1010081396;
        new_Skin.M762_holo = 1010081395;
        new_Skin.M762_x2 = 1010081394;
        new_Skin.M762_x3 = 1010081393;
        new_Skin.M762_x4 = 1010081392;
        new_Skin.M762_x6 = 1010081391;
        new_Skin.M762_lazer = 1010081409;
        new_Skin.M762_flash = 1010081399;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.ACE32 == 0)
        new_Skin.ACE32 = 101102;
    if (preferences.Config.Skin.ACE32 == 1){
        new_Skin.ACE32 = 1101102007;
        new_Skin.ACE32_reddot = 1010081396;
        new_Skin.ACE32_holo = 1010081395;
        new_Skin.ACE32_x2 = 1010081394;
        new_Skin.ACE32_x3 = 1010081393;
        new_Skin.ACE32_x4 = 1010081392;
        new_Skin.ACE32_x6 = 1010081391;
    }
    if (preferences.Config.Skin.ACE32 == 2){
        new_Skin.ACE32 = 1101102017;
        new_Skin.ACE32_reddot = 1010081396;
        new_Skin.ACE32_holo = 1010081395;
        new_Skin.ACE32_x2 = 1010081394;
        new_Skin.ACE32_x3 = 1010081393;
        new_Skin.ACE32_x4 = 1010081392;
        new_Skin.ACE32_x6 = 1010081391;
    }
    if (preferences.Config.Skin.ACE32 == 3){
        new_Skin.ACE32 = 1101102025;
        new_Skin.ACE32_reddot = 1010081396;
        new_Skin.ACE32_holo = 1010081395;
        new_Skin.ACE32_x2 = 1010081394;
        new_Skin.ACE32_x3 = 1010081393;
        new_Skin.ACE32_x4 = 1010081392;
        new_Skin.ACE32_x6 = 1010081391;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.UZI == 0)
        new_Skin.UZI = 102001;
    if (preferences.Config.Skin.UZI == 1)
        new_Skin.UZI = 1102001102;
    if (preferences.Config.Skin.UZI == 2)
        new_Skin.UZI = 1102001036;
    if (preferences.Config.Skin.UZI == 3)
        new_Skin.UZI = 1102001058;
    if (preferences.Config.Skin.UZI == 4)
        new_Skin.UZI = 1102001069;
    if (preferences.Config.Skin.UZI == 5)
        new_Skin.UZI = 1102001089;
    if (preferences.Config.Skin.UZI == 6)
        new_Skin.UZI = 1102001024;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.UMP == 0){
        new_Skin.UMP = 102002;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    
    if (preferences.Config.Skin.UMP == 1){
        new_Skin.UMP = 1102002136;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    if (preferences.Config.Skin.UMP == 2){
        new_Skin.UMP = 1102002061;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    if (preferences.Config.Skin.UMP == 3){
        new_Skin.UMP = 1102002090;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    
    if (preferences.Config.Skin.UMP == 4){
        new_Skin.UMP = 1102002117;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    if (preferences.Config.Skin.UMP == 5){
        new_Skin.UMP = 1102002124;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    if (preferences.Config.Skin.UMP == 6){
        new_Skin.UMP = 1102002129;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    if (preferences.Config.Skin.UMP == 7){
        new_Skin.UMP = 1102002043;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    if (preferences.Config.Skin.UMP == 8){
        new_Skin.UMP = 1102002030;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    if (preferences.Config.Skin.UMP == 9){
        new_Skin.UMP = 1102002083;
        new_Skin.UMP_reddot = 203001;
        new_Skin.UMP_holo = 203002;
        new_Skin.UMP_x2 = 203003;
        new_Skin.UMP_x3 = 203014;
        new_Skin.UMP_x4 = 203004;
        new_Skin.UMP_x6 = 203015;
    }
    
    
    
    
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.Vector == 0)
        new_Skin.Vector = 102003;
    if (preferences.Config.Skin.Vector == 1)
        
        new_Skin.Vector = 1102003080;
    if (preferences.Config.Skin.Vector == 2)
        new_Skin.Vector = 1102003031;
    if (preferences.Config.Skin.Vector == 3)
        new_Skin.Vector = 1102003065;
    if (preferences.Config.Skin.Vector == 4)
        new_Skin.Vector = 1102003020;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.Thompson == 0)
        new_Skin.Thompson = 102004;
    if (preferences.Config.Skin.Thompson == 1)
        new_Skin.Thompson = 1102004018;
    if (preferences.Config.Skin.Thompson == 2)
        new_Skin.Thompson = 1102004034;
    
    //-------------------------------------------------------//
    if (preferences.Config.Skin.P90 == 0)
        new_Skin.P90 = 102105;
    if (preferences.Config.Skin.P90 == 1)
        new_Skin.P90 = 1102105012;
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.Bizon == 0)
        new_Skin.Bizon = 102005;
    if (preferences.Config.Skin.Bizon == 1)
        new_Skin.Bizon = 1102005007;
    if (preferences.Config.Skin.Bizon == 2)
        new_Skin.Bizon = 1102005020;
    if (preferences.Config.Skin.Bizon == 3)
        new_Skin.Bizon = 1102005041;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    {
        if (preferences.Config.Skin.K98 == 0)
            new_Skin.K98 = 103001;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    if (preferences.Config.Skin.K98 == 1){
        new_Skin.K98 = 1103001179;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    if (preferences.Config.Skin.K98 == 2){
        new_Skin.K98 = 1103001079;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    
    if (preferences.Config.Skin.K98 == 3){
        new_Skin.K98 = 1103001101;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    
    if (preferences.Config.Skin.K98 == 4){
        new_Skin.K98 = 1103001145;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    if (preferences.Config.Skin.K98 == 5){
        new_Skin.K98 = 1103001160;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    if (preferences.Config.Skin.K98 == 6){
        new_Skin.K98 = 1103001060;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    
    if (preferences.Config.Skin.K98 == 7){
        new_Skin.K98 = 1103001191;
        new_Skin.K98_reddot = 1030011857;
        new_Skin.K98_holo = 1030011856;
        new_Skin.K98_x2 = 1030011855;
        new_Skin.K98_x3 = 1030011854;
        new_Skin.K98_x4 = 1030011853;
        new_Skin.K98_x6 = 1030011852;
        new_Skin.K98_x8 = 1030011851;
    }
    
    if (preferences.Config.Skin.K98 == 8){
        new_Skin.K98 = 1103001183;
        new_Skin.K98_reddot = 203001;
        new_Skin.K98_holo = 203002;
        new_Skin.K98_x2 = 203003;
        new_Skin.K98_x3 = 203014;
        new_Skin.K98_x4 = 203004;
        new_Skin.K98_x6 = 203015;
        new_Skin.K98_x8 = 203005;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.M24 == 0){
        new_Skin.M24 = 103002;
        new_Skin.M24_reddot = 203001;
        new_Skin.M24_holo = 203002;
        new_Skin.M24_x2 = 203003;
        new_Skin.M24_x3 = 203014;
        new_Skin.M24_x4 = 203004;
        new_Skin.M24_x6 = 203015;
        new_Skin.M24_x8 = 203005;
    }
    if (preferences.Config.Skin.M24 == 1){
        new_Skin.M24 = 1103002087;
        new_Skin.M24_reddot = 203001;
        new_Skin.M24_holo = 203002;
        new_Skin.M24_x2 = 203003;
        new_Skin.M24_x3 = 203014;
        new_Skin.M24_x4 = 203004;
        new_Skin.M24_x6 = 203015;
        new_Skin.M24_x8 = 203005;
    }
    if (preferences.Config.Skin.M24 == 2){
        new_Skin.M24 = 1103002030;
        new_Skin.M24_reddot = 203001;
        new_Skin.M24_holo = 203002;
        new_Skin.M24_x2 = 203003;
        new_Skin.M24_x3 = 203014;
        new_Skin.M24_x4 = 203004;
        new_Skin.M24_x6 = 203015;
        new_Skin.M24_x8 = 203005;
    }
    
    if (preferences.Config.Skin.M24 == 3){
        new_Skin.M24 = 1103002048;
        new_Skin.M24_reddot = 203001;
        new_Skin.M24_holo = 203002;
        new_Skin.M24_x2 = 203003;
        new_Skin.M24_x3 = 203014;
        new_Skin.M24_x4 = 203004;
        new_Skin.M24_x6 = 203015;
        new_Skin.M24_x8 = 203005;
    }
    if (preferences.Config.Skin.M24 == 4){
        new_Skin.M24 = 1103002056;
        new_Skin.M24_reddot = 203001;
        new_Skin.M24_holo = 203002;
        new_Skin.M24_x2 = 203003;
        new_Skin.M24_x3 = 203014;
        new_Skin.M24_x4 = 203004;
        new_Skin.M24_x6 = 203015;
        new_Skin.M24_x8 = 203005;
    }
    if (preferences.Config.Skin.M24 == 5){
        new_Skin.M24 = 1103002059;
        new_Skin.M24_reddot = 203001;
        new_Skin.M24_holo = 203002;
        new_Skin.M24_x2 = 203003;
        new_Skin.M24_x3 = 203014;
        new_Skin.M24_x4 = 203004;
        new_Skin.M24_x6 = 203015;
        new_Skin.M24_x8 = 203005;
    }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.AWM == 0){
        new_Skin.AWM = 103003;
        new_Skin.AWM_reddot = 203001;
        new_Skin.AWM_holo = 203002;
        new_Skin.AWM_x2 = 203003;
        new_Skin.AWM_x3 = 203014;
        new_Skin.AWM_x4 = 203004;
        new_Skin.AWM_x6 = 203015;
        new_Skin.AWM_x8 = 203005;
    }
    if (preferences.Config.Skin.AWM == 1){
        new_Skin.AWM = 1103003087;
        new_Skin.AWM_reddot = 203001;
        new_Skin.AWM_holo = 203002;
        new_Skin.AWM_x2 = 203003;
        new_Skin.AWM_x3 = 203014;
        new_Skin.AWM_x4 = 203004;
        new_Skin.AWM_x6 = 203015;
        new_Skin.AWM_x8 = 203005;
    }
    if (preferences.Config.Skin.AWM == 2){
        new_Skin.AWM = 1103003022;
        new_Skin.AWM_reddot = 203001;
        new_Skin.AWM_holo = 203002;
        new_Skin.AWM_x2 = 203003;
        new_Skin.AWM_x3 = 203014;
        new_Skin.AWM_x4 = 203004;
        new_Skin.AWM_x6 = 203015;
        new_Skin.AWM_x8 = 203005;
    }
    if (preferences.Config.Skin.AWM == 3){
        new_Skin.AWM = 1103003042;
        new_Skin.AWM_reddot = 203001;
        new_Skin.AWM_holo = 203002;
        new_Skin.AWM_x2 = 203003;
        new_Skin.AWM_x3 = 203014;
        new_Skin.AWM_x4 = 203004;
        new_Skin.AWM_x6 = 203015;
        new_Skin.AWM_x8 = 203005;
    }
    if (preferences.Config.Skin.AWM == 4){
        new_Skin.AWM = 1103003051;
        new_Skin.AWM_reddot = 203001;
        new_Skin.AWM_holo = 203002;
        new_Skin.AWM_x2 = 203003;
        new_Skin.AWM_x3 = 203014;
        new_Skin.AWM_x4 = 203004;
        new_Skin.AWM_x6 = 203015;
        new_Skin.AWM_x8 = 203005;
    }
    if (preferences.Config.Skin.AWM == 5){
        new_Skin.AWM = 1103003062;
        new_Skin.AWM_reddot = 203001;
        new_Skin.AWM_holo = 203002;
        new_Skin.AWM_x2 = 203003;
        new_Skin.AWM_x3 = 203014;
        new_Skin.AWM_x4 = 203004;
        new_Skin.AWM_x6 = 203015;
        new_Skin.AWM_x8 = 203005;
    }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.AMR == 0){
      new_Skin.AMR = 103012;
        new_Skin.AMR_reddot = 203001;
        new_Skin.AMR_holo = 203002;
        new_Skin.AMR_x2 = 203003;
        new_Skin.AMR_x3 = 203014;
        new_Skin.AMR_x4 = 203004;
        new_Skin.AMR_x6 = 203015;
        new_Skin.AMR_x8 = 203005;
    }
    if (preferences.Config.Skin.AMR == 1){
      new_Skin.AMR = 1103012019;
        new_Skin.AMR_reddot = 203001;
        new_Skin.AMR_holo = 203002;
        new_Skin.AMR_x2 = 203003;
        new_Skin.AMR_x3 = 203014;
        new_Skin.AMR_x4 = 203004;
        new_Skin.AMR_x6 = 203015;
        new_Skin.AMR_x8 = 203005;
    }
    
    if (preferences.Config.Skin.AMR == 2){
      new_Skin.AMR = 1103012010;
        new_Skin.AMR_reddot = 203001;
        new_Skin.AMR_holo = 203002;
        new_Skin.AMR_x2 = 203003;
        new_Skin.AMR_x3 = 203014;
        new_Skin.AMR_x4 = 203004;
        new_Skin.AMR_x6 = 203015;
        new_Skin.AMR_x8 = 203005;
    }
    
    if (preferences.Config.Skin.AMR == 3){
      new_Skin.AMR = 1030120101;
        new_Skin.AMR_reddot = 203001;
        new_Skin.AMR_holo = 203002;
        new_Skin.AMR_x2 = 203003;
        new_Skin.AMR_x3 = 203014;
        new_Skin.AMR_x4 = 203004;
        new_Skin.AMR_x6 = 203015;
        new_Skin.AMR_x8 = 203005;
    }
    
        
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.MK14 == 0)
      new_Skin.MK14 = 103007;
    if (preferences.Config.Skin.MK14 == 1)
      new_Skin.MK14 =1103007028;
    if (preferences.Config.Skin.MK14 == 2)
      new_Skin.MK14 = 1103007020;
    
    
    
    
    
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.Machete == 0)
      new_Skin.Machete = 103003;
    if (preferences.Config.Skin.Machete == 1)
      new_Skin.Machete = 1108001069;
    if (preferences.Config.Skin.Machete == 2)
      new_Skin.Machete = 1108001064;

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (preferences.Config.Skin.MINI14 == 0)
      new_Skin.Mini14 = 103006;
    if (preferences.Config.Skin.MINI14 == 1)
      new_Skin.Mini14 =1103006030;
    if (preferences.Config.Skin.MINI14 == 2)
      new_Skin.Mini14 = 1103006058;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (preferences.Config.Skin.DP28 == 0)
    new_Skin.DP28 = 105002;
  if (preferences.Config.Skin.DP28 == 1)
    new_Skin.DP28 = 1105002035;
  if (preferences.Config.Skin.DP28 == 2)
    new_Skin.DP28 = 1105002018;
  if (preferences.Config.Skin.DP28 == 3)
    new_Skin.DP28 = 1105002058;
  if (preferences.Config.Skin.DP28 == 4)
    new_Skin.DP28 = 1105002063;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (preferences.Config.Skin.M249 == 0)
    new_Skin.M249 = 105001;
    new_Skin.M249s = 205009;
  if (preferences.Config.Skin.M249 == 1)
    
    new_Skin.M249 = 1105001048;
 //   new_Skin.M249s = 1050010542;
  if (preferences.Config.Skin.M249 == 2)
    new_Skin.M249 = 1105001054;
  //  new_Skin.M249s = 1050010412;
  if (preferences.Config.Skin.M249 == 3)
    new_Skin.M249 = 1105001034;
  //  new_Skin.M249s = 1050010482;
  if (preferences.Config.Skin.M249 == 4)
      new_Skin.M249 = 1105001020;
   //   new_Skin.M249s = 1050010351;
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   if (preferences.Config.Skin.Bigfoot == 0)
    new_Skin.Bigfoot = 1953001;
  if (preferences.Config.Skin.Bigfoot == 1)
    new_Skin.Bigfoot = 1953004;
    if (preferences.Config.Skin.Bigfoot == 2)
      new_Skin.Bigfoot = 1953008;
    
    if (preferences.Config.Skin.RZR == 0)
     new_Skin.RZR = 1966017;
   if (preferences.Config.Skin.RZR == 1)
     new_Skin.RZR = 1966017;
     if (preferences.Config.Skin.RZR == 2)
       new_Skin.RZR = 1966016;
     
    
    
    
    
    
    
    
    
    
  if (preferences.Config.Skin.Mirado == 0)
    new_Skin.Mirado = 1914001;
  if (preferences.Config.Skin.Mirado == 1)
    new_Skin.Mirado = 1915011;
    if (preferences.Config.Skin.Mirado == 2)
      new_Skin.Mirado = 1915009;
    if (preferences.Config.Skin.Mirado == 3)
      new_Skin.Mirado = 1915008;
    if (preferences.Config.Skin.Mirado == 4)
      new_Skin.Mirado = 1915007;
    if (preferences.Config.Skin.Mirado == 5)
      new_Skin.Mirado = 1915006;
    if (preferences.Config.Skin.Mirado == 6)
      new_Skin.Mirado = 1915005;
    if (preferences.Config.Skin.Mirado == 7)
      new_Skin.Mirado = 1915012;
    if (preferences.Config.Skin.Mirado == 8)
      new_Skin.Mirado = 1915010;
    
    
    
    
    
    
    
    
    
    
    
  if (preferences.Config.Skin.Moto == 0)
    new_Skin.Moto = 1901001;
  if (preferences.Config.Skin.Moto == 1)
    new_Skin.Moto = 1901073;
  if (preferences.Config.Skin.Moto == 2)
    new_Skin.Moto = 1901074;
  if (preferences.Config.Skin.Moto == 3)
    new_Skin.Moto = 1901075;
  if (preferences.Config.Skin.Moto == 4)
    new_Skin.Moto = 1901047;
  if (preferences.Config.Skin.Moto == 5)
    new_Skin.Moto = 1901085;
  if (preferences.Config.Skin.Moto == 6)
    new_Skin.Moto = 1901076;
  if (preferences.Config.Skin.Moto == 7)
    new_Skin.Moto = 1901027;
  if (preferences.Config.Skin.Moto == 8)
    new_Skin.Moto = 1901018;
  if (preferences.Config.Skin.Moto == 9)
    new_Skin.Moto = 1901085;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (preferences.Config.Skin.Buggy == 0)
    new_Skin.Buggy = 1907001;
  if (preferences.Config.Skin.Buggy == 1)
    new_Skin.Buggy = 1907047;
  if (preferences.Config.Skin.Buggy == 2)
    new_Skin.Buggy = 1907009;
if (preferences.Config.Skin.Buggy == 3)
    new_Skin.Buggy = 1907010;
if (preferences.Config.Skin.Buggy == 4)
    new_Skin.Buggy = 1907011;
if (preferences.Config.Skin.Buggy == 5)
    new_Skin.Buggy = 1907012;
if (preferences.Config.Skin.Buggy == 6)
    new_Skin.Buggy = 1907013;
if (preferences.Config.Skin.Buggy == 7)
    new_Skin.Buggy = 1907014;
if (preferences.Config.Skin.Buggy == 8)
    new_Skin.Buggy = 1907015;
if (preferences.Config.Skin.Buggy == 9)
    new_Skin.Buggy = 1907016;
if (preferences.Config.Skin.Buggy == 10)
    new_Skin.Buggy = 1907017;
if (preferences.Config.Skin.Buggy == 11)
    new_Skin.Buggy = 1907018;
if (preferences.Config.Skin.Buggy == 12)
    new_Skin.Buggy = 1907019;
if (preferences.Config.Skin.Buggy == 13)
    new_Skin.Buggy = 1907020;
if (preferences.Config.Skin.Buggy == 14)
    new_Skin.Buggy = 1907021;
if (preferences.Config.Skin.Buggy == 15)
    new_Skin.Buggy = 1907022;
if (preferences.Config.Skin.Buggy == 16)
    new_Skin.Buggy = 1907023;
if (preferences.Config.Skin.Buggy == 17)
    new_Skin.Buggy = 1907024;
if (preferences.Config.Skin.Buggy == 18)
    new_Skin.Buggy = 1907025;
if (preferences.Config.Skin.Buggy == 19)
    new_Skin.Buggy = 1907026;
if (preferences.Config.Skin.Buggy == 20)
    new_Skin.Buggy = 1907027;
if (preferences.Config.Skin.Buggy == 21)
    new_Skin.Buggy = 1907028;
if (preferences.Config.Skin.Buggy == 22)
    new_Skin.Buggy = 1907029;
if (preferences.Config.Skin.Buggy == 23)
    new_Skin.Buggy = 1907030;
if (preferences.Config.Skin.Buggy == 24)
    new_Skin.Buggy = 1907031;
if (preferences.Config.Skin.Buggy == 25)
    new_Skin.Buggy = 1907032;
if (preferences.Config.Skin.Buggy == 26)
    new_Skin.Buggy = 1907033;
if (preferences.Config.Skin.Buggy == 27)
    new_Skin.Buggy = 1907034;
if (preferences.Config.Skin.Buggy == 28)
    new_Skin.Buggy = 1907035;
if (preferences.Config.Skin.Buggy == 29)
    new_Skin.Buggy = 1907036;
if (preferences.Config.Skin.Buggy == 30)
    new_Skin.Buggy = 1907037;
if (preferences.Config.Skin.Buggy == 31)
    new_Skin.Buggy = 1907038;
if (preferences.Config.Skin.Buggy == 32)
    new_Skin.Buggy = 1907039;
if (preferences.Config.Skin.Buggy == 33)
    new_Skin.Buggy = 1907040;
    
    
    
    
    
  if (preferences.Config.Skin.Dacia == 0)
    new_Skin.Dacia = 1903001;
  if (preferences.Config.Skin.Dacia == 1)
    new_Skin.Dacia =1903201;
  if (preferences.Config.Skin.Dacia == 2)
    new_Skin.Dacia =1903200;
  if (preferences.Config.Skin.Dacia == 3)
    new_Skin.Dacia = 1903193;
  if (preferences.Config.Skin.Dacia == 4)
    new_Skin.Dacia = 1903192;
  if (preferences.Config.Skin.Dacia == 5)
    new_Skin.Dacia = 1903191;
  if (preferences.Config.Skin.Dacia == 6)
    new_Skin.Dacia = 1903080;
  if (preferences.Config.Skin.Dacia == 7)
    new_Skin.Dacia = 1903079;
  if (preferences.Config.Skin.Dacia == 8)
    new_Skin.Dacia = 1903076;
  if (preferences.Config.Skin.Dacia == 9)
    new_Skin.Dacia = 1903075;
  if (preferences.Config.Skin.Dacia == 10)
    new_Skin.Dacia = 1903074;
  if (preferences.Config.Skin.Dacia == 11)
    new_Skin.Dacia = 1903071;
  if (preferences.Config.Skin.Dacia == 12)
    new_Skin.Dacia = 1903073;
  if (preferences.Config.Skin.Dacia == 13)
    new_Skin.Dacia = 1903072;
  if (preferences.Config.Skin.Dacia == 14)
    new_Skin.Dacia = 1903090;
  if (preferences.Config.Skin.Dacia == 15)
    new_Skin.Dacia = 1903089;
  if (preferences.Config.Skin.Dacia == 16)
    new_Skin.Dacia = 1903088;
  if (preferences.Config.Skin.Dacia == 17)
    new_Skin.Dacia = 1903204;
  if (preferences.Config.Skin.Dacia == 18)
    new_Skin.Dacia = 1903203;
  if (preferences.Config.Skin.Dacia == 19)
    new_Skin.Dacia = 1903202;
  if (preferences.Config.Skin.Dacia == 20)
    new_Skin.Dacia = 1903017;
  if (preferences.Config.Skin.Dacia == 21)
    new_Skin.Dacia = 1903014;
    if (preferences.Config.Skin.Dacia == 22)
      new_Skin.Dacia = 1903023;
    if (preferences.Config.Skin.Dacia == 23)
      new_Skin.Dacia = 1903022;
    if (preferences.Config.Skin.Dacia == 24)
      new_Skin.Dacia = 1903019;
      
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  
if (preferences.Config.Skin.MiniBus == 0)
    new_Skin.MiniBus = 1904001;
  if (preferences.Config.Skin.MiniBus == 1)
    new_Skin.MiniBus = 1904005;
  if (preferences.Config.Skin.MiniBus == 2)
    new_Skin.MiniBus = 1904006;
if (preferences.Config.Skin.MiniBus == 3)
    new_Skin.MiniBus = 1904007;
if (preferences.Config.Skin.MiniBus == 4)
    new_Skin.MiniBus = 1904008;
if (preferences.Config.Skin.MiniBus == 5)
    new_Skin.MiniBus = 1904009;
if (preferences.Config.Skin.MiniBus == 6)
    new_Skin.MiniBus = 1904010;
if (preferences.Config.Skin.MiniBus == 7)
    new_Skin.MiniBus = 1904011;
if (preferences.Config.Skin.MiniBus == 8)
    new_Skin.MiniBus = 1904012;
if (preferences.Config.Skin.MiniBus == 9)
    new_Skin.MiniBus = 1904013;
if (preferences.Config.Skin.MiniBus == 10)
    new_Skin.MiniBus = 1904014;
if (preferences.Config.Skin.MiniBus == 11)
    new_Skin.MiniBus = 1904015;
if (preferences.Config.Skin.MiniBus == 12)
    new_Skin.MiniBus = 1904004;
  
  if (preferences.Config.Skin.CoupeRP == 0)
    new_Skin.CoupeRP = 1961001;
  if (preferences.Config.Skin.CoupeRP == 1)
    new_Skin.CoupeRP = 1961024;
  if (preferences.Config.Skin.CoupeRP == 2)
    new_Skin.CoupeRP = 1961047;
  if (preferences.Config.Skin.CoupeRP == 3)
    new_Skin.CoupeRP = 1961034;
  if (preferences.Config.Skin.CoupeRP == 4)
    new_Skin.CoupeRP = 1961018;
  if (preferences.Config.Skin.CoupeRP == 5)
    new_Skin.CoupeRP = 1961007;
  if (preferences.Config.Skin.CoupeRP == 6)
    new_Skin.CoupeRP = 1961010;
  if (preferences.Config.Skin.CoupeRP == 7)
    new_Skin.CoupeRP = 1961049;
  if (preferences.Config.Skin.CoupeRP == 8)
    new_Skin.CoupeRP = 1961048;
  if (preferences.Config.Skin.CoupeRP == 9)
    new_Skin.CoupeRP = 1961012;
  if (preferences.Config.Skin.CoupeRP == 10)
    new_Skin.CoupeRP = 1961013;
  if (preferences.Config.Skin.CoupeRP == 11)
    new_Skin.CoupeRP = 1961014;
  if (preferences.Config.Skin.CoupeRP == 12)
    new_Skin.CoupeRP = 1961015;
  if (preferences.Config.Skin.CoupeRP == 13)
    new_Skin.CoupeRP = 1961016;
  if (preferences.Config.Skin.CoupeRP == 14)
    new_Skin.CoupeRP = 1961017;
  if (preferences.Config.Skin.CoupeRP == 15)
    new_Skin.CoupeRP = 1961020;
  if (preferences.Config.Skin.CoupeRP == 16)
    new_Skin.CoupeRP = 1961021;
  if (preferences.Config.Skin.CoupeRP == 17)
    new_Skin.CoupeRP = 1961025;
  if (preferences.Config.Skin.CoupeRP == 18)
    new_Skin.CoupeRP = 1961029;
  if (preferences.Config.Skin.CoupeRP == 19)
    new_Skin.CoupeRP = 1961030;
  if (preferences.Config.Skin.CoupeRP == 20)
    new_Skin.CoupeRP = 1961031;
  if (preferences.Config.Skin.CoupeRP == 21)
    new_Skin.CoupeRP = 1961032;
  if (preferences.Config.Skin.CoupeRP == 22)
    new_Skin.CoupeRP = 1961033;
  if (preferences.Config.Skin.CoupeRP == 23)
    new_Skin.CoupeRP = 1961035;
  if (preferences.Config.Skin.CoupeRP == 24)
    new_Skin.CoupeRP = 1961036;
  if (preferences.Config.Skin.CoupeRP == 22)
    new_Skin.CoupeRP = 1961037;
  if (preferences.Config.Skin.CoupeRP == 26)
    new_Skin.CoupeRP = 1961038;
  if (preferences.Config.Skin.CoupeRP == 27)
    new_Skin.CoupeRP = 1961039;
  if (preferences.Config.Skin.CoupeRP == 28)
    new_Skin.CoupeRP = 1961040;
  if (preferences.Config.Skin.CoupeRP == 29)
    new_Skin.CoupeRP = 1961041;
  if (preferences.Config.Skin.CoupeRP == 30)
    new_Skin.CoupeRP = 1961042;
  if (preferences.Config.Skin.CoupeRP == 31)
    new_Skin.CoupeRP = 1961043;
  if (preferences.Config.Skin.CoupeRP == 32)
    new_Skin.CoupeRP = 1961044;
  if (preferences.Config.Skin.CoupeRP == 33)
    new_Skin.CoupeRP = 1961045;
  if (preferences.Config.Skin.CoupeRP == 34)
    new_Skin.CoupeRP = 1961046;
  if (preferences.Config.Skin.CoupeRP == 35)
    new_Skin.CoupeRP = 1961050;
  if (preferences.Config.Skin.CoupeRP == 36)
    new_Skin.CoupeRP = 1961051;
  if (preferences.Config.Skin.CoupeRP == 37)
    new_Skin.CoupeRP = 1961052;
  if (preferences.Config.Skin.CoupeRP == 38)
    new_Skin.CoupeRP = 1961053;
  if (preferences.Config.Skin.CoupeRP == 39)
    new_Skin.CoupeRP = 1961054;
  if (preferences.Config.Skin.CoupeRP == 40)
    new_Skin.CoupeRP = 1961055;
  if (preferences.Config.Skin.CoupeRP == 41)
    new_Skin.CoupeRP = 1961056;
  if (preferences.Config.Skin.CoupeRP == 42)
    new_Skin.CoupeRP = 1961057;
    if (preferences.Config.Skin.CoupeRP == 43)
      new_Skin.CoupeRP = 1961138;
    if (preferences.Config.Skin.CoupeRP == 44)
      new_Skin.CoupeRP = 1961139;
    
    

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (preferences.Config.Skin.UAZ == 0)
    new_Skin.UAZ = 1908001;
  if (preferences.Config.Skin.UAZ == 1)
    new_Skin.UAZ = 1908095;
  if (preferences.Config.Skin.UAZ == 2)
    new_Skin.UAZ = 1908094;
  if (preferences.Config.Skin.UAZ == 3)
    new_Skin.UAZ = 1908085;
  if (preferences.Config.Skin.UAZ == 4)
    new_Skin.UAZ = 1908084;
  if (preferences.Config.Skin.UAZ == 5)
    new_Skin.UAZ = 1908078;
  if (preferences.Config.Skin.UAZ == 6)
    new_Skin.UAZ = 1908077;
  if (preferences.Config.Skin.UAZ == 7)
    new_Skin.UAZ = 1908076;
  if (preferences.Config.Skin.UAZ == 8)
    new_Skin.UAZ = 1908075;
  if (preferences.Config.Skin.UAZ == 9)
    new_Skin.UAZ = 1908070;
  if (preferences.Config.Skin.UAZ == 10)
    new_Skin.UAZ = 1908069;
  if (preferences.Config.Skin.UAZ == 11)
    new_Skin.UAZ = 1908078;
  if (preferences.Config.Skin.UAZ == 12)
    new_Skin.UAZ = 1908067;
  if (preferences.Config.Skin.UAZ == 13)
    new_Skin.UAZ = 1908066;
  if (preferences.Config.Skin.UAZ == 14)
    new_Skin.UAZ = 1908019;
  if (preferences.Config.Skin.UAZ == 15)
    new_Skin.UAZ = 1908013;
  if (preferences.Config.Skin.UAZ == 16)
    new_Skin.UAZ = 1908036;
  if (preferences.Config.Skin.UAZ == 17)
    new_Skin.UAZ = 1908032;
    if (preferences.Config.Skin.UAZ == 18)
      new_Skin.UAZ = 1908010;
    
 
 if (preferences.Config.Skin.Boat == 0)
    new_Skin.Boat = 1911001;
  if (preferences.Config.Skin.Boat == 1)
    new_Skin.Boat = 1911013;
  if (preferences.Config.Skin.Boat == 2)
    new_Skin.Boat = 1911003;
if (preferences.Config.Skin.Boat == 3)
    new_Skin.Boat = 1911004;
if (preferences.Config.Skin.Boat == 4)
    new_Skin.Boat = 1911005;
if (preferences.Config.Skin.Boat == 5)
    new_Skin.Boat = 1911006;
if (preferences.Config.Skin.Boat == 6)
    new_Skin.Boat = 1911007;
if (preferences.Config.Skin.Boat == 7)
    new_Skin.Boat = 1911008;
if (preferences.Config.Skin.Boat == 8)
    new_Skin.Boat = 1911009;
if (preferences.Config.Skin.Boat == 9)
    new_Skin.Boat = 1911010;
if (preferences.Config.Skin.Boat == 10)
    new_Skin.Boat = 1911011;
if (preferences.Config.Skin.Boat == 11)
    new_Skin.Boat = 1911012;

}

int m4v[] = { 101004, 1101004046, 1101004062, 1101004078, 1101004086, 1101004098, 1101004138, 1101004163,1101004201,1101004209,1101004218,1101004226,1101004154,1101004151,1101004089,1101004034,1101004002,1101004227};



int scar[] = { 101003, 1101003057, 1101003070, 1101003080, 1101003119, 1101003146, 1101003167, 1101003181,1101003195,1101003099,1101003173};
int akmv[] = { 101001,1101001213, 1101001103, 1101001116, 1101001128, 1101001143, 1101001154, 1101001174,1101001089,1101001231,1101001242,1101001249, 1101001256,1101001023,1101001068};






//----------------------------------------------------------------//

int m7[] = { 101008, 1101008026, 1101008051, 1101008061, 1101008081, 1101008104, 1101008116, 1101008126,1101008136,1101008070,1101008146,1101008154};

int m7reddot[] = {         203001,203001,203001,203001,203001,203001,203001,203001,203001,203001,1010081396,1010081396};
int m7holo[] = {           203002,203002,203002,203002,203002,203002,203002,203002,203002,203002,1010081395,1010081395};
int m7x2[] = {             203003,203003,203003,203003,203003,203003,203003,203003,203003,203003,1010081394,1010081394};
int m7x3[] = {             203014,203014,203014,203014,203014,203014,203014,203014,203014,203014,1010081393,1010081393};
int m7x4[] = {             203004,203004,203004,203004,203004,203004,203004,203004,203004,203004,1010081392,1010081392};
int m7x6[] = {             203015,203015,203015,203015,203015,203015,203015,203015,203015,203015,1010081391,1010081391};
int m7Lazer[] = {          202007,202007,202007,202007,202007,202007,202007,202007,202007,202007,1010081409,1010081409};
int m7Flash[] = {          201010,201010,201010,201010,201010,201010,201010,201010,201010,201010,1010081399,1010081399};

//-------------------------------------------------------------------//












//----------------------------------------------------------------//

int awm[] = { 103003, 1103003087, 1103003022, 1103003042, 1103003051, 1103003062};

int awmreddot[] = {         203001,203001,203001,203001,203001,203001,};
int awmholo[] = {           203002,203002,203002,203002,203002,203002,};
int awmx2[] = {             203003,203003,203003,203003,203003,203003,};
int awmx3[] = {             203014,203014,203014,203014,203014,203014,};
int awmx4[] = {             203004,203004,203004,203004,203004,203004,};
int awmx6[] = {             203015,203015,203015,203015,203015,203015,};
int awmx8[] = {             203005,203005,203005,203005,203005,203005,};

//-------------------------------------------------------------------//






//----------------------------------------------------------------//

int amr[] = { 103012, 1103012019, 1103012010,1030120101};

int amrreddot[] = {         203001,203001,203001,203001,};
int amrholo[] = {           203002,203002,203002,203002,};
int amrx2[] = {             203003,203003,203003,203003,};
int amrx3[] = {             203014,203014,203014,203014,};
int amrx4[] = {             203004,203004,203004,203004,};
int amrx6[] = {             203015,203015,203015,203015,};
int amrx8[] = {             203005,203005,203005,203005,};

//-------------------------------------------------------------------//






int machete[] = { 108001, 1108001069, 1108001064};
int mk14[] = { 103007, 1103007028, 1103007020};
int mini14[] = { 103006, 1103006030, 1103006058};

//----------------------------------------------------------------//

int kar[] = { 103001, 1103001060, 1103001079, 1103001101, 1103001145, 1103001160, 1103001179,1103001191,1103001183};

int karreddot[] = {         203001,203001,203001,203001,203001,203001,203001,1030011857};
int karholo[] = {           203002,203002,203002,203002,203002,203002,203002,1030011856};
int karx2[] = {             203003,203003,203003,203003,203003,203003,203003,1030011855};
int karx3[] = {             203014,203014,203014,203014,203014,203014,203014,1030011854};
int karx4[] = {             203004,203004,203004,203004,203004,203004,203004,1030011853};
int karx6[] = {             203015,203015,203015,203015,203015,203015,203015,1030011852};
int karx8[] = {             203005,203005,203005,203005,203005,203005,203005,1030011851};

//-------------------------------------------------------------------//





int mg3[] = { 105010, 1105010019,1105010008};

int mg3reddot[] = {         203001,203001,};
int mg3holo[] = {           203002,203002,};
int mg3x2[] = {             203003,203003,};
int mg3x3[] = {             203014,203014,};
int mg3x4[] = {             203004,203004,};
int mg3x6[] = {             203015,203015,};

//-------------------------------------------------------------------//

int s1897[] = { 104002, 1104002022,1104002035,1104002004};
int dbs[] = { 104004, 1104004035,1104004014,1104004015,1104004024};
int s12k[] = { 104003, 1104003038,1104003037,1104003026};
int honey[] = { 101012, 1101012009};




//----------------------------------------------------------------//

int m24[] = { 103002, 1103002087, 1103002030, 1103002048, 1103002056, 1103002059};

int m24reddot[] = {         203001,203001,203001,203001,203001,203001,};
int m24holo[] = {           203002,203002,203002,203002,203002,203002,};
int m24x2[] = {             203003,203003,203003,203003,203003,203003,};
int m24x3[] = {             203014,203014,203014,203014,203014,203014,};
int m24x4[] = {             203004,203004,203004,203004,203004,203004,};
int m24x6[] = {             203015,203015,203015,203015,203015,203015,};
int m24x8[] = {             203005,203005,203005,203005,203005,203005,};

//-------------------------------------------------------------------//
















int dp[] = { 105002, 1105002018, 1105002035, 1105002058, 1105002063};
int m249[] = { 105001, 1105001020, 1105001034, 1105001048, 1105001054};

//----------------------------------------------------------------//
int groza[] = { 101005, 1101005019, 1101005025, 1101005038, 1101005043, 1101005052, 1101005082};
int Groza_2[] = {             291005,1010050381,1010050521,1010050821,1010050191,1010050251,1010050431};
int grozareddot[] = {         203001,1010050326,1010050466,203001,    203001,    203001,    203001};
int grozasilent[] = {         201011,1010050327,1010050467,201011,    201011,    201011,    201011};
int grozaholo[] = {           203002,1010050325,1010050465,203002,    203002,    203002,    203002};
int grozax2[] = {             203003,1010050324,1010050464,203003,    203003,    203003,    203003};
int grozax3[] = {             203014,1010050323,1010050463,203014,    203014,    203014,    203014};
int grozax4[] = {             203004,1010050322,1010050462,203004,    203004,    203004,    203004};
int grozax6[] = {             203015,203015,    203015,    203015,    203015,    203015,    203015};
int grozaquickMag[] = {       204012,1010050328,1010050468,204012,    204012,    204012,    204012};
int grozaextendedMag[] = {    204011,1010050329,1010050469,204011,    204011,    204011,    204011};
int grozaquickNextended[] = { 204013,1010050330,1010050470,204013,    204013,    204013,    204013};
//----------------------------------------------------------------//

int famas[] ={ 101100,1101100012,1101100013};

int famasreddot[] = {         203001,203001,203001,};
int famasholo[] = {           203002,203002,203002,};
int famasx2[] = {             203003,203003,203003,};
int famasx3[] = {             203014,203014,203014,};
int famasx4[] = {             203004,203004,203004,};
int famasx6[] = {             203015,203015,203015,};



//----------------------------------------------------------------//

int aug[] = { 101006, 1101006033, 1101006044, 1101006062,1101006075,1101006067};

int augreddot[] = {         203001,1010060562,203001,203001,1010060696,};
int augholo[] = {           203002,1010060561,203002,203002,1010060695,};
int augx2[] = {             203003,1010060554,203003,203003,1010060694,};
int augx3[] = {             203014,1010060553,203014,203014,1010060693,};
int augx4[] = {             203004,1010060552,203004,203004,1010060692,};
int augx6[] = {             203015,1010060551,203015,203015,1010060691,};
int augLazer[] = {             202007,1010060574,202007,202007,1010060707,};
int augFlash[] = {            201010,1010060571,201010,201010,1010060699,};

//-------------------------------------------------------------------//











int qbz[] = { 101007, 1101007062, 1101007046, 1101007036, 1101007025};
int m16[] = { 101002, 1101002029, 1101002056, 1101002068, 1101002081, 1101002103};
int uzi[] = { 102001, 1102001024, 1102001036, 1102001058, 1102001069, 1102001089, 1102001102};

//-----------------------------------------------------------------//
int ump[] = { 102002,1102002136, 1102002061, 1102002090, 1102002117, 1102002124, 1102002129, 1102002043,1102002030,1102002083};

int umpreddot[] = {         203001,203001,203001,203001,203001,203001,203001,203001,203001,203001};
int umpholo[] = {           203002,203002,203002,203002,203002,203002,203002,203002,203002,203002};
int umpx2[] = {             203003,203003,203003,203003,203003,203003,203003,203003,203003,203003};
int umpx3[] = {             203014,203014,203014,203014,203014,203014,203014,203014,203014,203014};
int umpx4[] = {             203004,203004,203004,203004,203004,203004,203004,203004,203004,203004};
int umpx6[] = {             203015,203015,203015,203015,203015,203015,203015,203015,203015,203015};


//----------------------------------------------------------------//

int vectorr[] = { 102003, 1102003020, 1102003031, 1102003065, 1102003080};
int tommy[] = { 102004, 1102004018, 1102004034};
int p90[] = { 102105, 1102105012};
int bizon[] = { 102005, 1102005007, 1102005020, 1102005041};


//-------------------------------------------------------------------//





int ace32[] = { 101102, 1101102007, 1101102017,1101102025};


int ace32reddot[] = {         203001,203001,203001,203001};
int ace32holo[] = {           203002,203002,203002,203002};
int ace32x2[] = {             203003,203003,203003,203003};
int ace32x3[] = {             203014,203014,203014,203014};
int ace32x4[] = {             203004,203004,203004,203004};
int ace32x6[] = {             203015,203015,203015,203015};

//-------------------------------------------------------------------//





int pan[] = { 108004, 1108004125, 1108004145, 1108004160, 1108004283, 1108004337, 1108004356, 1108004365, 1108004054, 1108004008};

int m249s[] = { 205009, 1050010351, 1050010412, 1050010482, 1050010542};

//-------------------------------------------------------------------//

int akmmag[] = { 291001,204013,204011,204012,1010010891, 1010011031, 1010011161,1010011281, 1010011431, 1010011541, 1010011741,1010012131,1010012311,1010012421,1010012491,1101001023};
int akreddot[] = { 203001,1010012066,1010011105,1010011226,    1010011486,1010011666,1010012506,1010012266};
int akflash[] = {201010,1010012067, 1010011106,1010011232,    1010011487,1010011667,1010012507,1010012267};
int akcompe[] = {201009,1010012068,1010011107,1010011233,    1010011488,1010011668,1010012508,1010012274};
int aksilent[] = {201011,1010012069,1010011108,1010011234,    1010011489,1010011669,1010012509,1010012269};
int akholo[] = {203002,1010012065, 1010011104,1010011225,    1010011485,1010011665,1010012265, 1010012505,1010012265};
int akx2[] = {203003,1010012064, 1010011103,1010011224,    1010011484,1010011664,1010012504 ,1010012264};
int akx3[] = {203014,1010012063, 1010011223, 1010011483,1010011663,1010012503,1010012263};
int akx4[] = {203004,1010012062,1010011222,1010011222,1010011482,1010011662,1010012502  ,1010012262};
int akx6[] = {203015,1010012516,1010012276};
int akquickMag[] = {204012,1010012070,  1010011109,1010011227,    1010011490,1010011670,1010012512 };
int akextendedMag[] = {204011,1010012072,  1010011228,    1010011493,1010011673,1010012513  };
int akquickNextended[] = { 204013,1010012073,   1010011112,1010011229,    1010011494,1010011674,1010012514  };

//-------------------------------------------------------------------//

int m7mag[] = { 291008,204013,204011,204012,1010080261, 1010080511, 1010080611, 1010080811, 1010081041, 1010081161, 1010081261,1010081361};




//-----------------------------------------------------------//
int scarmag[] = { 291003,204013,204011,204012,1010030571, 1010030701, 1010030801, 1010031191, 1010031461, 1010031671, 1010031811};
int scarsight[] = {          203007,203007    ,1010031672,1010031192,1010030702,1010030572,1010030802,1010031462      };
int scarreddot[] = {         203001,1010031757,1010031606,1010031136};
int scarflash[] = {          201010,1010031765,1010031609,1010031139};
int scarcompe[] = {          201009,1010031764,1010031610,1010031140};
int scarsilent[] = {         201011,1010031766,1010031613,1010031142};
int scarholo[] = {           203002,1010031756,1010031605,1010031135};
int scarx2[] = {             203003,1010031755,1010031604,1010031134};
int scarx3[] = {             203014,1010031754,1010031603,1010031133};
int scarx4[] = {             203004,1010031753,1010031602,1010031132};
int scarx6[] = {             203015,1010031752,203015    ,203015    };
int scarquickMag[] = {       204012,1010031758,1010031607,1010031137};
int scarextendedMag[] = {    204011,1010031759,1010031608,1010031138};
int scarquickNextended[] = { 204013,1010031763,1010031617,1010031146};
int scarverical[] = {        202002,1010031769,1010031615,1010031144};
int scarangle[] = {          202001,1010031767,1010031614,1010031143};
int scarlightgrip[] = {      202004,1010031773,202004    ,202004    };
int scarpink[] = {           202005,1010031774,202005    ,202005    };
int scarlazer[] = {          202007,1010031772,202007    ,202007    };
int scarthumb[] = {          202006,1010031768,1010031616,1010031145};
//-----------------------------------------------------------//

int m4mag[] = { 291004,204013,204011,204012,1010040461,1010040611,1010040781,1010040861,1010040981,1010041381,1010041631,1010042011,1010042073,1010042153,1010042181,1010042214  };


int m4sight[] = { 203008,1010040462,1010040612,1010040782,1010040862,1010040982,1010041382,1010041632,1010042012,1010042083,1010042163,1010042182,1010042215  };

int m4stock[] = { 205005,1010040463,1010040613,1010040783,1010040863,1010040983,1010041383,1010041633,1010042013,1010042093,1010042173,1010042183,1010042216  };

int m4stock1[] = { 205002,1010040480,205002,205002,205002,205002,1010041146,1010041579,1010041966,1010042137,1010042173  };

int m4reddot[] = { 203001,1010040470,203001,203001,203001,203001,1010041128,1010041566,1010041948,1010042029,1010042119,1010042119  };
    
int m4holo[] = { 203002,1010040469,203002,203002,203002,203002,1010041127,1010041565,1010041947,1010042028,1010042118,1010042232  };
int M416_x2[] = { 203003,1010040468,203003,203003,203003,203003,1010041126,1010041564,1010041946,1010042027,1010042117,1010042231  };
int M416_x3[] = { 203014,203014,1010040467,203014,203014,203014,1010041125,1010041560,1010041945,1010042026,1010042116,1010042219 };
 
int m4x4[] = {203004,1010040466,203004,203004,203004,203004,1010041124,1010041554,1010041944,1010042025,1010042115,1010042218
    };
    
int m4x6[] = {203015,1010040481,203015,203015,203015,203015,203015,203015,1010041967,1010042024,1010042114,1010042217
    };

int m16s[] = { 205007, 1010020292, 1010020562, 1010020682, 1010020812, 1010021032};
int m16mag[] = { 291002,204013,204011,204012, 1010020291, 1010020561, 1010020681, 1010020811, 1010021031};


int emote1[] = { 2200101,12220023,12219677,12219716,12209401,12220028,12209701,12209801,12209901 };
int emote2[] = { 2200201,12210201,12210601,12220028,12219819,12211801,12212001,12212201,12212401 };
int emote3[] = { 2200301,12212601,12213201,12219715,12219814,12213601,12213801,12214001,12214201 };

int SuitX[] = { 403003,1405628,1405870,1407140,1405983,1406152,1406311,1406475,1406638,1406872,1406971, 1407103,1407259,1405174,1406387,1406389,1406891,1400687,1407106,1407049,1406244,1407160,1400782,1407188,1407187,1400569,1404000,1404049,1407202,1407210,1407212,1407195,1407194,1407225,1407285,1407275,1407276,1407307,1407286,1407277};

int Bag1[] =     {501001, 1501003174, 1501003220, 1501003607, 1501003318, 1501003411, 1501003422, 1501003443, 1501003466, 1501003061, 1501003047,1501003039,1501003471,1501003487,1501003503,1501003515,1501003550,1501003558,1501003058,1501003057,1501003051,1501003043,1501003042,1501003229,1501003023,1501003022};

int Bag2[] =     {501001, 1501003174, 1501003220, 1501003607, 1501003318, 1501003411, 1501003422, 1501003443, 1501003466, 1501003061, 1501003047,1501003039,1501003471,1501003487,1501003503,1501003515,1501003550,1501003558,1501003058,1501003057,1501003051,1501003043,1501003042,1501003229,1501003023,1501003022};

int Bag[] =     {501001, 1501003174, 1501003220, 1501003607, 1501003318, 1501003411, 1501003422, 1501003443, 1501003466, 1501003061, 1501003047,1501003039,1501003471,1501003487,1501003503,1501003515,1501003550,1501003558,1501003058,1501003057,1501003051,1501003043,1501003042,1501003229,1501003023,1501003022};


int Helmet1[] = {502001,1502003014,1502003349,1502003012,1502003009,1502003397,1502003390,1502003381,1502003358,1502003350,1502003342,1502003336,   1502003333,1502003327,1502003325,1502003299,1502003295,1502003222,1502003069,1502003054,1502003033,1502003016,1502003031,1502003023,1502003018};

int Helmet2[] = {502001,1502003014,1502003349,1502003012,1502003009,1502003397,1502003390,1502003381,1502003358,1502003350,1502003342,1502003336,   1502003333,1502003327,1502003325,1502003299,1502003295,1502003222,1502003069,1502003054,1502003033,1502003016,1502003031,1502003023,1502003018};

int Helmet[] = {502001,1502003014,1502003349,1502003012,1502003009,1502003397,1502003390,1502003381,1502003358,1502003350,1502003342,1502003336,   1502003333,1502003327,1502003325,1502003299,1502003295,1502003222,1502003069,1502003054,1502003033,1502003016,1502003031,1502003023,1502003018};


static int prevXSuits = preferences.Config.Skin.XSuits;
static auto start = std::chrono::high_resolution_clock::now();
static bool callFunction = false;



//-----------------------Hết Khai Báo Mod Skin---------------------------//


@interface ImGuiDrawView () <MTKViewDelegate>
@property (nonatomic, strong) id <MTLDevice> device;
@property (nonatomic, strong) id <MTLCommandQueue> commandQueue;

@end
@implementation ImGuiDrawView

bool MenDeal = true;

void DrawWatermark() {
    if (watermark) {
        auto draw_list = ImGui::GetBackgroundDrawList();
        auto viewport = ImGui::GetMainViewport();

        // Lấy ngày tháng hiện tại
        std::time_t t = std::time(nullptr);
        std::tm* tm = std::localtime(&t);
        char date[64];
        std::strftime(date, sizeof(date), "%Y-%m-%d %H:%M:%S", tm);

        // Ví dụ về FPS, tên trò chơi và phiên bản
        const char* fps = "Wellcome to ";
        const char* game_name = "VSHACK Engine";
        const char* version = "Ver: 3.4.0";

        // Tạo chuỗi watermark
        std::string watermark_text = std::string(date) + " | " + fps + game_name;
        const char* watermark = watermark_text.c_str();
        auto watermark_size = ImGui::CalcTextSize(watermark);

        // Khai báo offset
        const float offset = 10.0f; // Giá trị offset

        ImVec2 watermark_pos = ImVec2(
            viewport->Pos.x + offset,
            viewport->Pos.y + viewport->Size.y - watermark_size.y - offset
        );

        // Vẽ nền của watermark với bo tròn
        ImVec2 rect_min = ImVec2(watermark_pos.x - 10, watermark_pos.y - 10);
        ImVec2 rect_max = ImVec2(watermark_pos.x + watermark_size.x + 10, watermark_pos.y + watermark_size.y + 10);
        draw_list->AddRectFilled(rect_min, rect_max, ImColor(0.1f, 0.1f, 0.1f, 0.75f), 255.0f);

        // Vẽ viền của watermark
        draw_list->AddRect(rect_min, rect_max, ImColor(0.345f, 0.396f, 0.949f, 1.0f), 8.0f);

        // Vẽ nội dung watermark
        draw_list->AddText(watermark_pos, ImColor(255, 255, 255, 255), watermark);
    }
    
    
    
}








bool Masskill;
enum heads {
    rage
};

enum sub_heads {
    general, accuracy, exploits, _general, advanced
};

static heads tab{ rage };
static sub_heads subtab{ general };


ImFont* tab_icons;
ImFont* logo;
ImFont* tab_title;
ImFont* tab_title_icon;
ImFont* subtab_title;
ImFont* combo_arrow;
ImFont* Bold;

ImFont* mainfont;



ImColor bordercolor = ImColor(62,14,185,200);
ImColor bgcolor = ImColor(42,6,108,100);

const ImColor tab_colors[3] = { ImColor(255, 0, 0), ImColor(255, 165, 0), ImColor(0, 128, 0) };

ImVec4 fovcolor = ImVec4(255,0,0,255);
ImVec4 fovaimbotcolor = ImVec4(255,0,0,255);
ImVec4 btColor = ImVec4(1,1,1,1);
ImVec4 hmColor = ImVec4(1,1,1,1);
ImVec4 Esp_NC = ImVec4(1,1,1,1);


struct sRegion {
    kaddr start, end;
};
std::vector<sRegion> trapRegions;

string encryptDecrypt(string toEncrypt) {
    char key[3] = {'K', 'C', 'Q'}; //Any chars will work, in an array of any size
    string output = toEncrypt;
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
    return output;
}


long obbbbl() {
    return ((unsigned long)_dyld_get_image_vmaddr_slide(0) +  0x10A455D28);//VNG - UObject
};
UWorld *GEWorld;
int GWorldNum = 0;
TUObjectArray gobjects;
UWorld *GetFullWorld()
{
    if(GWorldNum == 0) {
        gobjects = UObject::GUObjectArray->ObjObjects;
        for (int i=0; i< gobjects.Num(); i++)
            if (auto obj = gobjects.GetByIndex(i)) {
                if(obj->IsA(UEngine::StaticClass())) {
                    auto GEngine = (UEngine *) obj;
                    if(GEngine) {
                        tslFont = GEngine->MediumFont;
                        robotoTinyFont = GEngine->MediumFont;
                        itemfont = GEngine->MediumFont;
                        auto ViewPort = GEngine->GameViewport;
                        if (ViewPort)
                        {
                            GEWorld = ViewPort->World;
                            GWorldNum = i;
                            return ViewPort->World;
                        }
                    }
                }
            }
    }else {
        auto GEngine = (UEngine *) (gobjects.GetByIndex(GWorldNum));
        if(GEngine) {
            tslFont = GEngine->MediumFont;
            robotoTinyFont = GEngine->MediumFont;
            itemfont = GEngine->MediumFont;
            auto ViewPort = GEngine->GameViewport;
            if(ViewPort) {
                GEWorld = ViewPort->World;
                return ViewPort->World;
            }
        }
    }
    return 0;
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) ((unsigned long)_dyld_get_image_vmaddr_slide(0) + 0x10487CBE8)
            )();
}

string getObjectPath(UObject *Object) {
    string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->GetName();
    }
    return s;
}






template <class T> void GetAllActors(std::vector<T*>& Actors) {
    UGameplayStatics* gGameplayStatics = (UGameplayStatics*)gGameplayStatics->StaticClass();
    auto GWorld = GetFullWorld();
    if (GWorld) {
        TArray<AActor*> Actors2;
        gGameplayStatics->GetAllActorsOfClass((UObject*)GWorld, T::StaticClass(), &Actors2);
        for (int i = 0; i < Actors2.Num(); i++) {
            Actors.push_back((T*)Actors2[i]);
        }
    }
}



bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(kaddr);
    return mprotect((void *) ((kaddr) addr - ((kaddr) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
template<typename T>

void Write(kaddr addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}

//--------------------------KHAI---BÁO---STYLE--3-----------------//
class Rect2 {
public:
    float x;
    float y;
    float width;
    float height;

    Rect2() {
        this->x = 0;
        this->y = 0;
        this->width = 0;
        this->height = 0;
    }

    Rect2(float x, float y, float width, float height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    }

    bool operator==(const Rect2 &src) const {
        return (src.x == this->x && src.y == this->y && src.height == this->height &&
                src.width == this->width);
    }

    bool operator!=(const Rect2 &src) const {
        return (src.x != this->x && src.y != this->y && src.height != this->height &&
                src.width != this->width);
    }
};

void drawVerticalHealthBar(AHUD *HUD, Vector2 screenPos, float height, float maxHealth, float currentHealth) {
    // Add the offset to screenPos by creating a new FVector2D
    screenPos += Vector2(8.0f, 0.0f);

    // Draw the background rectangle
    HUD->DrawRect(FLinearColor(0.08f, 0.08f, 0.08f, 0.78f), screenPos.X, screenPos.Y, 5.0f, height + 2);

    // Add the offset to screenPos by creating a new FVector2D
    screenPos += Vector2(1.0f, 1.0f);
    FLinearColor clr = FLinearColor(0.0f, 1.0f, 0.0f, 1.0f); // Green color

    float barHeight = (currentHealth / maxHealth) * height;

    // Change color based on health percentage
    if (currentHealth <= (maxHealth * 0.6)) {
        clr = FLinearColor(1.0f, 0.0f, 1.0f, 1.0f); // Magenta color
    }

    if (currentHealth < (maxHealth * 0.3)) {
        clr = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f); // Red color
    }

    // Draw the health bar rectangle
    HUD->DrawRect(clr, screenPos.X, screenPos.Y, 3.0f, barHeight);
}

void DrawOutlinedTextstyle2(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = true) {
    UCanvas *Canvas = HUD->Canvas;
    Canvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}

void Box4Line(AHUD *HUD, float thicc, int x, int y, int w, int h, FLinearColor color) {
    int iw = w / 4;
    int ih = h / 4;

    // Convert color from int to FLinearColor if necessary
    // FLinearColor color = IntToColor(colorInt);

    // top
    HUD->DrawLine(x, y, x + iw, y, color, thicc);
    HUD->DrawLine(x + w - iw, y, x + w, y, color, thicc);
    HUD->DrawLine(x, y, x, y + ih, color, thicc);
    HUD->DrawLine(x + w - 1, y, x + w - 1, y + ih, color, thicc);

    // bottom
    HUD->DrawLine(x, y + h, x + iw, y + h, color, thicc);
    HUD->DrawLine(x + w - iw, y + h, x + w, y + h, color, thicc);
    HUD->DrawLine(x, y + h - ih, x, y + h, color, thicc);
    HUD->DrawLine(x + w - 1, y + h - ih, x + w - 1, y + h, color, thicc);
}


//------------------------------END-------------------------------//

struct FLinearColor visCol;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_PlayerController = 0;
#define COLOR_BLACK FLinearColor(0, 0, 0, 1.f)
#define COLOR_BLACK2 FLinearColor(0, 0, 0, 0.8f)
#define COLOR_BLACKHP FLinearColor(0, 0, 0, 0.5f)
#define COLOR_WHITE FLinearColor(1.f, 1.f, 1.f, 1.f)
#define COLOR_RED FLinearColor(1.f, 0, 0, 1.f)
#define COLOR_REDHP FLinearColor(0.5f, 0, 0, 0.5f)
#define COLOR_GREENHP FLinearColor(0, 0.5f, 0, 0.5f)
#define COLOR_GREEN FLinearColor(0, 1.f, 0, 1.f)
#define COLOR_YELLOWHP FLinearColor(1.f, 1.f, 0, 0.5f)
#define COLOR_CAR FLinearColor(1.f, 0.5f, 1.f, 1.f)
#define COLOR_CAR FLinearColor(1.f, 0.5f, 1.f, 1.f)

#define COLOR_ORANGE FLinearColor(1.f, 0.4f, 0, 1.f)
#define COLOR_YELLOW FLinearColor(1.f, 1.f, 0, 1.f)
#define COLOR_LIME FLinearColor(0, 1.f, 0, 1.f)
#define COLOR_BLUE FLinearColor(0, 1.f, 1.f, 1.f)
#define COLOR_THISTLE FLinearColor(1.0f, 0.74f, 0.84f, 1.0f)
#define COLOR_PINK FLinearColor(1.0f, 0.75f, 0.8f, 1.0f)
#define COLOR_LIME  FLinearColor(0, 1.f, 0, 1.f)
//#define COLOR_BLUE  FLinearColor(0, 0, 1.f, 1.f)
//#define COLOR_YELLOW  FLinearColor(1, 1, 0.f, 1.f)
#define COLOR_AMMO  FLinearColor(2, 1, 2.f, 2.f)
#define COLOR_ar FLinearColor(1, 2, 1.f, 1.f)
#define COLOR_sn FLinearColor(1, 1, 2.f,2.f)
#define COLOR_sh FLinearColor(2, 2, 1.f,1.f)
#define COLOR_sm FLinearColor(0, 0, 1.f,1.f)
#define COLOR_oth FLinearColor(2, 2, 0.f,0.f)
#define COLOR_item FLinearColor(2, 0, 2.f,0.f)
#define COLOR_armor FLinearColor(1.5, 2.5, 2.f,0.f)
#define COLOR_sc FLinearColor(2.5, 3.5, 1.f,0.f)
#define COLOR_CAR   FLinearColor(1.f, 0.5f, 1.f, 1.f)
#define Whiteg  FLinearColor(247.f, 248.f, 248.f)
#define COLOR_PLAYER FLinearColor(1.000f, 0.620f, 0.150f, 1.000f)







//==============================KHAI BÁO FVector=================================//

FVector GetBoneLocationByName(ASTExtraPlayerCharacter *Actor, const struct FName BoneName) {
    return Actor->GetBonePos(BoneName, FVector());
}



FVector2D rotateCoord(float angle, FVector2D coord) {
    float s = sin(angle * M_PI / 180);
    float c = cos(angle * M_PI / 180);
    
    return {coord.X * c + coord.Y * s, -coord.X * s + coord.Y * c};
}


FVector WorldToRadar2(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool & outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
Xector2.X = PosX + Size.X;
 } else {
bool flag3 = Xector2.X < PosX;
if (flag3) {
 Xector2.X = PosX;
}
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
Xector2.Y = PosY + Size.Y;
 } else {
bool flag5 = Xector2.Y < PosY;
if (flag5) {
 Xector2.Y = PosY;
}
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6) {
flag = true;
 }
 outbuff = flag;
 return Xector2;
}
FVector2D WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY,FVector Size, bool & outbuff)
{
   bool flag = false;
   double num = (double)Yaw;
   double num2 = num * 0.017453292519943295;
   float num3 = (float)std::cos(num2);
   float num4 = (float)std::sin(num2);
   float num5 = Origin.X - LocalOrigin.X;
   float num6 = Origin.Y - LocalOrigin.Y;
   FVector2D vector;
   vector.X = (num6 * num3 - num5 * num4) / 150.f;
   vector.Y = (num5 * num3 + num6 * num4) / 150.f;
   FVector2D vector2;
   vector2.X = vector.X + PosX + Size.X / 2.f;
   vector2.Y = -vector.Y + PosY + Size.Y / 2.f;
   bool flag2 = vector2.X > PosX + Size.X;
   if (flag2)
   {
       vector2.X = PosX + Size.X;
   }
   else
   {
       bool flag3 = vector2.X < PosX;
       if (flag3)
       {
           vector2.X = PosX;
       }
   }
   bool flag4 = vector2.Y > PosY + Size.Y;
   if (flag4)
   {
       vector2.Y = PosY + Size.Y;
   }
   else
   {
       bool flag5 = vector2.Y < PosY;
       if (flag5)
       {
           vector2.Y = PosY;
       }
   }
   bool flag6 = vector2.Y == PosY || vector2.X == PosX;
   if (flag6)
   {
       flag = true;
   }
   outbuff = flag;
   return vector2;
}



//==============================END KHAI BÁO FVector=================================//




//--------------------------Khai Báo Vẽ---------------------------------------//
void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
 if (forward.X == 0.f && forward.Y == 0.f) {
  angles.X = forward.Z > 0.f ? -90.f : 90.f;
  angles.Y = 0.f;
 } else {
  angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
  angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
 }
 angles.Z = 0.f;
}
void VectorAnglesRadar2(FVector& forward, FVector& angles)
{
    if (forward.X == 0.f && forward.Y == 0.f)
    {
        angles.X = forward.Z > 0.f ? -90.f : 90.f;
        angles.Y = 0.f;//done
    }
    else
    {
        angles.X = RAD2DEG(atan2(-forward.Z, forward.Size()));
        angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
    }
    angles.Z = 0.f;
}

void RotateTriangle(std::array < FVector2D, 39 > &points, float rotation)
{
    const auto points_center = (points.at(0) + points.at(1) + points.at(2) + points.at(3) + points.at(4) + points.at(5) + points.at(6)
                                + points.at(7) + points.at(8) + points.at(9) + points.at(10) + points.at(11) + points.at(12) + points.at(13)
                                + points.at(14) + points.at(15) + points.at(16) + points.at(17) + points.at(18) + points.at(19) + points.at(20)
                                + points.at(21) + points.at(22) + points.at(23) + points.at(24) + points.at(25) + points.at(26) + points.at(27)
                                + points.at(28) + points.at(29) + points.at(30) + points.at(31) + points.at(32) + points.at(33) + points.at(34)
                                + points.at(35) + points.at(36) + points.at(37) + points.at(38)) / 39;
    for (auto & point:points) {
        point = point - points_center;
        const auto temp_x = point.X;
        const auto temp_y = point.Y;
        const auto theta = DEG2RAD(rotation);
        const auto c = cosf(theta);
        const auto s = sinf(theta);
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
        point = point + points_center;
    }
}

float GetD3DDistance(FVector a, FVector b)
{
    FVector vector = {a.X - b.X, a.Y - b.Y, a.Z - b.Z};
    return sqrt(((vector.X * vector.X) + (vector.Y * vector.Y)) + (vector.Z * vector.Z));
}
void RotateTriangle2(std::array<Vector3, 3> & points, float rotation) {
    const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
    for (auto & point : points) {
        point = point - points_center;
        const auto temp_x = point.X;
        const auto temp_y = point.Y;
        const auto theta = DEG2RAD(rotation);
        const auto c = cosf(theta);
        const auto s = sinf(theta);
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
        point = point + points_center;
    }
}
//----------------------------khai báo mod skin-------------------------------//

static std::unordered_set<uint32_t> AlreadyChangedSet;
uintptr_t GetVirtualFunctionAddress(uintptr_t clazz, uintptr_t index)
{
    if (!clazz)
    {
        return 0;
    }
    uintptr_t vtablePtr = *(uintptr_t*)clazz;
    if (!vtablePtr)
    {
        return 0;
    }
    if (index < 0)
    {
        return 0;
    }
    return *((uintptr_t*)vtablePtr + index);
}
void ChangeItemAVc(uintptr_t thiz, int InItemID)
{
    if (thiz)
    {
        auto PrechangeitemAvatar_addr = GetVirtualFunctionAddress(thiz, 183); //vtable idx
        if (PrechangeitemAvatar_addr)
        {
            return ((void(*)(uintptr_t, int, bool))PrechangeitemAvatar_addr)(thiz, InItemID, true);
        }
    }
}


FRotator ToRotator(FVector local, FVector &target) {

     FVector rotation;
     rotation.X = local.X - target.X;
     rotation.Y = local.Y - target.Y;
     rotation.Z = local.Z - target.Z;
     FRotator newViewAngle = {0};
     float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);// sqrt: return the square root of any number
     newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) PI);//tangent
     newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) PI);//tangent
     newViewAngle.Roll = (float) 0.f;
     if (rotation.X >= 0.f)
     newViewAngle.Yaw += 180.0f;//180
     return newViewAngle;
     }

     FRotator ToRotatorAIMBOT(FVector local, FVector &target) {
     FVector rotation;
     rotation.X = local.X - target.X;
     rotation.Y = local.Y - target.Y;
     rotation.Z = local.Z - target.Z;
     FRotator newViewAngle = {0};
     float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
     newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f/ (float) PI);
     newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) PI);
     newViewAngle.Roll = (float) 0.f;
     if (rotation.X >= 0.f)
         newViewAngle.Yaw += 5;//90.0f;//aimspeedsl();//90
     return newViewAngle;
     
}

bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return UGameplayStatics::ProjectWorldToScreen(g_PlayerController, worldPos, true, screenPos);
}
void GrenadeLine(AHUD* HUD, FVector2D posFrom, FVector2D posTo, float Thickness, FLinearColor Color) {
    HUD->DrawLine(posFrom.X, posFrom.Y, posTo.X, posTo.Y, Color, Thickness);
}

void DrawFilledCircle(AHUD *HUD, int x, int y, int radius, int numsides, FLinearColor OutlineColor, FLinearColor FillColor){
    float Step = M_PI * 2.0 / numsides;
    FVector2D Center(x, y);
    FVector2D V[128];
    for (int i = 0; i < numsides; ++i)
    {
        // Calculate vertices for the i-th triangle
        float Angle = Step * i;
        V[i].X = Center.X + radius * cos(Angle);
        V[i].Y = Center.Y + radius * sin(Angle);

        // Draw lines from the center to the vertices
        HUD->Canvas->K2_DrawLine(Center, V[i], 1.f, FillColor);
    }

    // Optionally, draw the outline by connecting the vertices
    for (int i = 0; i < numsides; ++i)
    {
        HUD->Canvas->K2_DrawLine(V[i], V[(i+1) % numsides], 1.f, OutlineColor);
    }
}
#define W2S(w, s) iosde->ProjectWorldToScreen(localPlayerController, w, true, s)
void DrawCircle3D(AHUD* HUD, FVector origin, float radius, FLinearColor Color) {
    const int numSegments = 32;
    for (int i = 0; i < numSegments; ++i) {
        float theta1 = 2.0f * IM_PI * (i / static_cast<float>(numSegments));
        float theta2 = 2.0f * IM_PI * ((i + 1) / static_cast<float>(numSegments));
        FVector point1 = FVector(origin.X + radius * cos(theta1), origin.Y + radius * sin(theta1), origin.Z);
        FVector point2 = FVector(origin.X + radius * cos(theta2), origin.Y + radius * sin(theta2), origin.Z);
        FVector2D s1, s2;
        if (W2S2(point1, &s1) && W2S2(point2, &s2)) {
            GrenadeLine(HUD, s1, s2, 1.0f, Color);
        }
    }
}
void DrawRectangle(AHUD *HUD, FVector2D Pos, float Width, float Height, float Thickness, FLinearColor Color) {
    HUD->DrawLine(Pos.X, Pos.Y, Pos.X + Width, Pos.Y, Color, Thickness);
    HUD->DrawLine(Pos.X, Pos.Y, Pos.X, Pos.Y + Height, Color, Thickness);
    HUD->DrawLine(Pos.X + Width, Pos.Y, Pos.X + Width, Pos.Y + Height, Color, Thickness);
    HUD->DrawLine(Pos.X, Pos.Y + Height, Pos.X + Width, Pos.Y + Height, Color, Thickness);
}


void DrawFilledRectangle(AHUD *HUD, FVector2D Pos, float Width, float Height, FLinearColor Color) {
    HUD->DrawRect(Color, Pos.X, Pos.Y, Width, Height);
}


void DrawLine(AHUD *HUD, FVector2D posFrom, FVector2D posTo, float Thickness, FLinearColor Color) {
    HUD->DrawLine(posFrom.X, posFrom.Y, posTo.X, posTo.Y, Color, Thickness);
}
void DrawCircle2(AHUD *HUD, int x, int y, int radius, int numsides, FLinearColor OutlineColor)
{
    UCanvas *Canvas = HUD->Canvas;
    float Step = M_PI * 2.0 / numsides;
    int Count = 0;
    FVector2D V[128];
    for (float a = 0; a < M_PI * 2.0; a += Step)
    {
        float screenWidth = radius * cos(a) + x;
        float Y1 = radius * sin(a) + y;
        float X2 = radius * cos(a + Step) + x;
        float Y2 = radius * sin(a + Step) + y;
        V[Count].X = screenWidth;
        V[Count].Y = Y1;
        V[Count + 1].X = X2;
        V[Count + 1].Y = Y2;
        Canvas->K2_DrawLine(FVector2D({V[Count].X, V[Count].Y}), FVector2D({X2, Y2}), 1.f, OutlineColor);
    }
}

void DrawCircle(UCanvas *Canvas, int x, int y, int radius, int numsides, FLinearColor OutlineColor){
    float Step = M_PI * 2.0 / numsides;
    int Count = 0;
    FVector2D V[128];
    for (float a = 0; a < M_PI * 2.0; a += Step)
    {
        float X1 = radius * cos(a) + x;
        float Y1 = radius * sin(a) + y;
        float X2 = radius * cos(a + Step) + x;
        float Y2 = radius * sin(a + Step) + y;
        V[Count].X = X1;
        V[Count].Y = Y1;
        V[Count + 1].X = X2;
        V[Count + 1].Y = Y2;
        Canvas->K2_DrawLine(FVector2D({ V[Count].X, V[Count].Y }), FVector2D({ X2, Y2 }), 1.f, OutlineColor);
    }
}
#define TSL_FONT_DEFAULT_SIZE 25
static UFont *tslFont = 0, *robotoTinyFont = 0 ;
static UFont *itemfont =0;
void DrawOutlinedText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = true)
{
    UCanvas *DebugCanvas = HUD->DebugCanvas;
    DebugCanvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}

void DrawOutlineditem( AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = true) {
    UCanvas *DebugCanvas = HUD->DebugCanvas;
    DebugCanvas->K2_DrawText(itemfont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, YES, OutlineColor);
    
}






void DrawSmallOutlinedText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = true)
{
    UCanvas *DebugCanvas = HUD->DebugCanvas;
    DebugCanvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}




void DrawText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, bool isCenter = true)
{
    UCanvas *DebugCanvas = HUD->DebugCanvas;
    DebugCanvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, false, {});
}
void DrawwepText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, bool isCenter = true) {
    UCanvas *Canvas = HUD->Canvas;
    Canvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, {});
}


void DrawTextcan(UCanvas *Canvas, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = true) {
    Canvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}
void DrawSmallText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, bool isCenter = true)
{
    UCanvas *DebugCanvas = HUD->DebugCanvas;
    DebugCanvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, false, {});
}
void DrawRECTNEW(UCanvas* canvas,  FVector2D min,  FVector2D max, FLinearColor color, float thickness)
{
    canvas->K2_DrawLine(min, FVector2D(max.X, min.Y), thickness, color);
    canvas->K2_DrawLine(min, FVector2D(min.X, max.Y), thickness, color);
    canvas->K2_DrawLine(FVector2D(min.X, max.Y), max, thickness, color);
    canvas->K2_DrawLine(FVector2D(max.X, min.Y), max, thickness, color);
}
void drawFilledRect(UCanvas* canvas, FVector2D min,  FVector2D max, float w, float h, FLinearColor color)
{
    for (float i = 0.f; i < h; i += 1.f)
        canvas->K2_DrawLine(max+i, min+i, 1.f, color);
}


void DrawRadarcan(UCanvas* Canvas,float yaw, FVector Player, FVector Local, int xAxis, int yAxis, int width, int height, FLinearColor color)
{
    bool out = false;
    FVector siz;
    siz.X = width;
    siz.Y = height;
    FVector pos;
    pos.X = xAxis;
    pos.Y = yAxis;
    float RadarCenterX = pos.X + (siz.X / 2);
    float RadarCenterY = pos.Y + (siz.Y / 2);
    Canvas->K2_DrawBox({pos.X, pos.Y}, {siz.X, siz.Y}, 1);
    Canvas->K2_DrawLine({RadarCenterX, RadarCenterY}, {pos.X, pos.Y}, 1.f,  color);
    Canvas->K2_DrawLine({RadarCenterX, RadarCenterY}, {pos.X + siz.X, pos.Y}, 1.f,  color);
    Canvas->K2_DrawLine({pos.X, RadarCenterY}, {pos.X + siz.X, RadarCenterY}, 1.f,  color);
    Canvas->K2_DrawLine({RadarCenterX, RadarCenterY}, {RadarCenterX, pos.Y + siz.Y}, 1.f,  color);
    DrawCircle( Canvas, RadarCenterX, RadarCenterY, 2, 2, color);
    FVector2D single = WorldToRadar(yaw, Player, Local, pos.X, pos.Y, FVector(siz.X, siz.Y, 0), out);
    if ( g_disstance>= 0.f && g_disstance < 80)
    {
        DrawCircle( Canvas,single.X, single.Y, 5, 2, color);
    }
}
void FixTriangle(float& XPos, float& YPos, int screenDist){
    //
    // —————————Triangle X Pos—————————————
    if(XPos > (screenWidth - 16)) {
        XPos = screenWidth;
        XPos -= screenDist;
    }
    // ——————————————————————
    if(XPos < 16) {
        XPos = 16;
        XPos += screenDist;
    }
    // ————————— Triangle Y Pos —————————————
    if(YPos > (screenHeight - 16)) {
        YPos = screenHeight;
        YPos -= screenDist;
    }
    if(YPos < 16) {
        YPos = 16;
        YPos += screenDist;
    }
}
void DrawArrows(AHUD * hud,std::array < FVector2D, 39 > Loc, float thickness, FLinearColor color) {
 
    DrawLine(hud,Loc.at(0), Loc.at(1), thickness * 1.f, color);
    DrawLine(hud,Loc.at(1), Loc.at(2), thickness * 1.f, color);
    DrawLine(hud,Loc.at(2), Loc.at(6), thickness * 1.f, color);
    DrawLine(hud,Loc.at(6), Loc.at(5), thickness * 1.f, color);
    DrawLine(hud,Loc.at(5), Loc.at(4), thickness * 1.f, color);
    DrawLine(hud,Loc.at(4), Loc.at(3), thickness * 1.f, color);
    DrawLine(hud,Loc.at(3), Loc.at(0), thickness * 1.f, color);
}
UKismetMathLibrary* umcc = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
FVector2D pushToScreenBorder(FVector2D Pos, FVector2D screen, int borders, int offset) {
    int x = (int)Pos.X;
    int y = (int)Pos.Y;
    if ((borders & 1) == 1) {
        y = 0 - offset;
    }
    if ((borders & 2) == 2) {
        x = (int)screen.X + offset;
    }
    if ((borders & 4) == 4) {
        y = (int)screen.Y + offset;
    }
    if ((borders & 8) == 8) {
        x = 0 - offset;
    }
    return FVector2D(x, y);
}
int isOutsideSafezone(FVector2D pos, FVector2D screen) {
    FVector2D mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
    FVector2D mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);
    int result = 0;
    if (pos.Y < mSafezoneTopLeft.Y) {
        result |= 1;
    }
    if (pos.X > mSafezoneBottomRight.X) {
        result |= 2;
    }
    if (pos.Y > mSafezoneBottomRight.Y) {
        result |= 4;
    }
    if (pos.X < mSafezoneTopLeft.X) {
        result |= 8;
    }
    return result;
}
void DrawFilledTriangle(AHUD * HUD, float x1, float y1, float x2, float y2, float x3, float y3, float thickness, FLinearColor color) {
    HUD->DrawLine(x1, y1, x2, y2, color, thickness);
    HUD->DrawLine(x2, y2, x3, y3, color, thickness);
    HUD->DrawLine(x3, y3, x1, y1, color, thickness);
    for (int x = x1; x <= x2; x++) {
        for (int y = y1; y <= y2; y++) {
            HUD->DrawLine(x3, y3, x, y, color, 1.f);
        }
    }
}

UGameplayStatics* iosde = (UGameplayStatics*)UGameplayStatics::StaticClass();
ASTExtraPlayerController *localPlayerController = 0;
//#define W2S(w, s) iosde->ProjectWorldToScreen(localPlayerController, w, true, s)
FVector RotateCorner(FVector origin, FVector corner, float theta)
{
    float x = corner.X - origin.X;
    float y = corner.Y - origin.Y;
    return {
        origin.X + (x * cos(theta) - y * sin(theta)),
        origin.Y + (x * sin(theta) + y * cos(theta)),
        corner.Z
    };
}
void DrawBox3D(AHUD *HUD, AActor* actor, FLinearColor Color, FVector origin, FVector extent) {
    auto MathLibrary = (UKismetMathLibrary *) UKismetMathLibrary::StaticClass();
    auto GameplayStatics = (UGameplayStatics *) UGameplayStatics::StaticClass();
    FRotator rotation = actor->K2_GetActorRotation();
    float yaw = MathLibrary->DegreesToRadians((int)(rotation.Yaw + 450.0f) % 360);
    FVector2D ts1, ts2, ts3, ts4, bs1, bs2, bs3, bs4;
    FVector t1, t2, t3, t4, b1, b2, b3, b4;
    t1 = t2 = t3 = t4 = b1 = b2 = b3 = b4 = origin;
    t1.X -= extent.X;
    t1.Y -= extent.Y;
    t1.Z -= extent.Z;
    t2.X += extent.X;
    t2.Y -= extent.Y;
    t2.Z -= extent.Z;
    t3.X += extent.X;
    t3.Y += extent.Y;
    t3.Z -= extent.Z;
    t4.X -= extent.X;
    t4.Y += extent.Y;
    t4.Z -= extent.Z;
    t1 = RotateCorner(origin, t1, yaw);
    t2 = RotateCorner(origin, t2, yaw);
    t3 = RotateCorner(origin, t3, yaw);
    t4 = RotateCorner(origin, t4, yaw);
    b1.X -= extent.X;
    b1.Y -= extent.Y;
    b1.Z += extent.Z;
    b2.X += extent.X;
    b2.Y -= extent.Y;
    b2.Z += extent.Z;
    b3.X += extent.X;
    b3.Y += extent.Y;
    b3.Z += extent.Z;
    b4.X -= extent.X;
    b4.Y += extent.Y;
    b4.Z += extent.Z;
    b1 = RotateCorner(origin, b1, yaw);
    b2 = RotateCorner(origin, b2, yaw);
    b3 = RotateCorner(origin, b3, yaw);
    b4 = RotateCorner(origin, b4, yaw);
    if (GameplayStatics->ProjectWorldToScreen(g_PlayerController, b1, false, &bs1) && GameplayStatics->ProjectWorldToScreen(g_PlayerController, b2, false, &bs2)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, b3, false, &bs3)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, b4, false, &bs4)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t1, false, &ts1)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t2, false, &ts2)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t3, false, &ts3)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t4, false, &ts4)) {
        DrawLine(HUD, ts1, ts2, EspBoxThik, Color);
        DrawLine(HUD, ts2, ts3, EspBoxThik, Color);
        DrawLine(HUD, ts3, ts4, EspBoxThik, Color);
        DrawLine(HUD, ts4, ts1, EspBoxThik, Color);
        DrawLine(HUD, bs1, bs2, EspBoxThik, Color);
        DrawLine(HUD, bs2, bs3, EspBoxThik, Color);
        DrawLine(HUD, bs3, bs4, EspBoxThik, Color);
        DrawLine(HUD, bs4, bs1, EspBoxThik, Color);
        DrawLine(HUD, ts1, bs1, EspBoxThik, Color);
        DrawLine(HUD, ts2, bs2, EspBoxThik, Color);
        DrawLine(HUD, ts3, bs3, EspBoxThik, Color);
        DrawLine(HUD, ts4, bs4, EspBoxThik, Color);
    }
}


void IMGUI_GOD(FRotator &angles) {
    if (angles.Pitch > 180)
        angles.Pitch -= 360;
    if (angles.Pitch < -180)
        angles.Pitch += 360;

    if (angles.Pitch < -75.f)
        angles.Pitch = -75.f;
    else if (angles.Pitch > 75.f)
        angles.Pitch = 75.f;

    while (angles.Yaw < -180.0f)
        angles.Yaw += 360.0f;
    while (angles.Yaw > 180.0f)
        angles.Yaw -= 360.0f;
}
void IMGUI_GOD(float *angles) {
    if (angles[0] > 180)
        angles[0] -= 360;
    if (angles[0] < -180)
        angles[0] += 360;

    if (angles[0] < -75.f)
        angles[0] = -75.f;
    else if (angles[0] > 75.f)
        angles[0] = 75.f;

    while (angles[1] < -180.0f)
        angles[1] += 360.0f;
    while (angles[1] > 180.0f)
        angles[1] -= 360.0f;
}

void IMGUI_GOD(FVector2D angles) {
    if (angles.X > 180)
        angles.X -= 360;
    if (angles.X < -180)
        angles.X += 360;

    if (angles.X < -75.f)
        angles.X = -75.f;
    else if (angles.X > 75.f)
        angles.X = 75.f;

    while (angles.Y < -180.0f)
        angles.Y += 360.0f;
    while (angles.Y > 180.0f)
        angles.Y -= 360.0f;
}

//--------------------------kết thúc Khai Báo Vẽ ---------------------------------------//

auto GetTargetForAimBotByFOV() {
    UGameplayStatics *GameplayStatics = (UGameplayStatics *) UGameplayStatics::StaticClass();
    ASTExtraPlayerCharacter *result = 0;
    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localPlayerController = 0;

    auto GWorld = GetFullWorld();
    if (GWorld) {
        UNetDriver *NetDriver = GWorld->NetDriver;
        if (NetDriver) {
            UNetConnection *ServerConnection = NetDriver->ServerConnection;
            if (ServerConnection) {
                localPlayerController = (ASTExtraPlayerController *) ServerConnection->PlayerController;
            }
        }
        if (localPlayerController) {
            std::vector<ASTExtraPlayerCharacter*> PlayerCharacter;
            GetAllActors(PlayerCharacter);
            for (auto actor = PlayerCharacter.begin(); actor != PlayerCharacter.end(); actor++) {
                auto Actor = *actor;
                if (Actor->PlayerKey == ((ASTExtraPlayerController *) localPlayerController)->PlayerKey) {
                    localPlayer = Actor;
                    break;
                }
            }
            float max = std::numeric_limits<float>::infinity();
            std::vector<ASTExtraPlayerCharacter*> PlayerCharacter2;
            GetAllActors(PlayerCharacter2);
            for (auto actor = PlayerCharacter2.begin(); actor != PlayerCharacter2.end();
                 actor++)
            {
                
                auto Player = *actor;
                float  Distance = Player->GetDistanceTo(localPlayer) / 100.f;
                if(IsDistance < Distance)
                        continue;
                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;
                if (Player->TeamID == localPlayer->TeamID)
                    continue;
                if (Player->bDead)
                    continue;
                if (Player->bHidden )
                    continue;
                if (!Player->Mesh)
                    continue;
                if (!Player->RootComponent)
                    continue;
                if (isAimKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }
                if(isAimvisual){
                    if (!localPlayerController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Igronebot) {
                    if (Player->bIsAI)
                        continue;
                }
                auto Root = GetBoneLocationByName(Player, "Root");
                auto Head = GetBoneLocationByName(Player, "Head");
                FVector2D RootSc, HeadSc;
                if (GameplayStatics->ProjectWorldToScreen(g_PlayerController, Root, false, &RootSc) && GameplayStatics->ProjectWorldToScreen(g_PlayerController, Head, false, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;
                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= screenWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= screenHeight)) {
                        FVector2D v2Middle = FVector2D((float) (screenWidth / 2), (float) (screenHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                        if(isInsideFOV((int)middlePoint.X, (int)middlePoint.Y)) {
                            float dist = FVector2D::Distance(v2Middle, v2Loc);
                            if (dist < max) {
                                max = dist;
                                result = Player;
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}



bool isInsideFOV(int x, int y) {
    if (!IsfovSlider && !ConfigSilentAimEnable)
        return true;
    int circle_x = screenWidth / 2;
    int circle_y = screenHeight / 2;
    int rad = (int) IsfovSlider * 2.0f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}


void *LoadFont() {
    while (!tslFont || !robotoTinyFont ) {
        tslFont = UObject::FindObject<UFont>(("Font TSLFont.TSLFont"));
        robotoTinyFont = UObject::FindObject<UFont>(("Font TSLFont.TSLFont"));//Font RobotoTiny.RobotoTiny
        itemfont = UObject::FindObject<UFont>("Font TSLFont.TSLFont");
        
    }
    return 0;
}

FVector CHUTIA(ASTExtraVehicleBase * Vehicle)
{
    FVector DEFAULTSize, Shit;
    Vehicle->GetActorBounds(true, &Shit, &DEFAULTSize);
    switch (Vehicle->VehicleShapeType)
    {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
            return FVector(33 , 107, DEFAULTSize.Z); // done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return FVector(89, 114, DEFAULTSize.Z); // done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return FVector(99, 209, DEFAULTSize.Z); //done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return FVector(102, 213, DEFAULTSize.Z); //done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return FVector(128, 217, DEFAULTSize.Z); //done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return FVector(139, 177, DEFAULTSize.Z); // done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return FVector(130, 226, DEFAULTSize.Z); // done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return FVector(120, 260, DEFAULTSize.Z); // done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return FVector(104, 219, DEFAULTSize.Z); //done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return FVector(32, 89, DEFAULTSize.Z); //done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return FVector(40, 133, DEFAULTSize.Z); //done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return FVector(84, 136, DEFAULTSize.Z); //done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return FVector(42, 137, DEFAULTSize.Z); // dome
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return FVector(120, 260, DEFAULTSize.Z); // done
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return FVector(160, 284, DEFAULTSize.Z);
            break;
        default:
            return DEFAULTSize;
            break;
    }
    return DEFAULTSize;
}

    





void RenderESP( AHUD *HUD,int ScreenWidth, int ScreenHeight) {
    updateSkin();
    
    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localPlayerController = 0;
    screenWidth = ScreenWidth;
    screenHeight = ScreenHeight;
    
    
    
    // Vẽ  ================================================================================================================================ //
    
    
    UCanvas *Canvas = HUD->Canvas;
    if (Canvas) {
        static bool loadFont = false;
        if (!loadFont) {
            LoadFont();
            loadFont = true;
        }
        if (!tslFont || !robotoTinyFont )
            return;
        
        //ESP
        
        UGameplayStatics* gGameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass();
        
        UKismetMathLibrary* UMC = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
        
        auto GWorld = GetFullWorld();
        if (GWorld) {
            UNetDriver *NetDriver = GWorld->NetDriver;
            if (NetDriver) {
                UNetConnection *ServerConnection = NetDriver->ServerConnection;
                if (ServerConnection) {
                    localPlayerController = (ASTExtraPlayerController *) ServerConnection->PlayerController;
                }
            }
            
            
            if (localPlayerController) {
                std::vector<ASTExtraPlayerCharacter*> PlayerCharacter;
                GetAllActors(PlayerCharacter);
                
                for (auto actor = PlayerCharacter.begin(); actor != PlayerCharacter.end(); actor++) {
                    auto Actor = *actor;
                    if (Actor->PlayerKey == ((ASTExtraPlayerController *) localPlayerController)->PlayerKey) {
                        localPlayer = Actor;
                        break;
                    }
                }
                
                
                
                if (localPlayer) {
                    if (localPlayer->PartHitComponent) {
                        auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                        for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                            ConfigCollisionDistSqAngles[j].Angle = 90.f;
                        }
                        localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
                    }
                    
                    if (ModSkinn){
                        if (DeadBox){
                            std::vector<APlayerTombBox *> TombBox;
                            GetAllActors(TombBox);
                            for (auto actor = TombBox.begin();
                                 actor != TombBox.end(); actor++) {
                                auto TombBoxx = *actor;
                                if (TombBoxx && TombBoxx->DamageCauser && TombBoxx->TargetPlayer && localPlayerController) // Check pointers before dereferencing
                                {
                                    if (TombBoxx->DamageCauser->PlayerKey == localPlayerController->PlayerKey)
                                    {
                                        auto PlayerKey = TombBoxx->TargetPlayer->PlayerKey;
                                        if (AlreadyChangedSet.find(PlayerKey) == AlreadyChangedSet.end())
                                        {
                                            if (localPlayer && localPlayer->WeaponManagerComponent) // Check pointers before dereferencing
                                            {
                                                auto DeadBoxAvatarCompPtr = (uintptr_t*)((uintptr_t)TombBoxx + 0x668); //DeadBoxAvatarComponent_BP_C* DeadBoxAvatarComponent_BP
                                                if (DeadBoxAvatarCompPtr)
                                                {
                                                    auto DeadBoxAvatarComp = *DeadBoxAvatarCompPtr;
                                                    auto CurrentWeaponReplicated = localPlayer->WeaponManagerComponent->CurrentWeaponReplicated;
                                                    if (CurrentWeaponReplicated)
                                                    {
                                                        
                                                        auto Weaponid = localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponID();
                                                        if (Weaponid == 101004) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.M416_1);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        } else if (Weaponid == 101001) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.AKM);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }else if (Weaponid == 101002) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.M16A4);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 101003) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Scar);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }else if (Weaponid == 101005) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Groza);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }else if (Weaponid == 101100) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Famas);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 101006) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.AUG);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 101007) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.QBZ);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 101008) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.M762);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 101102) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.ACE32);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 102001) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.UZI);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }else if (Weaponid == 102002) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.UMP);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }else if (Weaponid == 102003) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Vector);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }else if (Weaponid == 102004) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Thompson);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }else if (Weaponid == 102105) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.P90);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 102005) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Bizon);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 103001) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.K98);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 103002) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.M24);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 103003) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.AWM);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 108001) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Machete);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        
                                                        
                                                        else if (Weaponid == 103012) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.AMR);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 103007) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.MK14);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 103006) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Mini14);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        
                                                        else if (Weaponid == 105002) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.DP28);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 105010) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.MG3);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        else if (Weaponid == 101012) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.Honey);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        
                                                        else if (Weaponid == 104002) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.S1897);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        
                                                        else if (Weaponid == 104003) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.S12K);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        
                                                        
                                                        
                                                        else if (Weaponid == 104004) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.DBS);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                        
                                                        else if (Weaponid == 105001) {
                                                            ChangeItemAVc(DeadBoxAvatarComp, new_Skin.M249);
                                                            AlreadyChangedSet.insert(PlayerKey);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        
                        
                        if (localPlayer->WeaponManagerComponent != 0) {
                            if (localPlayer->WeaponManagerComponent->CurrentWeaponReplicated != 0 ) {
                                int weapowep = localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponID();
                                auto currentTime = std::chrono::steady_clock::now();
                                auto landchud = localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->synData;
                                auto timeDiff = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastWeaponChangeTime).count();
                                if (timeDiff > 1000) {
                                    for (int j = 0; j < landchud.Num(); j++) {
                                        auto& weaponInfo = landchud[j];
                                        auto weaponid = weaponInfo.DefineID.TypeSpecificID;
                                        if (weaponid != 0)
                                        {
                                            if (preferences.AKM && weapowep == 101001){
                                                for (int i = 0; i < sizeof(akmv) / sizeof(akmv[0]); i++) {
                                                    if (weaponid == akmv[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akmmag) / sizeof(akmmag[0]); i++) {
                                                    if (weaponid == akmmag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_Mag;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akreddot) / sizeof(akreddot[0]); i++) {
                                                    if (weaponid == akreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_reddot;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akflash) / sizeof(akflash[0]); i++) {
                                                    if (weaponid == akflash[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_flash;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akcompe) / sizeof(akcompe[0]); i++) {
                                                    if (weaponid == akcompe[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_compe;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(aksilent) / sizeof(aksilent[0]); i++) {
                                                    if (weaponid == aksilent[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_silent;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akholo) / sizeof(akholo[0]); i++) {
                                                    if (weaponid == akholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akx2) / sizeof(akx2[0]); i++) {
                                                    if (weaponid == akx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akx3) / sizeof(akx3[0]); i++) {
                                                    if (weaponid == akx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_x3;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akx4) / sizeof(akx4[0]); i++) {
                                                    if (weaponid == akx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akx6) / sizeof(akx6[0]); i++) {
                                                    if (weaponid == akx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akextendedMag) / sizeof(akextendedMag[0]); i++) {
                                                    if (weaponid == akextendedMag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_extendedMag;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(akquickNextended) / sizeof(akquickNextended[0]); i++) {
                                                    if (weaponid == akquickNextended[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_quickNextended;
                                                        break;
                                                    }
                                                }
                                            }
                                        
                                        
                                            
                                            
                                            
                                            
                                            if (preferences.KAR98 && weapowep == 103001){
                                                for (int i = 0; i < sizeof(kar) / sizeof(kar[0]); i++) {
                                                    if (weaponid == kar[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(karreddot) / sizeof(karreddot[0]); i++) {
                                                    if (weaponid == karreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(karholo) / sizeof(karholo[0]); i++) {
                                                    if (weaponid == karholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(karx2) / sizeof(karx2[0]); i++) {
                                                    if (weaponid == karx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(karx3) / sizeof(karx3[0]); i++) {
                                                    if (weaponid == karx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(karx4) / sizeof(karx4[0]); i++) {
                                                    if (weaponid == karx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(karx6) / sizeof(karx6[0]); i++) {
                                                    if (weaponid == karx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(karx8) / sizeof(karx8[0]); i++) {
                                                    if (weaponid == karx8[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.K98_x8;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            if (preferences.M24 && weapowep == 103002){
                                                for (int i = 0; i < sizeof(m24) / sizeof(m24[0]); i++) {
                                                    if (weaponid == m24[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(m24reddot) / sizeof(m24reddot[0]); i++) {
                                                    if (weaponid == m24reddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(m24holo) / sizeof(m24holo[0]); i++) {
                                                    if (weaponid == m24holo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m24x2) / sizeof(m24x2[0]); i++) {
                                                    if (weaponid == m24x2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m24x3) / sizeof(m24x3[0]); i++) {
                                                    if (weaponid == m24x3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m24x4) / sizeof(m24x4[0]); i++) {
                                                    if (weaponid == m24x4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m24x6) / sizeof(m24x6[0]); i++) {
                                                    if (weaponid == m24x6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m24x8) / sizeof(m24x8[0]); i++) {
                                                    if (weaponid == m24x8[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M24_x8;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            if (preferences.AWM && weapowep == 103003){
                                                for (int i = 0; i < sizeof(awm) / sizeof(awm[0]); i++) {
                                                    if (weaponid == awm[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(awmreddot) / sizeof(awmreddot[0]); i++) {
                                                    if (weaponid == awmreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(awmholo) / sizeof(awmholo[0]); i++) {
                                                    if (weaponid == awmholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(awmx2) / sizeof(awmx2[0]); i++) {
                                                    if (weaponid == awmx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(awmx3) / sizeof(awmx3[0]); i++) {
                                                    if (weaponid == awmx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(awmx4) / sizeof(awmx4[0]); i++) {
                                                    if (weaponid == awmx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(awmx6) / sizeof(awmx6[0]); i++) {
                                                    if (weaponid == awmx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(awmx8) / sizeof(awmx8[0]); i++) {
                                                    if (weaponid == awmx8[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM_x8;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            if (preferences.Machete && weapowep == 108001){
                                                for (int i = 0; i < sizeof(machete) / sizeof(machete[0]); i++) {
                                                    if (weaponid == machete[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Machete;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            if (preferences.AMR && weapowep == 103012){
                                                for (int i = 0; i < sizeof(amr) / sizeof(amr[0]); i++) {
                                                    if (weaponid == amr[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(amrreddot) / sizeof(amrreddot[0]); i++) {
                                                    if (weaponid == amrreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(amrholo) / sizeof(amrholo[0]); i++) {
                                                    if (weaponid == amrholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(amrx2) / sizeof(amrx2[0]); i++) {
                                                    if (weaponid == amrx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(amrx3) / sizeof(amrx3[0]); i++) {
                                                    if (weaponid == amrx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(amrx4) / sizeof(amrx4[0]); i++) {
                                                    if (weaponid == amrx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(amrx6) / sizeof(amrx6[0]); i++) {
                                                    if (weaponid == amrx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(amrx8) / sizeof(amrx8[0]); i++) {
                                                    if (weaponid == amrx8[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AMR_x8;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            
                                            
                                            
                                            if (preferences.MK14 && weapowep == 103007){
                                                for (int i = 0; i < sizeof(mk14) / sizeof(mk14[0]); i++) {
                                                    if (weaponid == mk14[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MK14;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            
                                            
                                            if (preferences.MINI14 && weapowep == 103006){
                                                for (int i = 0; i < sizeof(mini14) / sizeof(mini14[0]); i++) {
                                                    if (weaponid == mini14[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Mini14;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            if (preferences.TOMMY && weapowep == 102004){
                                                for (int i = 0; i < sizeof(tommy) / sizeof(tommy[0]); i++) {
                                                    if (weaponid == tommy[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Thompson;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.P90 && weapowep == 102105){
                                                for (int i = 0; i < sizeof(p90) / sizeof(p90[0]); i++) {
                                                    if (weaponid == p90[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.P90;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            if (preferences.ACE32 && weapowep == 101102){
                                                for (int i = 0; i < sizeof(ace32) / sizeof(ace32[0]); i++) {
                                                    if (weaponid == ace32[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                for (int i = 0; i < sizeof(ace32) / sizeof(ace32[0]); i++) {
                                                    if (weaponid == ace32[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(ace32reddot) / sizeof(ace32reddot[0]); i++) {
                                                    if (weaponid == ace32reddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(ace32holo) / sizeof(ace32holo[0]); i++) {
                                                    if (weaponid == ace32holo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(ace32x2) / sizeof(ace32x2[0]); i++) {
                                                    if (weaponid == ace32x2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(ace32x3) / sizeof(ace32x3[0]); i++) {
                                                    if (weaponid == ace32x3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(ace32x4) / sizeof(ace32x4[0]); i++) {
                                                    if (weaponid == ace32x4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(ace32x6) / sizeof(ace32x6[0]); i++) {
                                                    if (weaponid == ace32x6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32_x6;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            
                                            
                                            
                                            if (preferences.BIZON && weapowep == 102005){
                                                for (int i = 0; i < sizeof(bizon) / sizeof(bizon[0]); i++) {
                                                    if (weaponid == bizon[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Bizon;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            if (preferences.VECTOR && weapowep == 102003){
                                                for (int i = 0; i < sizeof(vectorr) / sizeof(vectorr[0]); i++) {
                                                    if (weaponid == vectorr[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Vector;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.UMP && weapowep == 102002){
                                                for (int i = 0; i < sizeof(ump) / sizeof(ump[0]); i++) {
                                                    if (weaponid == ump[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(umpreddot) / sizeof(umpreddot[0]); i++) {
                                                    if (weaponid == umpreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(umpholo) / sizeof(umpholo[0]); i++) {
                                                    if (weaponid == umpholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(umpx2) / sizeof(umpx2[0]); i++) {
                                                    if (weaponid == umpx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(umpx3) / sizeof(umpx3[0]); i++) {
                                                    if (weaponid == umpx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(umpx4) / sizeof(umpx4[0]); i++) {
                                                    if (weaponid == umpx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(umpx6) / sizeof(umpx6[0]); i++) {
                                                    if (weaponid == umpx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP_x6;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.UZI && weapowep == 102001){
                                                for (int i = 0; i < sizeof(uzi) / sizeof(uzi[0]); i++) {
                                                    if (weaponid == uzi[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.UZI;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.M16 && weapowep == 101002){
                                                for (int i = 0; i < sizeof(m16) / sizeof(m16[0]); i++) {
                                                    if (weaponid == m16[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M16A4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m16s) / sizeof(m16s[0]); i++) {
                                                    if (weaponid == m16s[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M16A4_Stock;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m16mag) / sizeof(m16mag[0]); i++) {
                                                    if (weaponid == m16mag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M16A4_Mag;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.PAN && weapowep == 108004){
                                                for (int i = 0; i < sizeof(pan) / sizeof(pan[0]); i++) {
                                                    if (weaponid == pan[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Pan;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            if (preferences.AUG && weapowep == 101006){
                                                for (int i = 0; i < sizeof(aug) / sizeof(aug[0]); i++) {
                                                    if (weaponid == aug[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                for (int i = 0; i < sizeof(aug) / sizeof(aug[0]); i++) {
                                                    if (weaponid == aug[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(augreddot) / sizeof(augreddot[0]); i++) {
                                                    if (weaponid == augreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(augholo) / sizeof(augholo[0]); i++) {
                                                    if (weaponid == augholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(augx2) / sizeof(augx2[0]); i++) {
                                                    if (weaponid == augx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(augx3) / sizeof(augx3[0]); i++) {
                                                    if (weaponid == augx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(augx4) / sizeof(augx4[0]); i++) {
                                                    if (weaponid == augx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(augx6) / sizeof(augx6[0]); i++) {
                                                    if (weaponid == augx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(augLazer) / sizeof(augLazer[0]); i++) {
                                                    if (weaponid == augLazer[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_lazer;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(augFlash) / sizeof(augFlash[0]); i++) {
                                                    if (weaponid == augFlash[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG_flash;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            if (preferences.QBZ && weapowep == 101007){
                                                for (int i = 0; i < sizeof(qbz) / sizeof(qbz[0]); i++) {
                                                    if (weaponid == qbz[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.QBZ;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            if (preferences.GROZA && weapowep == 101005){
                                                for (int i = 0; i < sizeof(groza) / sizeof(groza[0]); i++) {
                                                    if (weaponid == groza[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(Groza_2) / sizeof(Groza_2[0]); i++) {
                                                    if (weaponid == Groza_2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozasilent) / sizeof(grozasilent[0]); i++) {
                                                    if (weaponid == grozasilent[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_silent;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozareddot) / sizeof(grozareddot[0]); i++) {
                                                    if (weaponid == grozareddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_reddot;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozaholo) / sizeof(grozaholo[0]); i++) {
                                                    if (weaponid == grozaholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozax2) / sizeof(grozax2[0]); i++) {
                                                    if (weaponid == grozax2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozax3) / sizeof(grozax3[0]); i++) {
                                                    if (weaponid == grozax3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_x3;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozax4) / sizeof(grozax4[0]); i++) {
                                                    if (weaponid == grozax4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozax6) / sizeof(grozax6[0]); i++) {
                                                    if (weaponid == grozax6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozaquickMag) / sizeof(grozaquickMag[0]); i++) {
                                                    if (weaponid == grozaquickMag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_quickMag;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozaextendedMag) / sizeof(grozaextendedMag[0]); i++) {
                                                    if (weaponid == grozaextendedMag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_extendedMag;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(grozaquickNextended) / sizeof(grozaquickNextended[0]); i++) {
                                                    if (weaponid == grozaquickNextended[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza_quickNextended;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.FAMAS && weapowep == 101100){
                                                for (int i = 0; i < sizeof(famas) / sizeof(famas[0]); i++) {
                                                    if (weaponid == famas[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Famas;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                for (int i = 0; i < sizeof(famas) / sizeof(famas[0]); i++) {
                                                    if (weaponid == famas[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Famas;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(famasreddot) / sizeof(famasreddot[0]); i++) {
                                                    if (weaponid == famasreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.FAMAS_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(famasholo) / sizeof(famasholo[0]); i++) {
                                                    if (weaponid == famasholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.FAMAS_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(famasx2) / sizeof(famasx2[0]); i++) {
                                                    if (weaponid == famasx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Famas_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(famasx3) / sizeof(famasx3[0]); i++) {
                                                    if (weaponid == famasx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Famas_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(famasx4) / sizeof(famasx4[0]); i++) {
                                                    if (weaponid == famasx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Famas_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(famasx6) / sizeof(famasx6[0]); i++) {
                                                    if (weaponid == famasx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Famas_x6;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            if (preferences.DP28 && weapowep == 105002){
                                                for (int i = 0; i < sizeof(dp) / sizeof(dp[0]); i++) {
                                                    if (weaponid == dp[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.DP28;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.MG3 && weapowep == 105010){
                                                for (int i = 0; i < sizeof(mg3) / sizeof(mg3[0]); i++) {
                                                    if (weaponid == mg3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MG3;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(mg3reddot) / sizeof(mg3reddot[0]); i++) {
                                                    if (weaponid == mg3reddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MG3_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(mg3holo) / sizeof(mg3holo[0]); i++) {
                                                    if (weaponid == mg3holo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MG3_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(mg3x2) / sizeof(mg3x2[0]); i++) {
                                                    if (weaponid == mg3x2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MG3_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(mg3x3) / sizeof(mg3x3[0]); i++) {
                                                    if (weaponid == mg3x3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MG3_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(mg3x4) / sizeof(mg3x4[0]); i++) {
                                                    if (weaponid == mg3x4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MG3_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(mg3x6) / sizeof(mg3x6[0]); i++) {
                                                    if (weaponid == mg3x6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.MG3_x6;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            
                                            
                                            
                                            
                                            
                                            
                                            if (preferences.Honey && weapowep == 101012){
                                                for (int i = 0; i < sizeof(honey) / sizeof(honey[0]); i++) {
                                                    if (weaponid == honey[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Honey;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            if (preferences.S12K && weapowep == 104003){
                                                for (int i = 0; i < sizeof(s12k) / sizeof(s12k[0]); i++) {
                                                    if (weaponid == s12k[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.S12K;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            
                                            
                                            if (preferences.S1897 && weapowep == 104002){
                                                for (int i = 0; i < sizeof(s1897) / sizeof(s1897[0]); i++) {
                                                    if (weaponid == s1897[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.S1897;
                                                        break;
                                                    }
                                                }
                                            }
                                            if (preferences.DBS && weapowep == 104004){
                                                for (int i = 0; i < sizeof(dbs) / sizeof(dbs[0]); i++) {
                                                    if (weaponid == dbs[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.DBS;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            
                                            
                                            
                                            
                                            if (preferences.M249 && weapowep == 105001){
                                                for (int i = 0; i < sizeof(m249) / sizeof(m249[0]); i++) {
                                                    if (weaponid == m249[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M249;
                                                        break;
                                                    }
                                                }
                                                /* for (int i = 0; i < sizeof(m249s) / sizeof(m249s[0]); i++) {
                                                 if (weaponid == m249s[i]) {
                                                 weaponInfo.DefineID.TypeSpecificID = new_Skin.M249s;
                                                 break;
                                                 }
                                                 }*/
                                            }
                                            
                                            if (preferences.SCARL && weapowep == 101003){
                                                for (int i = 0; i < sizeof(scar) / sizeof(scar[0]); i++) {
                                                    if (weaponid == scar[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarmag) / sizeof(scarmag[0]); i++) {
                                                    if (weaponid == scarmag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_Mag;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarsight) / sizeof(scarsight[0]); i++) {
                                                    if (weaponid == scarsight[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_3;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarflash) / sizeof(scarflash[0]); i++) {
                                                    if (weaponid == scarflash[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_flash;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarcompe) / sizeof(scarcompe[0]); i++) {
                                                    if (weaponid == scarcompe[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_compe;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarsilent) / sizeof(scarsilent[0]); i++) {
                                                    if (weaponid == scarsilent[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_silent;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarreddot) / sizeof(scarreddot[0]); i++) {
                                                    if (weaponid == scarreddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_reddot;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarholo) / sizeof(scarholo[0]); i++) {
                                                    if (weaponid == scarholo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarx2) / sizeof(scarx2[0]); i++) {
                                                    if (weaponid == scarx2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarx3) / sizeof(scarx3[0]); i++) {
                                                    if (weaponid == scarx3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_x3;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarx4) / sizeof(scarx4[0]); i++) {
                                                    if (weaponid == scarx4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarx6) / sizeof(scarx6[0]); i++) {
                                                    if (weaponid == scarx6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarquickMag) / sizeof(scarquickMag[0]); i++) {
                                                    if (weaponid == scarquickMag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_quickMag;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarextendedMag) / sizeof(scarextendedMag[0]); i++) {
                                                    if (weaponid == scarextendedMag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_extendedMag;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarquickNextended) / sizeof(scarquickNextended[0]); i++) {
                                                    if (weaponid == scarquickNextended[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_quickNextended;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarverical) / sizeof(scarverical[0]); i++) {
                                                    if (weaponid == scarverical[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_verical;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarangle) / sizeof(scarangle[0]); i++) {
                                                    if (weaponid == scarangle[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_angle;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarlightgrip) / sizeof(scarlightgrip[0]); i++) {
                                                    if (weaponid == scarlightgrip[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_lightgrip;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarpink) / sizeof(scarpink[0]); i++) {
                                                    if (weaponid == scarpink[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_pink;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarlazer) / sizeof(scarlazer[0]); i++) {
                                                    if (weaponid == scarlazer[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_lazer;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(scarthumb) / sizeof(scarthumb[0]); i++) {
                                                    if (weaponid == scarthumb[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_thumb;
                                                        break;
                                                    }
                                                }
                                            }
                                            
                                            if (preferences.M762 && weapowep == 101008){
                                                for (int i = 0; i < sizeof(m7) / sizeof(m7[0]); i++) {
                                                    if (weaponid == m7[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                for (int i = 0; i < sizeof(m7) / sizeof(m7[0]); i++) {
                                                    if (weaponid == m7[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762;
                                                        break;
                                                    }
                                                }
                                                
                                                for (int i = 0; i < sizeof(m7mag) / sizeof(m7mag[0]); i++) {
                                                    if (weaponid == m7mag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_Mag;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                for (int i = 0; i < sizeof(m7reddot) / sizeof(m7reddot[0]); i++) {
                                                    if (weaponid == m7reddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_reddot;
                                                        break;
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                for (int i = 0; i < sizeof(m7holo) / sizeof(m7holo[0]); i++) {
                                                    if (weaponid == m7holo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_holo;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m7x2) / sizeof(m7x2[0]); i++) {
                                                    if (weaponid == m7x2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m7x3) / sizeof(m7x3[0]); i++) {
                                                    if (weaponid == m7x3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_x3;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m7x4) / sizeof(m7x4[0]); i++) {
                                                    if (weaponid == m7x4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m7x6) / sizeof(m7x6[0]); i++) {
                                                    if (weaponid == m7x6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_x6;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m7Lazer) / sizeof(m7Lazer[0]); i++) {
                                                    if (weaponid == m7Lazer[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_lazer;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m7Flash) / sizeof(m7Flash[0]); i++) {
                                                    if (weaponid == m7Flash[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_flash;
                                                        break;
                                                    }
                                                }
                                            }
                                                
                                                
                                                
                                                
                                                
                                            
                                            if (preferences.M416 && weapowep == 101004){
                                                for (int i = 0; i < sizeof(m4v) / sizeof(m4v[0]); i++) {
                                                    if (weaponid == m4v[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_1;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4mag) / sizeof(m4mag[0]); i++) {
                                                    if (weaponid == m4mag[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4sight) / sizeof(m4sight[0]); i++) {
                                                    if (weaponid == m4sight[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_3;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4stock) / sizeof(m4stock[0]); i++) {
                                                    if (weaponid == m4stock[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4stock1) / sizeof(m4stock1[0]); i++) {
                                                    if (weaponid == m4stock1[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_stock;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4reddot) / sizeof(m4reddot[0]); i++) {
                                                    if (weaponid == m4reddot[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_reddot;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4holo) / sizeof(m4holo[0]); i++) {
                                                    if (weaponid == m4holo[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_holo;
                                                        break;
                                                    }
                                                }
                                                
                                                for (int i = 0; i < sizeof(M416_x2) / sizeof(M416_x2[0]); i++) {
                                                    if (weaponid == M416_x2[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_x2;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(M416_x3) / sizeof(M416_x3[0]); i++) {
                                                    if (weaponid == M416_x3[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_x3;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4x4) / sizeof(m4x4[0]); i++) {
                                                    if (weaponid == m4x4[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_x4;
                                                        break;
                                                    }
                                                }
                                                for (int i = 0; i < sizeof(m4x6) / sizeof(m4x6[0]); i++) {
                                                    if (weaponid == m4x6[i]) {
                                                        weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_x6;
                                                        break;
                                                    }
                                                }
                                            }
                                            localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->DelayHandleAvatarMeshChanged();
                                            lastWeaponChangeTime = currentTime;
                                        }
                                    }
                                }
                            }
                        }
                        //
                        
                        if (localPlayer -> CurrentVehicle) {
                            if (localPlayer -> CurrentVehicle -> VehicleAvatar) {
                                std::string SkinIDStr = std::to_string((int) localPlayer -> CurrentVehicle -> VehicleAvatar -> GetDefaultAvatarID());
                                Active::SkinCarDefault = localPlayer -> CurrentVehicle -> GetAvatarID();
                                
                                
                                if (preferences.Moto && strstr(SkinIDStr.c_str(), "1901")) {
                                    Active::SkinCarMod = new_Skin.Moto;
                                    Active::SkinCarNew = true;
                                } else if (preferences.Dacia && strstr(SkinIDStr.c_str(), "1903")) {
                                    Active::SkinCarMod = new_Skin.Dacia;
                                    Active::SkinCarNew = true;
                                } else if (preferences.Boat && strstr(SkinIDStr.c_str(), "1911")) {
                                    Active::SkinCarMod = new_Skin.Boat;
                                    Active::SkinCarNew = true;
                                } else if (preferences.MiniBus && strstr(SkinIDStr.c_str(), "1904")) {
                                    Active::SkinCarMod = new_Skin.MiniBus;
                                    Active::SkinCarNew = true;
                                } else if (preferences.Mirado && strstr(SkinIDStr.c_str(), "1914")) {
                                    Active::SkinCarMod = new_Skin.Mirado;
                                    Active::SkinCarNew = true;
                                } else if (preferences.Mirado && strstr(SkinIDStr.c_str(), "1915")) {
                                    Active::SkinCarMod = new_Skin.Mirado;
                                    Active::SkinCarNew = true;
                                } else if (preferences.Buggy && strstr(SkinIDStr.c_str(), "1907")) {
                                    Active::SkinCarMod = new_Skin.Buggy;
                                    Active::SkinCarNew = true;
                                }else if (preferences.CoupeRB && strstr(SkinIDStr.c_str(), "1961")) {
                                    Active::SkinCarMod = new_Skin.CoupeRP;
                                    Active::SkinCarNew = true;
                                } else if (preferences.BigFoot && strstr(SkinIDStr.c_str(), "1953")) {
                                    Active::SkinCarMod = new_Skin.Bigfoot;
                                    Active::SkinCarNew = true;
                                } else if (preferences.RZR && strstr(SkinIDStr.c_str(), "1966")) {
                                    Active::SkinCarMod = new_Skin.RZR;
                                    Active::SkinCarNew = true;
                                    
                                } else if (preferences.UAZ && strstr(SkinIDStr.c_str(), "1908")) {
                                    Active::SkinCarMod = new_Skin.UAZ;
                                    Active::SkinCarNew = true;
                                } else Active::SkinCarNew = false;
                                
                                if (Active::SkinCarDefault != Active::SkinCarMod && Active::SkinCarNew) {
                                    
                                    localPlayer -> CurrentVehicle -> VehicleAvatar -> ChangeItemAvatar(Active::SkinCarMod, true);
                                }
                            }
                        }
                        
                        if (localPlayerController->BackpackComponent){
                            auto data = localPlayerController->BackpackComponent->ItemListNet;
                            auto bag = data.IncArray;
                            for (int j = 0; j < bag.Num(); j++) {
                                int ID = bag[j].Unit.DefineID.TypeSpecificID;
                                if (preferences.Outfit){
                                    for (int i = 0; i < sizeof(SuitX) / sizeof(SuitX[0]); i++) {
                                        if (ID == SuitX[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = new_Skin.XSuits;
                                            break;
                                        }
                                    }
                                }
                                if (preferences.Bagg){
                                    for (int i = 0; i < sizeof(Bag) / sizeof(Bag[0]); i++) {
                                        if (ID == Bag1[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = bag1;
                                            break;
                                        }
                                        if (ID == Bag2[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = bag2;
                                            break;
                                        }
                                        if (ID == Bag[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = bag3;
                                            break;
                                        }
                                    }
                                }
                                if (preferences.Helmett){
                                    for (int i = 0; i < sizeof(Helmet) / sizeof(Helmet[0]); i++) {
                                        if (ID == Helmet1[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = helmett1;
                                            break;
                                        }
                                        if (ID == Helmet2[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = helmett2;
                                            break;
                                        }
                                        if (ID == Helmet[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = helmett3;
                                            break;
                                        }
                                    }
                                }
                                if (preferences.Emote){
                                    for (int i = 0; i < sizeof(emote1) / sizeof(emote1[0]); i++) {
                                        if (ID == emote1[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = sEmote1;
                                            break;
                                        }
                                    }
                                    for (int i = 0; i < sizeof(emote2) / sizeof(emote2[0]); i++) {
                                        if (ID == emote2[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = sEmote2;
                                            break;
                                        }
                                    }
                                    for (int i = 0; i < sizeof(emote3) / sizeof(emote3[0]); i++) {
                                        if (ID == emote3[i]) {
                                            bag[j].Unit.DefineID.TypeSpecificID = sEmote3;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        
                        
                        if (localPlayer -> AvatarComponent2) {
                            
                            auto AvatarComp = localPlayer -> AvatarComponent2;
                            
                            FNetAvatarSyncData NetAvatarComp = * (FNetAvatarSyncData * )((uintptr_t) AvatarComp + 0x388); //if u use 64bit change this offset
                            auto Slotsybc = NetAvatarComp.SlotSyncData;
                            if (preferences.Parachute){
                                Slotsybc[11].ItemId = new_Skin.Parachute;
                            }
                            if (preferences.Hieuungbay){
                                Slotsybc[15].ItemId = new_Skin.Hieuungbay;
                            }
                            if (preferences.Fac){
                                Slotsybc[16].ItemId = new_Skin.Fac;
                            }
                            
                            if (preferences.Outfit){
                                Slotsybc[5].ItemId = new_Skin.XSuits;
                                Slotsybc[6].ItemId = new_Skin.quan;
                                Slotsybc[7].ItemId = new_Skin.giay;
                                Slotsybc[8].ItemId = new_Skin.Kaaba;
                            }
                            if (preferences.Bagg){
                                Slotsybc[8].ItemId = bag1;
                                Slotsybc[8].ItemId = bag2;
                                Slotsybc[8].ItemId = bag3;
                            }
                            if (preferences.Helmett){
                                Slotsybc[9].ItemId = helmett1;
                                Slotsybc[9].ItemId = helmett2;
                                Slotsybc[9].ItemId = helmett3;
                            }
                            auto now = std::chrono::high_resolution_clock::now();
                            auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(now - start).count();
                            
                            if (elapsed < 1 && callFunction) {
                                localPlayer->AvatarComponent2->OnRep_BodySlotStateChanged();
                                localPlayerController->BackpackComponent->OnRep_ItemListNet();
                            } else {
                                callFunction = false;
                            }
                            
                        }
                    }
                    
                    int totalEnemies = 0, totalBots = 0;
                    std::vector<ASTExtraPlayerCharacter*> PlayerCharacter2;
                    GetAllActors(PlayerCharacter2);
                    for (auto actor = PlayerCharacter2.begin(); actor != PlayerCharacter2.end(); actor++) {
                        auto Player = *actor;
                        float  Distance = Player->GetDistanceTo(localPlayer) / 100.f;
                        if(450 < Distance)
                            continue;
                        if (Player->PlayerKey == localPlayer->PlayerKey)
                            continue;
                        if (Player->TeamID == localPlayer->TeamID)
                            continue;
                        if (Player->bDead)
                            continue;
                        if (Player->bHidden )
                            continue;
                        if (!Player->Mesh)
                            continue;
                        if (!Player->RootComponent)
                            continue;
                        if (boquabot) {
                            if (Player->bEnsure)
                                continue;
                        }
                        
                        if (Player->bEnsure)
                            totalBots++;
                        else totalEnemies++;
                        FVector   Head = GetBoneLocationByName(Player, "Head");
                        Head.Z += 12.5f;
                        FVector Root = GetBoneLocationByName(Player, "Root");
                        headp = GetBoneLocationByName(Player, "Head");
                        
                        bool IsVisible = localPlayerController->LineOfSightTo(Player, {0,0,0}, true);
                        
                        if(IsVisible) {
                            if(Player->bEnsure){
                                //white color
                                visCol.R = 0.f;
                                visCol.G = 0.5f;
                                visCol.B = 0.f;
                                visCol.A = 1.f;
                            }else if(Player->Health == 0.0f){
                                //drak green if knock down and visible
                                visCol.R = 0.0f;
                                visCol.G = 0.3f;
                                visCol.B = 0.0f;
                                visCol.A = 1.0f;
                            }else{
                                //green
                                visCol.R = 0.f;
                                visCol.G = 0.5f;
                                visCol.B = 0.f;
                                visCol.A = 1.f;
                            }
                        }else if (Player->bEnsure){
                            //gray R G B A
                            //    FLinearColor Gray = { 0.501960814f, 0.501960814f, 0.501960814f, 1.000000000f };
                            visCol.R = 0.435294117f;
                            visCol.G = 0.501960814f;
                            visCol.B = 0.501960814f;
                            visCol.A = 1.000000000f;
                            // if knocked down player color
                        }else if(Player->Health == 0.0f){
                            //drak++ red if knocked down and not visible
                            visCol.R = 0.549019607f;
                            visCol.G = 0.039215686f;
                            visCol.B = 0.050980392f;
                            visCol.A = 1.0f;
                        }else{
                            //red
                            visCol.R = 1.f;
                            visCol.G = 0.f;
                            visCol.B = 0.f;
                            visCol.A = 1.f;
                        }
                        if (Player->IsInvincible)
                        {
                            //yallow
                            visCol.R = 1.f;
                            visCol.G = 1.f;
                            visCol.B = 0.f;
                            visCol.A = 1.f;
                        }
                        
                        
                        
                        //---- draw bone/SKELETON -----------
                        if(IsBone)
                        {
                            FName BoneID[18] = {"Head","neck_01", "spine_03", "spine_02", "spine_01", "pelvis","upperarm_r", "lowerarm_r", "hand_r","upperarm_l", "lowerarm_l", "hand_l","thigh_r", "calf_r", "foot_r","thigh_l", "calf_l", "foot_l"}; // 玩家骨骼名称数组
                            
                            FVector2D Bones[18]; // 保存骨骼在屏幕上的位置的向量数组
                            bool IsVisBone[18];
                            for (int i = 0; i < 18; i++) {
                                
                                FVector BoneID_0 = GetBoneLocationByName(Player, BoneID[i]);
                                
                                gGameplayStatics->ProjectWorldToScreen(localPlayerController,BoneID_0, false, &Bones[i]);
                                
                                IsVisBone[i] = localPlayerController->LineOfSightTo(localPlayerController->PlayerCameraManager,BoneID_0, false);
                            }
                            //Vẽ Xương
                            if (Player->bEnsure)
                                //Xương bot
                            {
                                DrawLine(HUD,Bones[0], Bones[1], EspSktonThik, IsVisBone[0] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[1], Bones[2], EspSktonThik, IsVisBone[1] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[2], Bones[3], EspSktonThik, IsVisBone[2] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[3], Bones[4], EspSktonThik, IsVisBone[3] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[4], Bones[5], EspSktonThik, IsVisBone[4] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[1], Bones[6], EspSktonThik, IsVisBone[1] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[6], Bones[7], EspSktonThik, IsVisBone[6] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[7], Bones[8], EspSktonThik, IsVisBone[7] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));
                                
                                
                                DrawLine(HUD,Bones[1], Bones[9], EspSktonThik, IsVisBone[1] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[9], Bones[10], EspSktonThik, IsVisBone[9] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[10], Bones[11], EspSktonThik, IsVisBone[10] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                
                                
                                DrawLine(HUD,Bones[5], Bones[12], EspSktonThik, IsVisBone[5] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[12], Bones[13], EspSktonThik, IsVisBone[12] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[13], Bones[14], EspSktonThik, IsVisBone[13] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                
                                DrawLine(HUD,Bones[5], Bones[15], EspSktonThik, IsVisBone[5] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[15], Bones[16], EspSktonThik, IsVisBone[15] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[16], Bones[17], EspSktonThik, IsVisBone[16] ? FLinearColor(0.f, 1.f, 1.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 1.f));//EspSktonThik
                            }else{
                                
                                //Xương Player
                                DrawLine(HUD,Bones[0], Bones[1], EspSktonThik, IsVisBone[0] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[1], Bones[2], EspSktonThik, IsVisBone[1] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[2], Bones[3], EspSktonThik, IsVisBone[2] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[3], Bones[4], EspSktonThik, IsVisBone[3] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[4], Bones[5], EspSktonThik, IsVisBone[4] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                
                                DrawLine(HUD,Bones[1], Bones[6], EspSktonThik, IsVisBone[1] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[6], Bones[7], EspSktonThik, IsVisBone[6] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[7], Bones[8], EspSktonThik, IsVisBone[7] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));
                                
                                
                                DrawLine(HUD,Bones[1], Bones[9], EspSktonThik, IsVisBone[1] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[9], Bones[10], EspSktonThik, IsVisBone[9] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[10], Bones[11], EspSktonThik, IsVisBone[10] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                
                                
                                DrawLine(HUD,Bones[5], Bones[12], EspSktonThik, IsVisBone[5] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[12], Bones[13], EspSktonThik, IsVisBone[12] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[13], Bones[14], EspSktonThik, IsVisBone[13] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                
                                DrawLine(HUD,Bones[5], Bones[15], EspSktonThik, IsVisBone[5] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[15], Bones[16], EspSktonThik, IsVisBone[15] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                                DrawLine(HUD,Bones[16], Bones[17], EspSktonThik, IsVisBone[16] ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f));//EspSktonThik
                            }
                            
                        }
                        
                        //ipadview
                        if (ipadview){
                            localPlayer->ThirdPersonCameraComponent->SetFieldOfView(dorong);
                        }
                        //IsJump
                        if(IsJump){
                            localPlayer->CharacterMovement->GravityScale = (int) -15;
                            localPlayer->CharacterMovement->JumpZVelocity = 10.f;
                            localPlayer->CharacterMovement->JumpOffJumpZFactor = 10.f;
                        }
                        if(AUOTJUMPAN){
                            localPlayer->Jump();
                        }
                        
                        //show players weapon name --------------
                        
                        
                        
                        if(!localPlayer->IsUsingGrenade()) {
                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int) propSlot.GetValue() >= 1 &&
                                    (int) propSlot.GetValue() <= 3) {
                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                    if (CurrentWeaponReplicated) {
                                        auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                                        auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                                        
                                        if (ShootWeaponEntityComp && ShootWeaponEffectComp)
                                        {
                                            
                                            //-----------------------------------MEMORY-----------------------------------------------//
                                            
                                            
                                            if (tamnho) {
                                                auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                                                if (WeaponManagerComponent) {
                                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                                    if (CurrentWeaponReplicated) {
                                                        auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                                                        auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                                                        if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                                            if (tamnho) {
                                                                ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                                            }
                                                            
                                                        }
                                                    }
                                                }
                                            }
                                            
                                            if(IsCrossHair){
                                                memset(&ShootWeaponEntityComp->DeviationInfo, 0, sizeof(FSDeviation));
                                                ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                                ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                                ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;
                                                ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                                ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;
                                                ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                                ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                                ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                                ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;
                                            }
                                            if(IsHitXPL){
                                                ShootWeaponEntityComp->ExtraHitPerformScale = 100;
                                                ShootWeaponEntityComp->  HUDAlphaDecreaseSpeedScale = 1.f;
                                            }
                                            if(IsNocamerashake) {
                                                ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                                ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                                ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                            }
                                            if(IsNorecoil){
                                                {
                                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;
                                                }
                                            }
                                            if(IsFastshoot){
                                                ShootWeaponEntityComp->ShootInterval =0.060606f;
                                            }
                                            if(IsFastBullet) {
                                                ShootWeaponEntityComp->BulletFireSpeed = 80000.f;
                                            }
                                            
                                            if (xoay360) {
                                                if(localPlayer->bIsGunADS) {localPlayer->MeshContainer->RelativeRotation = { 0,360,0 };
                                                }else{
                                                    USceneComponent* MeshContainer = localPlayer->MeshContainer;
                                                    MeshContainer->RelativeRotation = { 0,DanceValue ,0 };
                                                    DanceValue += DancerValue;
                                                    if (DanceValue >= 360.0f)
                                                        DanceValue = 0.0f;
                                                    DanceValue += (spinspeed);
                                                }
                                            }
                                            
                                            
                                            if (modsungto) {
                                                float WeaponScaleChanger = 2;
                                                localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->RootComponent->RelativeScale3D.Y = WeaponScaleChanger;
                                                localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->RootComponent->RelativeScale3D.Z = WeaponScaleChanger;
                                                localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->RootComponent->RelativeScale3D.X = WeaponScaleChanger;
                                            }
                                            
                                            
                                            
                                            
                                            if (GodMode){
                                                APawn* Pawn = GetFullWorld()->NetDriver->ServerConnection->PlayerController->K2_GetPawn();
                                                if ( Pawn != NULL )
                                                {
                                                    if ( Pawn->bCanBeDamaged )
                                                    {
                                                        Pawn->bCanBeDamaged = false;
                                                    }
                                                    else
                                                    {
                                                        Pawn->bCanBeDamaged = true;
                                                    }
                                                }
                                                else
                                                {
                                                    NSLog(@"No APawn* possessed");
                                                }
                                            }
                                            
                                            if (IsFly) {
                                                UCharacterMovementComponent* CharacterMovement = g_LocalPlayer->CharacterMovement;
                                                if (CharacterMovement) {
                                                    CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying,1);
                                                    FVector NewLocation = g_LocalPlayer->K2_GetActorLocation();
                                                    NewLocation.Z += 1000.0f; // Adjust height as needed
                                                    CharacterMovement->GravityScale = 0.0f;
                                                    g_LocalPlayer->K2_SetActorLocation(NewLocation,0, false,nullptr);
                                                }else {
                                                    CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking,1);
                                                    CharacterMovement->GravityScale = 1.0f;
                                                }
                                            }
                                            
                                        }
                                    }
                                    
                                    
                                }
                                
                            }
                        }
                    
                
                    
                
                        //-----------------------------------MEMORY END------------------------------------//
                        
                        
                        
                        
                        
                        
                        // ------------------------- VẼ ESP STYLE -------------------------------//
                        
                        // -------------------------MÁU HEALTH ESP STYLE 1 -------------------------------
                        FVector2D HeadSc, RootSc;
                        if (gGameplayStatics->ProjectWorldToScreen(localPlayerController, Head, false, &HeadSc) && gGameplayStatics->ProjectWorldToScreen(localPlayerController, Root, false, &RootSc)){
                            //đường kẻ
                            if(DrawPlayerLine){
                                DrawLine(HUD, {(float)ScreenWidth / 2, 30}, {HeadSc.X , HeadSc.Y - 50}, 1.0f, visCol);
                            }
                            
                            if(Styleesp == 0){
                                if (Is3Dbox) {
                                    float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                    float boxWidth = boxHeight * 0.65f;
                                    FVector2D vBox = FVector2D(HeadSc.X - (boxWidth / 2), HeadSc.Y);
                                    Box4Line(HUD, 1.5f, vBox.X, vBox.Y, boxWidth, boxHeight, visCol);
                                }
                                // HP style 1
                                
                                if (IsPlayerHP) {
                                    float CurHP = std::max(0.f, std::min(Player->Health, Player->HealthMax));
                                    float MaxHP = Player->HealthMax;
                                    
                                    FLinearColor ColorHP = {
                                        std::min(((510.f * (MaxHP - CurHP)) / MaxHP) / 255.f, 1.f),
                                        std::min(((510.f * CurHP) / MaxHP) / 255.f, 1.f),
                                        0.f,
                                        0.5f
                                    };
                                    
                                    if (CurHP == 0 && !Player->bDead) {
                                        ColorHP = {0.63f, 0.82f, 0.42f, 0.75f};
                                        
                                        CurHP = Player->NearDeathBreath;
                                        USTCharacterNearDeathComp *NearDeatchComponent = Player->NearDeatchComponent;
                                        if (NearDeatchComponent) {
                                            MaxHP = NearDeatchComponent->BreathMax;
                                        }
                                    }
                                    auto mWidthScale = std::min(0.1f * Distance, 35.f);
                                    
                                    auto mWidth = 160.f - mWidthScale;
                                    auto mHeight = mWidth * 0.15f;
                                    
                                    auto mHeighthp = mWidth * 0.05f;
                                    
                                    
                                    
                                    HeadSc.X -= (mWidth / 2);
                                    HeadSc.Y -= (mHeight * 1.55f);
                                    // vẽ khung Tên
                                    DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y},  mWidth , mHeight, COLOR_BLACKHP);
                                    if (Player->Health <= 1.0f && !Player->bDead) {
                                        
                                        //thanh máu
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 9}, (CurHP * mWidth / MaxHP), mHeighthp, COLOR_YELLOWHP);
                                        // vẽ khung máu
                                        DrawRectangle(HUD, {HeadSc.X, HeadSc.Y - 10}, mWidth, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                        DrawRectangle(HUD, {HeadSc.X+40, HeadSc.Y - 10 }, mWidth-40, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                        DrawRectangle(HUD, {HeadSc.X+80, HeadSc.Y - 10}, mWidth-80, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                        DrawRectangle(HUD, {HeadSc.X+120, HeadSc.Y - 10}, mWidth-120, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                        
                                        
                                    }else{
                                        //thanh máu
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 9}, (CurHP * mWidth / MaxHP), mHeighthp, visCol);
                                        // vẽ khung máu
                                        DrawRectangle(HUD, {HeadSc.X, HeadSc.Y - 10}, mWidth, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                        DrawRectangle(HUD, {HeadSc.X+40, HeadSc.Y - 10 }, mWidth-40, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                        DrawRectangle(HUD, {HeadSc.X+80, HeadSc.Y - 10}, mWidth-80, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                        DrawRectangle(HUD, {HeadSc.X+120, HeadSc.Y - 10}, mWidth-120, mHeighthp, 1.4f, {0, 0, 0, 0.6});
                                    }}
                                
                                
                                if (IsPLayerName)
                                {
                                    
                                    std::wstring ws;
                                    
                                    if (Player->bEnsure)
                                        ws = L"BOT";
                                    else if (Player->PlayerName.IsValid())
                                        ws = Player->PlayerName.ToWString();
                                    
                                    tslFont->LegacyFontSize = max(10, 13 - (int)(Distance / 90));
                                    float txtWidth, txtHeight;
                                    
                                    HUD->GetTextSize(Player->PlayerName, tslFont, 1.f, &txtWidth, &txtHeight);
                                    DrawText(HUD, ws, FVector2D(HeadSc.X + 70 , HeadSc.Y + 2 +( txtHeight * 0.5f)), COLOR_WHITE, true);
                                    
                                }
                                if (iSPLAYERDIS){
                                    
                                    std::wstring ws;
                                    std::wstring teamid;
                                    
                                    ws += L"[" + std::to_wstring((int) Distance)+L"M]";
                                    
                                    teamid = L"[" + std::to_wstring(Player->TeamID)+L"]" ;
                                    tslFont->LegacyFontSize = max(10, 13 - (int)(Distance / 90));
                                    float txtWidth, txtHeight;
                                    HUD->GetTextSize(Player->PlayerName, tslFont, 1.f, &txtWidth, &txtHeight);
                                    
                                    DrawOutlinedText(HUD, ws, FVector2D(HeadSc.X + 120  , HeadSc.Y - 30 + ( txtHeight * 0.5f )), COLOR_YELLOW, COLOR_BLACK, true);
                                    DrawOutlinedText(HUD, teamid, FVector2D(HeadSc.X + 20  , HeadSc.Y - 30 + (txtHeight * 0.5f )), COLOR_GREEN, COLOR_BLACK, true);
                                    
                                    
                                }
                                
                                
                                if(IsPlayerWEP){
                                    
                                    std::wstring wep;
                                    
                                    std::wstring ws;
                                    auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                    if (WeaponManagerComponent) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                            //     int CurBullet = CurrentWeaponReplicated->GetCurrentBulletNumInClip();
                                            //弹夹最大子弹
                                            //     int MaxBullet = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
                                            
                                            auto wppp = CurrentWeaponReplicated->GetWeaponID();
                                            
                                            switch (wppp) {
                                                    // Rifle
                                                case 101001:
                                                    wep = std::wstring(L" AKM ");
                                                    break;
                                                case 101002:
                                                    wep = std::wstring(L" M16A4 ");
                                                    break;
                                                case 101003:
                                                    wep = std::wstring(L" SCAR-L ");
                                                    break;
                                                case 101004:
                                                    wep = std::wstring(L" M416 ");
                                                    break;
                                                case 101005:
                                                    wep = std::wstring(L" Groza ");
                                                    break;
                                                case 101006:
                                                    wep = std::wstring(L" AUG ");
                                                    break;
                                                case 101007:
                                                    wep = std::wstring(L"QBZ  ");
                                                    break;
                                                case 101008:
                                                    wep = std::wstring(L"M762  ");
                                                    break;
                                                case 101009:
                                                    wep = std::wstring(L"Mk47  ");
                                                    break;
                                                case 101010:
                                                    wep = std::wstring(L"G36C  ");
                                                    break;
                                                case 101100:
                                                    wep = std::wstring(L"FAMAS  ");
                                                    break;
                                                case 101102:
                                                    wep = std::wstring(L"ACE32  ");
                                                    break;
                                                case 101012:
                                                    
                                                    wep = std::wstring(L"HoneyBadger ");
                                                    break;
                                                    //LIGHT MACHINEGUN
                                                case 105001:
                                                    wep = std::wstring(L"M249 ");
                                                    break;
                                                case 105002:
                                                    wep = std::wstring(L"DP-28 ");
                                                    break;
                                                case 105010:
                                                    wep = std::wstring(L"MG3 ");
                                                    break;
                                                    
                                                    
                                                    //SMG
                                                case 102001:
                                                    wep = std::wstring(L"UZI ");
                                                    break;
                                                case 102002:
                                                    wep = std::wstring(L"UMP45 ");
                                                    break;
                                                case 102003:
                                                    wep = std::wstring(L"Vector ");
                                                    break;
                                                case 102004:
                                                    wep = std::wstring(L"TommyGun ");
                                                    break;
                                                case 102005:
                                                    wep = std::wstring(L"Bizon ");
                                                    break;
                                                case 102007:
                                                    wep = std::wstring(L"MP5K ");
                                                    break;
                                                case 102105:
                                                    wep = std::wstring(L"P90  ");
                                                    break;
                                                    
                                                    
                                                    //SNIPER
                                                case 103001:
                                                    wep = std::wstring(L"Kar98K ");
                                                    break;
                                                case 103002:
                                                    wep = std::wstring(L"M24  ");
                                                    break;
                                                case 103003:
                                                    wep = std::wstring(L" AWM ");
                                                    break;
                                                case 103012:
                                                    wep = std::wstring(L" AMR ");
                                                    break;
                                                case 103004:
                                                    wep = std::wstring(L" SKS ");
                                                    break;
                                                case 103005:
                                                    wep = std::wstring(L" VSS ");
                                                    break;
                                                case 103006:
                                                    wep = std::wstring(L"Mini14 ");
                                                    break;
                                                case 103007:
                                                    wep = std::wstring(L" Mk14 ");
                                                    break;
                                                case 103008:
                                                    wep = std::wstring(L" Win94 ");
                                                    break;
                                                case 103009:
                                                    wep = std::wstring(L" SLR ");
                                                    break;
                                                case 103010:
                                                    wep = std::wstring(L" QBU ");
                                                    break;
                                                case 103011:
                                                    wep = std::wstring(L"Mosin ");
                                                    break;
                                                    
                                                    
                                                    
                                                case 103100:
                                                    wep = std::wstring(L" Mk12 ");
                                                    break;
                                                    
                                                    //SHOTGUN
                                                case 104001:
                                                    wep = std::wstring(L" S686 ");
                                                    break;
                                                case 104002:
                                                    wep = std::wstring(L" S1897 ");
                                                    break;
                                                case 104003:
                                                    wep = std::wstring(L" S12K ");
                                                    break;
                                                case 104101:
                                                    wep = std::wstring(L" M1014 ");
                                                    break;
                                                case 106006:
                                                    wep = std::wstring(L" Sawed-off ");
                                                    break;
                                                case 104102:
                                                    wep = std::wstring(L" NS2000 ");
                                                    break;
                                                case 104004:
                                                    wep = std::wstring(L" DBS ");
                                                    break;
                                                    
                                                    //POSTIL
                                                case 106001:
                                                    wep = std::wstring(L" P1911 ");
                                                    break;
                                                case 106003:
                                                    wep = std::wstring(L" R1895 ");
                                                    break;
                                                case 106004:
                                                    wep = std::wstring(L" P18C ");
                                                    break;
                                                case 106005:
                                                    wep = std::wstring(L" R45 ");
                                                    break;
                                                case 106008:
                                                    wep = std::wstring(L" Vz61 ");
                                                    break;
                                                case 106010:
                                                    wep = std::wstring(L" Desert Eagle ");
                                                    break;
                                                    
                                                    
                                                    //OTHER
                                                case 107001:
                                                    if(AR_language == 1){
                                                        wep= std::wstring(L" Nỏ Thần ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Crossbow ");
                                                    }
                                                    break;
                                                case 108000:
                                                    wep = std::wstring(L" NULL ");
                                                    break;
                                                case 108001:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Dao Dựa ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Machete ");
                                                    }
                                                    
                                                    break;
                                                case 108002:
                                                    wep = std::wstring(L" Crowbar ");
                                                    break;
                                                case 108003:
                                                    wep = std::wstring(L" Sickle ");
                                                    break;
                                                case 108004:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Chảo ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Pan ");
                                                    }
                                                    break;
                                                case 108005:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Dao găm ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Knife ");
                                                    }
                                                    break;
                                                case 201001:
                                                    if(AR_language == 1){
                                                        wep = std::wstring(L" Liềm ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep = std::wstring(L" Choke ");
                                                    }
                                                    break;
                                                case 108023:
                                                    wep = std::wstring(L" Mele Weapon ");
                                                    break;
                                                    
                                                default:
                                                    break;
                                                    
                                            }
                                            //      if (CurBullet > 0 && CurBullet <= MaxBullet && MaxBullet <= 150) {
                                            //          wep += to_wstring(CurBullet) + L"/" + to_wstring(MaxBullet);
                                            
                                            //     }
                                        }
                                    }
                                    tslFont->LegacyFontSize = max(8, 12 - (int)(Distance / 90));
                                    float txtWidth, txtHeight;
                                    
                                    HUD->GetTextSize(FString(wep), tslFont, 1.f, &txtWidth, &txtHeight);
                                    DrawOutlineditem(HUD, wep, FVector2D(HeadSc.X + 70 , HeadSc.Y + 25 + ( txtHeight * 0.5f)), COLOR_BLUE, COLOR_BLACK, true);
                                }
                            }
                            if(Styleesp == 1){
                                // ------------------------- STYLE 2-------------------------------
                                if (Is3Dbox) {
                                    if(Distance <120){
                                        auto BoxBounds = Player->Mesh->CachedLocalBounds;
                                        FVector Chest = Player->K2_GetActorLocation();
                                        DrawBox3D(HUD,Player, visCol, Chest, BoxBounds.BoxExtent);
                                    }
                                }
                                
                                if(IsPlayerHP){
                                    float CurHP = std::max(0.f, std::min(Player->Health, Player->HealthMax));
                                    float MaxHP = Player->HealthMax;
                                    
                                    FLinearColor ColorHP = {
                                        std::min(((510.f * (MaxHP - CurHP)) / MaxHP) / 255.f, 1.f),
                                        std::min(((510.f * CurHP) / MaxHP) / 255.f, 1.f),
                                        0.f,
                                        0.5f
                                    };
                                    
                                    if (CurHP == 0 && !Player->bDead) {
                                        ColorHP = {0.63f, 0.82f, 0.42f, 0.75f};
                                        
                                        CurHP = Player->NearDeathBreath;
                                        USTCharacterNearDeathComp *NearDeatchComponent = Player->NearDeatchComponent;
                                        if (NearDeatchComponent) {
                                            MaxHP = NearDeatchComponent->BreathMax;
                                        }
                                    }
                                    
                                    
                                    
                                    auto mWidthScale = std::min(0.1f * Distance, 35.f);
                                    
                                    auto mWidth = 170.f - mWidthScale;
                                    auto mHeight = mWidth * 0.17f;
                                    
                                    HeadSc.X -= (mWidth / 2);
                                    HeadSc.Y -= (mHeight * 1.55f);
                                    if (Player->Health <= 1.0f && !Player->bDead) {
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y}, (CurHP * mWidth / MaxHP), mHeight, COLOR_YELLOWHP);
                                        
                                    }else{
                                        if(Player->bEnsure){
                                            DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y}, (CurHP * mWidth / MaxHP), mHeight, COLOR_GREENHP);
                                            
                                        }else{
                                            DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y}, (CurHP * mWidth / MaxHP), mHeight, COLOR_REDHP);
                                            
                                        }
                                    }}
                                
                                
                                // ------------------------- Tên style 2 -------------------------------
                                if(IsPLayerName){
                                    
                                    std::wstring ws;
                                    
                                    if (Player->bEnsure)
                                        ws = L"[BOT]";
                                    else if (Player->PlayerName.IsValid())
                                        ws = Player->PlayerName.ToWString();
                                    
                                    tslFont->LegacyFontSize = max(10, 14 - (int)(Distance / 90));
                                    float txtWidth, txtHeight;
                                    
                                    HUD->GetTextSize(Player->PlayerName, tslFont, 1.f, &txtWidth, &txtHeight);
                                    DrawOutlinedText(HUD, ws, FVector2D(HeadSc.X + 70 , HeadSc.Y + 5 +( txtHeight * 0.5f)), COLOR_WHITE, COLOR_BLACK, true);
                                    
                                }
                                
                                
                                
                                //Khoảng cách 2
                                
                                if(iSPLAYERDIS){
                                    
                                    std::wstring ws;
                                    std::wstring teamid;
                                    
                                    ws += L"[" + std::to_wstring((int) Distance)+L"M]";
                                    
                                    teamid = L"[" + std::to_wstring(Player->TeamID)+L"]" ;
                                    tslFont->LegacyFontSize = max(10, 13 - (int)(Distance / 90));
                                    float txtWidth, txtHeight;
                                    HUD->GetTextSize(Player->PlayerName, tslFont, 1.f, &txtWidth, &txtHeight);
                                    
                                    DrawOutlinedText(HUD, ws, FVector2D(HeadSc.X + 120  , HeadSc.Y - 20 + ( txtHeight * 0.5f )), COLOR_YELLOW, COLOR_BLACK, true);
                                    DrawOutlinedText(HUD, teamid, FVector2D(HeadSc.X + 20  , HeadSc.Y - 20 + (txtHeight * 0.5f )), COLOR_GREEN, COLOR_BLACK, true);
                                    
                                    
                                }
                                //-------------Wepon style 2
                                
                                if(IsPlayerWEP){
                                    
                                    std::wstring wep;
                                    
                                    std::wstring ws;
                                    auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                    if (WeaponManagerComponent) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                            //     int CurBullet = CurrentWeaponReplicated->GetCurrentBulletNumInClip();
                                            //弹夹最大子弹
                                            //     int MaxBullet = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
                                            
                                            auto wppp = CurrentWeaponReplicated->GetWeaponID();
                                            
                                            switch (wppp) {
                                                    // Rifle
                                                case 101001:
                                                    wep = std::wstring(L" AKM ");
                                                    break;
                                                case 101002:
                                                    wep = std::wstring(L" M16A4 ");
                                                    break;
                                                case 101003:
                                                    wep = std::wstring(L" SCAR-L ");
                                                    break;
                                                case 101004:
                                                    wep = std::wstring(L" M416 ");
                                                    break;
                                                case 101005:
                                                    wep = std::wstring(L" Groza ");
                                                    break;
                                                case 101006:
                                                    wep = std::wstring(L" AUG ");
                                                    break;
                                                case 101007:
                                                    wep = std::wstring(L"QBZ  ");
                                                    break;
                                                case 101008:
                                                    wep = std::wstring(L"M762  ");
                                                    break;
                                                case 101009:
                                                    wep = std::wstring(L"Mk47  ");
                                                    break;
                                                case 101010:
                                                    wep = std::wstring(L"G36C  ");
                                                    break;
                                                case 101100:
                                                    wep = std::wstring(L"FAMAS  ");
                                                    break;
                                                case 101102:
                                                    wep = std::wstring(L"ACE32  ");
                                                    break;
                                                case 101012:
                                                    
                                                    wep = std::wstring(L"HoneyBadger ");
                                                    break;
                                                    //LIGHT MACHINEGUN
                                                case 105001:
                                                    wep = std::wstring(L"M249 ");
                                                    break;
                                                case 105002:
                                                    wep = std::wstring(L"DP-28 ");
                                                    break;
                                                case 105010:
                                                    wep = std::wstring(L"MG3 ");
                                                    break;
                                                    
                                                    
                                                    //SMG
                                                case 102001:
                                                    wep = std::wstring(L"UZI ");
                                                    break;
                                                case 102002:
                                                    wep = std::wstring(L"UMP45 ");
                                                    break;
                                                case 102003:
                                                    wep = std::wstring(L"Vector ");
                                                    break;
                                                case 102004:
                                                    wep = std::wstring(L"TommyGun ");
                                                    break;
                                                case 102005:
                                                    wep = std::wstring(L"Bizon ");
                                                    break;
                                                case 102007:
                                                    wep = std::wstring(L"MP5K ");
                                                    break;
                                                case 102105:
                                                    wep = std::wstring(L"P90  ");
                                                    break;
                                                    
                                                    
                                                    //SNIPER
                                                case 103001:
                                                    wep = std::wstring(L"Kar98K ");
                                                    break;
                                                case 103002:
                                                    wep = std::wstring(L"M24  ");
                                                    break;
                                                case 103003:
                                                    wep = std::wstring(L" AWM ");
                                                    break;
                                                case 103012:
                                                    wep = std::wstring(L" AMR ");
                                                    break;
                                                case 103004:
                                                    wep = std::wstring(L" SKS ");
                                                    break;
                                                case 103005:
                                                    wep = std::wstring(L" VSS ");
                                                    break;
                                                case 103006:
                                                    wep = std::wstring(L"Mini14 ");
                                                    break;
                                                case 103007:
                                                    wep = std::wstring(L" Mk14 ");
                                                    break;
                                                case 103008:
                                                    wep = std::wstring(L" Win94 ");
                                                    break;
                                                case 103009:
                                                    wep = std::wstring(L" SLR ");
                                                    break;
                                                case 103010:
                                                    wep = std::wstring(L" QBU ");
                                                    break;
                                                case 103011:
                                                    wep = std::wstring(L"Mosin ");
                                                    break;
                                                    
                                                    
                                                    
                                                case 103100:
                                                    wep = std::wstring(L" Mk12 ");
                                                    break;
                                                    
                                                    //SHOTGUN
                                                case 104001:
                                                    wep = std::wstring(L" S686 ");
                                                    break;
                                                case 104002:
                                                    wep = std::wstring(L" S1897 ");
                                                    break;
                                                case 104003:
                                                    wep = std::wstring(L" S12K ");
                                                    break;
                                                case 104101:
                                                    wep = std::wstring(L" M1014 ");
                                                    break;
                                                case 106006:
                                                    wep = std::wstring(L" Sawed-off ");
                                                    break;
                                                case 104102:
                                                    wep = std::wstring(L" NS2000 ");
                                                    break;
                                                case 104004:
                                                    wep = std::wstring(L" DBS ");
                                                    break;
                                                    
                                                    //POSTIL
                                                case 106001:
                                                    wep = std::wstring(L" P1911 ");
                                                    break;
                                                case 106003:
                                                    wep = std::wstring(L" R1895 ");
                                                    break;
                                                case 106004:
                                                    wep = std::wstring(L" P18C ");
                                                    break;
                                                case 106005:
                                                    wep = std::wstring(L" R45 ");
                                                    break;
                                                case 106008:
                                                    wep = std::wstring(L" Vz61 ");
                                                    break;
                                                case 106010:
                                                    wep = std::wstring(L" Desert Eagle ");
                                                    break;
                                                    
                                                    
                                                    //OTHER
                                                case 107001:
                                                    if(AR_language == 1){
                                                        wep= std::wstring(L" Nỏ Thần ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Crossbow ");
                                                    }
                                                    break;
                                                case 108000:
                                                    wep = std::wstring(L" NULL ");
                                                    break;
                                                case 108001:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Dao Dựa ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Machete ");
                                                    }
                                                    
                                                    break;
                                                case 108002:
                                                    wep = std::wstring(L" Crowbar ");
                                                    break;
                                                case 108003:
                                                    wep = std::wstring(L" Sickle ");
                                                    break;
                                                case 108004:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Chảo ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Pan ");
                                                    }
                                                    break;
                                                case 108005:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Dao găm ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Knife ");
                                                    }
                                                    break;
                                                case 201001:
                                                    if(AR_language == 1){
                                                        wep = std::wstring(L" Liềm ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep = std::wstring(L" Choke ");
                                                    }
                                                    break;
                                                case 108023:
                                                    wep = std::wstring(L" Mele Weapon ");
                                                    break;
                                                    
                                                default:
                                                    break;
                                                    
                                            }
                                            //      if (CurBullet > 0 && CurBullet <= MaxBullet && MaxBullet <= 150) {
                                            //          wep += to_wstring(CurBullet) + L"/" + to_wstring(MaxBullet);
                                            
                                            //     }
                                        }
                                    }
                                    tslFont->LegacyFontSize = max(8, 12 - (int)(Distance / 90));
                                    float txtWidth, txtHeight;
                                    
                                    HUD->GetTextSize(FString(wep), tslFont, 1.f, &txtWidth, &txtHeight);
                                    DrawOutlineditem(HUD, wep, FVector2D(HeadSc.X + 70 , HeadSc.Y + 25 + ( txtHeight * 0.5f)), COLOR_BLUE, COLOR_BLACK, true);
                                }
                                
                            }
                            
                            
                            
                            
                            //========+STYLE 3==============---------------------------
                            
                            if(Styleesp == 2){
                                
                                if (Is3Dbox) {
                                    
                                    float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                    float boxWidth = boxHeight * 0.65f;
                                    FVector2D vBox = FVector2D(HeadSc.X - (boxWidth / 2), HeadSc.Y);
                                    Box4Line(HUD, 1.5f, vBox.X, vBox.Y, boxWidth, boxHeight, COLOR_WHITE);
                                }
                                
                                
                                if (IsPlayerHP) {
                                    int CurHP = (int)std::max(0, std::min((int)Player->Health, (int)Player->HealthMax));
                                    int MaxHP = (int)Player->HealthMax;
                                    
                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                        }
                                    }
                                    
                                    float boxHeight = fabsf(RootSc.Y - HeadSc.Y);
                                    float boxWidth = boxHeight * 0.58;
                                    Rect2 PlayerRect(HeadSc.X - (boxWidth / 2), HeadSc.Y + boxHeight, boxWidth, boxHeight);
                                    
                                    drawVerticalHealthBar(HUD,Vector2(PlayerRect.x + PlayerRect.width, PlayerRect.y), -boxHeight, MaxHP, CurHP);
                                }
                                
                                
                                if (IsPLayerName)
                                {
                                    
                                    std::wstring ws;
                                    
                                    
                                    
                                    if (Player->bEnsure)
                                        ws = L"BOT";
                                    else if (Player->PlayerName.IsValid())
                                        ws = Player->PlayerName.ToWString();
                                    
                                    tslFont->LegacyFontSize = max(10, 15 - (int)(Distance / 90));
                                    float txtWidth, txtHeight;
                                    
                                    HUD->GetTextSize(Player->PlayerName, tslFont, 1.f, &txtWidth, &txtHeight);
                                    DrawOutlinedText(HUD, ws, FVector2D(HeadSc.X  , HeadSc.Y - 30 +( txtHeight * 0.5f)), COLOR_WHITE, COLOR_BLACK, true);
                                    
                                    
                                    
                                    
                                    
                                    if (IsPLayerName)
                                    {
                                        std::wstring teamid;
                                        
                                        
                                        teamid = L"[" + std::to_wstring(Player->TeamID)+L"]" ;
                                        
                                        tslFont->LegacyFontSize = max(10, 12 - (int)(Distance / 90));
                                        float txtWidth, txtHeight;
                                        
                                        HUD->GetTextSize(Player->PlayerName, tslFont, 1.f, &txtWidth, &txtHeight);
                                        DrawOutlinedText(HUD, teamid, FVector2D(HeadSc.X  , HeadSc.Y - 50 +( txtHeight * 0.5f)), COLOR_YELLOW, COLOR_BLACK, true);
                                        
                                        
                                    }
                                    
                                }
                                if (iSPLAYERDIS){
                                    
                                    std::wstring distance;
                                    distance = std::to_wstring((int) Distance) + L"[M]";
                                    tslFont->LegacyFontSize = 11.f;
                                    DrawOutlinedTextstyle2(HUD, FString(distance), FVector2D(RootSc.X - 1, (RootSc.Y + 18)), COLOR_WHITE, COLOR_BLACK, true);
                                    //DrawBorderString(ubu_0, 15, distance.c_str(), RootSc.x, (RootSc.y + 18), , true);
                                }
                                
                                
                                
                                
                                
                                if(IsPlayerWEP){
                                    
                                    std::wstring wep;
                                    
                                    std::wstring ws;
                                    auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                    if (WeaponManagerComponent) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                            //     int CurBullet = CurrentWeaponReplicated->GetCurrentBulletNumInClip();
                                            //弹夹最大子弹
                                            //     int MaxBullet = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
                                            
                                            auto wppp = CurrentWeaponReplicated->GetWeaponID();
                                            
                                            switch (wppp) {
                                                    // Rifle
                                                case 101001:
                                                    wep = std::wstring(L" AKM ");
                                                    break;
                                                case 101002:
                                                    wep = std::wstring(L" M16A4 ");
                                                    break;
                                                case 101003:
                                                    wep = std::wstring(L" SCAR-L ");
                                                    break;
                                                case 101004:
                                                    wep = std::wstring(L" M416 ");
                                                    break;
                                                case 101005:
                                                    wep = std::wstring(L" Groza ");
                                                    break;
                                                case 101006:
                                                    wep = std::wstring(L" AUG ");
                                                    break;
                                                case 101007:
                                                    wep = std::wstring(L"QBZ  ");
                                                    break;
                                                case 101008:
                                                    wep = std::wstring(L"M762  ");
                                                    break;
                                                case 101009:
                                                    wep = std::wstring(L"Mk47  ");
                                                    break;
                                                case 101010:
                                                    wep = std::wstring(L"G36C  ");
                                                    break;
                                                case 101100:
                                                    wep = std::wstring(L"FAMAS  ");
                                                    break;
                                                case 101102:
                                                    wep = std::wstring(L"ACE32  ");
                                                    break;
                                                case 101012:
                                                    
                                                    wep = std::wstring(L"HoneyBadger ");
                                                    break;
                                                    //LIGHT MACHINEGUN
                                                case 105001:
                                                    wep = std::wstring(L"M249 ");
                                                    break;
                                                case 105002:
                                                    wep = std::wstring(L"DP-28 ");
                                                    break;
                                                case 105010:
                                                    wep = std::wstring(L"MG3 ");
                                                    break;
                                                    
                                                    
                                                    //SMG
                                                case 102001:
                                                    wep = std::wstring(L"UZI ");
                                                    break;
                                                case 102002:
                                                    wep = std::wstring(L"UMP45 ");
                                                    break;
                                                case 102003:
                                                    wep = std::wstring(L"Vector ");
                                                    break;
                                                case 102004:
                                                    wep = std::wstring(L"TommyGun ");
                                                    break;
                                                case 102005:
                                                    wep = std::wstring(L"Bizon ");
                                                    break;
                                                case 102007:
                                                    wep = std::wstring(L"MP5K ");
                                                    break;
                                                case 102105:
                                                    wep = std::wstring(L"P90  ");
                                                    break;
                                                    
                                                    
                                                    //SNIPER
                                                case 103001:
                                                    wep = std::wstring(L"Kar98K ");
                                                    break;
                                                case 103002:
                                                    wep = std::wstring(L"M24  ");
                                                    break;
                                                case 103003:
                                                    wep = std::wstring(L" AWM ");
                                                    break;
                                                case 103012:
                                                    wep = std::wstring(L" AMR ");
                                                    break;
                                                case 103004:
                                                    wep = std::wstring(L" SKS ");
                                                    break;
                                                case 103005:
                                                    wep = std::wstring(L" VSS ");
                                                    break;
                                                case 103006:
                                                    wep = std::wstring(L"Mini14 ");
                                                    break;
                                                case 103007:
                                                    wep = std::wstring(L" Mk14 ");
                                                    break;
                                                case 103008:
                                                    wep = std::wstring(L" Win94 ");
                                                    break;
                                                case 103009:
                                                    wep = std::wstring(L" SLR ");
                                                    break;
                                                case 103010:
                                                    wep = std::wstring(L" QBU ");
                                                    break;
                                                case 103011:
                                                    wep = std::wstring(L"Mosin ");
                                                    break;
                                                    
                                                    
                                                    
                                                case 103100:
                                                    wep = std::wstring(L" Mk12 ");
                                                    break;
                                                    
                                                    //SHOTGUN
                                                case 104001:
                                                    wep = std::wstring(L" S686 ");
                                                    break;
                                                case 104002:
                                                    wep = std::wstring(L" S1897 ");
                                                    break;
                                                case 104003:
                                                    wep = std::wstring(L" S12K ");
                                                    break;
                                                case 104101:
                                                    wep = std::wstring(L" M1014 ");
                                                    break;
                                                case 106006:
                                                    wep = std::wstring(L" Sawed-off ");
                                                    break;
                                                case 104102:
                                                    wep = std::wstring(L" NS2000 ");
                                                    break;
                                                case 104004:
                                                    wep = std::wstring(L" DBS ");
                                                    break;
                                                    
                                                    //POSTIL
                                                case 106001:
                                                    wep = std::wstring(L" P1911 ");
                                                    break;
                                                case 106003:
                                                    wep = std::wstring(L" R1895 ");
                                                    break;
                                                case 106004:
                                                    wep = std::wstring(L" P18C ");
                                                    break;
                                                case 106005:
                                                    wep = std::wstring(L" R45 ");
                                                    break;
                                                case 106008:
                                                    wep = std::wstring(L" Vz61 ");
                                                    break;
                                                case 106010:
                                                    wep = std::wstring(L" Desert Eagle ");
                                                    break;
                                                    
                                                    
                                                    //OTHER
                                                case 107001:
                                                    if(AR_language == 1){
                                                        wep= std::wstring(L" Nỏ Thần ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Crossbow ");
                                                    }
                                                    break;
                                                case 108000:
                                                    wep = std::wstring(L" NULL ");
                                                    break;
                                                case 108001:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Dao Dựa ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Machete ");
                                                    }
                                                    
                                                    break;
                                                case 108002:
                                                    wep = std::wstring(L" Crowbar ");
                                                    break;
                                                case 108003:
                                                    wep = std::wstring(L" Sickle ");
                                                    break;
                                                case 108004:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Chảo ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Pan ");
                                                    }
                                                    break;
                                                case 108005:
                                                    if(AR_language == 1){
                                                        wep=std::wstring(L" Dao găm ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep=std::wstring(L" Knife ");
                                                    }
                                                    break;
                                                case 201001:
                                                    if(AR_language == 1){
                                                        wep = std::wstring(L" Liềm ");
                                                    }
                                                    if(AR_language == 0){
                                                        wep = std::wstring(L" Choke ");
                                                    }
                                                    break;
                                                case 108023:
                                                    wep = std::wstring(L" Mele Weapon ");
                                                    break;
                                                    
                                                default:
                                                    break;
                                                    
                                            }
                                            //      if (CurBullet > 0 && CurBullet <= MaxBullet && MaxBullet <= 150) {
                                            //          wep += to_wstring(CurBullet) + L"/" + to_wstring(MaxBullet);
                                            
                                            //     }
                                        }
                                    }
                                    tslFont->LegacyFontSize = max(5, 13 - (int)(Distance / 80));
                                    float txtWidth, txtHeight;
                                    
                                    HUD->GetTextSize(FString(wep), tslFont, 1.f, &txtWidth, &txtHeight);
                                    DrawOutlineditem(HUD, wep, FVector2D(HeadSc.X  , HeadSc.Y + 15 - txtHeight), COLOR_BLUE, COLOR_BLACK, true);
                                    
                                }
                            }
                            
                            
                            
                            if(Styleesp == 3){
                                
                                if (Is3Dbox) {
                                    
                                    float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                    float boxWidth = boxHeight * 0.65f;
                                    FVector2D vBox = FVector2D(HeadSc.X - (boxWidth / 2), HeadSc.Y);
                                    Box4Line(HUD, 1.5f, vBox.X, vBox.Y, boxWidth, boxHeight, COLOR_WHITE);
                                }
                                
                                
                                if (IsPlayerHP) {
                                    int CurHP = (int)std::max(0, std::min((int)Player->Health, (int)Player->HealthMax));
                                    int MaxHP = (int)Player->HealthMax;
                                    
                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                        }
                                    }
                                    
                                    //auto mWidthScale = std::min(0.1f * Distance, 35.f);
                                    auto mWidth = 158.0f;
                                    auto mHeight = 3.0f;
                                    HeadSc.X -= (mWidth / 2);
                                    HeadSc.Y -= (mHeight * 1.5f);
                                    
                                    DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 10}, (CurHP * mWidth / MaxHP), mHeight,{1.0f, 1.0f, 1.0f, 0.8f});
                                    
                                    
                                    if (Player->TeamID == 1 || Player->TeamID == 21 || Player->TeamID == 31 || Player->TeamID == 41 || Player->TeamID == 51 || Player->TeamID == 61 || Player->TeamID == 71 || Player->TeamID == 81 || Player->TeamID == 91 || Player->TeamID == 101 || Player->TeamID == 111 || Player->TeamID == 121 || Player->TeamID == 131 || Player->TeamID == 141 || Player->TeamID == 151 || Player->TeamID == 161 || Player->TeamID == 171 || Player->TeamID == 181 || Player->TeamID == 191 || Player->TeamID == 201 || Player->TeamID == 211){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.85f, 0.33f, 0.84f, 0.4f});
                                        
                                    } else if (Player->TeamID == 2 || Player->TeamID == 22 || Player->TeamID == 32 || Player->TeamID == 42 || Player->TeamID == 52 || Player->TeamID == 62 || Player->TeamID == 72 || Player->TeamID == 82 || Player->TeamID == 92 || Player->TeamID == 102 || Player->TeamID == 112 || Player->TeamID == 122 || Player->TeamID == 132 || Player->TeamID == 142 || Player->TeamID == 152 || Player->TeamID == 162 || Player->TeamID == 172 || Player->TeamID == 182 || Player->TeamID == 192 || Player->TeamID == 202 || Player->TeamID == 212){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.62f, 0.12f, 0.94f, 0.4f});
                                        
                                    } else if (Player->TeamID == 3 || Player->TeamID == 23 || Player->TeamID == 33 || Player->TeamID == 43 || Player->TeamID == 53 || Player->TeamID == 63 || Player->TeamID == 73 || Player->TeamID == 83 || Player->TeamID == 93 || Player->TeamID == 103 || Player->TeamID == 113 || Player->TeamID == 123 || Player->TeamID == 133 || Player->TeamID == 143 || Player->TeamID == 153 || Player->TeamID == 163 || Player->TeamID == 173 || Player->TeamID == 183 || Player->TeamID == 193 || Player->TeamID == 203 || Player->TeamID == 213){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.0f, 1.0f, 0.5f, 0.4f});
                                        
                                    } else if (Player->TeamID == 4 || Player->TeamID == 24 || Player->TeamID == 34 || Player->TeamID == 44 || Player->TeamID == 54 || Player->TeamID == 64 || Player->TeamID == 74 || Player->TeamID == 84 || Player->TeamID == 94 || Player->TeamID == 104 || Player->TeamID == 114 || Player->TeamID == 124 || Player->TeamID == 134 || Player->TeamID == 144 || Player->TeamID == 154 || Player->TeamID == 164 || Player->TeamID == 174 || Player->TeamID == 184 || Player->TeamID == 194 || Player->TeamID == 204 || Player->TeamID == 214){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.53f, 0.8f, 0.92f, 0.4f});
                                        
                                    } else if (Player->TeamID == 5 || Player->TeamID == 25 || Player->TeamID == 35 || Player->TeamID == 45 || Player->TeamID == 55 || Player->TeamID == 65 || Player->TeamID == 75 || Player->TeamID == 85 || Player->TeamID == 95 || Player->TeamID == 105 || Player->TeamID == 115 || Player->TeamID == 125 || Player->TeamID == 135 || Player->TeamID == 145 || Player->TeamID == 155 || Player->TeamID == 165 || Player->TeamID == 175 || Player->TeamID == 185 || Player->TeamID == 195 || Player->TeamID == 205 || Player->TeamID == 215){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.0f, 1.0f, 1.0f, 0.4f});
                                        
                                    } else if (Player->TeamID == 6 || Player->TeamID == 26 || Player->TeamID == 36 || Player->TeamID == 46 || Player->TeamID == 56 || Player->TeamID == 66 || Player->TeamID == 76 || Player->TeamID == 86 || Player->TeamID == 96 || Player->TeamID == 106 || Player->TeamID == 116 || Player->TeamID == 126 || Player->TeamID == 136 || Player->TeamID == 146 || Player->TeamID == 156 || Player->TeamID == 166 || Player->TeamID == 176 || Player->TeamID == 186 || Player->TeamID == 196 || Player->TeamID == 206 || Player->TeamID == 216){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.12f, 0.56f, 1.0f, 0.4f});
                                        
                                    } else if (Player->TeamID == 7 || Player->TeamID == 27 || Player->TeamID == 37 || Player->TeamID == 47 || Player->TeamID == 57 || Player->TeamID == 67 || Player->TeamID == 77 || Player->TeamID == 87 || Player->TeamID == 97 || Player->TeamID == 107 || Player->TeamID == 117 || Player->TeamID == 127 || Player->TeamID == 137 || Player->TeamID == 147 || Player->TeamID == 157 || Player->TeamID == 167 || Player->TeamID == 177 || Player->TeamID == 187 || Player->TeamID == 197 || Player->TeamID == 207 || Player->TeamID == 217){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {1.0f, 0.0f, 1.0f, 0.4f});
                                        
                                    } else if (Player->TeamID == 8 || Player->TeamID == 18 || Player->TeamID == 28 || Player->TeamID == 38 || Player->TeamID == 48 || Player->TeamID == 58 || Player->TeamID == 68 || Player->TeamID == 78 || Player->TeamID == 88 || Player->TeamID == 98 || Player->TeamID == 108 || Player->TeamID == 118 || Player->TeamID == 128 || Player->TeamID == 138 || Player->TeamID == 148 || Player->TeamID == 158 || Player->TeamID == 168 || Player->TeamID == 178 || Player->TeamID == 188 || Player->TeamID == 198 || Player->TeamID == 208 || Player->TeamID == 218){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.16f, 0.14f, 0.13f, 0.4f});
                                        
                                    } else if (Player->TeamID == 9 || Player->TeamID == 19 || Player->TeamID == 29 || Player->TeamID == 39 || Player->TeamID == 49 || Player->TeamID == 59 || Player->TeamID == 69 || Player->TeamID == 79 || Player->TeamID == 89 || Player->TeamID == 99 || Player->TeamID == 109 || Player->TeamID == 119 || Player->TeamID == 129 || Player->TeamID == 139 || Player->TeamID == 149 || Player->TeamID == 159 || Player->TeamID == 169 || Player->TeamID == 179 || Player->TeamID == 189 || Player->TeamID == 199 || Player->TeamID == 209 || Player->TeamID == 219){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {1.0f, 0.5f, 0.31f, 0.4f});
                                        
                                    } else if (Player->TeamID == 10){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.42f, 0.35f, 0.8f, 0.4f});
                                        
                                    } else if (Player->TeamID == 11){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.5f, 1.0f, 0.8f, 0.4f});
                                        
                                    } else if (Player->TeamID == 12){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.25f, 0.41f, 0.88f, 0.4f});
                                        
                                    } else if (Player->TeamID == 13){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {1.0f, 0.5f, 0.0f, 0.4f});
                                        
                                    } else if (Player->TeamID == 14){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.94f, 0.9f, 0.5f, 0.4f});
                                        
                                    } else if (Player->TeamID == 15){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.75f, 0.75f, 0.75f, 0.4f});
                                        
                                    } else if (Player->TeamID == 16){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {1.0f, 0.92f, 0.8f, 0.4f});
                                        
                                    } else if (Player->TeamID == 17){
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.89f, 0.09f, 0.05f, 0.4f});
                                        
                                    }else {
                                        
                                        DrawFilledRectangle(HUD, {HeadSc.X, HeadSc.Y - 32}, mWidth, 22.0f, {0.89f, 0.09f, 0.05f, 0.4f});
                                        
                                    }
                                    
                                }
                                
                                
                                if (IsPLayerName)
                                {
                                    tslFont->LegacyFontSize = 10.f;
                                    std::wstring knockedstr = L"[ Knock ]";
                                    
                                    std::wstring bot = L"BOT";
                                    
                                    std::wstring Text;
                                    
                                    
                                    
                                    
                                    Text = std::to_wstring(Player->TeamID) + L"  " + Player->PlayerName.ToWString();
                                    
                                    //Text = Player->PlayerName.ToWString();
                                    
                                    
                                    if (Player->Health <= 0)
                                    {
                                        if (Player->bEnsure)
                                        {
                                            DrawOutlinedText(HUD, FString(knockedstr), FVector2D(RootSc.X - 1, (RootSc.Y + 3)), COLOR_PLAYER, COLOR_BLACK, true);
                                        }
                                        else
                                        {
                                            DrawOutlinedText(HUD, FString(knockedstr), FVector2D(RootSc.X - 1, (RootSc.Y + 3)), FLinearColor(255 / 255.0f, 0 / 255.0f, 0 / 255.0f, 1.0f), COLOR_BLACK, true);
                                        }
                                    }
                                    else
                                    {
                                        if (!Player->bEnsure)
                                            
                                        {
                                            DrawOutlinedText(HUD, FString(Text), FVector2D(RootSc.X - 13, (HeadSc.Y - 21)), COLOR_WHITE, COLOR_BLACK, true);
                                        }
                                        else
                                        {
                                            
                                            DrawOutlinedText(HUD, FString(bot), FVector2D(RootSc.X - 13, (HeadSc.Y - 21)), COLOR_WHITE, COLOR_BLACK, true);
                                        }
                                    }
                                    
                                    
                                    
                                }
                                if (iSPLAYERDIS){
                                    std::wstring distance;
                                    distance = std::to_wstring((int) Distance) + L" M";
                                    tslFont->LegacyFontSize = 11.f;
                                    DrawOutlinedText(HUD, FString(distance), FVector2D(RootSc.X - 1, (RootSc.Y + 17)), COLOR_WHITE, COLOR_BLACK, true);
                                    
                                }
                                
                                
                                
                                
                                
                                if(IsPlayerWEP){
                                    //    if (Player->bEnsure){
                                    
                                    auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                    if (WeaponManagerComponent) {
                                        {
                                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
                                            if (CurrentWeaponReplicated) {
                                                auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
                                                if (WeaponId) {
                                                    
                                                    
                                                    std::wstring s;
                                                    s += CurrentWeaponReplicated->GetWeaponName().ToWString();
                                                    tslFont->LegacyFontSize = 10.0f;
                                                    DrawOutlinedText(HUD, FString(s), FVector2D(RootSc.X, (HeadSc.Y - 41)), COLOR_BLUE, COLOR_BLACK, true);
                                                }
                                            }
                                        }
                                    }
                                    
                                }
                            }
                            
                            
                        }
                        
                        if (IsWarring)
                        {
                            bool Useless = false;
                            FVector2D EntityPos = WorldToRadar(localPlayer->K2_GetActorRotation().Yaw, Head, localPlayer->GetHeadLocation(true), NULL, NULL, FVector((float)screenWidth, (float)screenHeight, 0.f), Useless);
                            
                            FVector angle;
                            FVector MiddlePoint(((float)screenWidth / 2.f) - EntityPos.X, ((float)screenHeight / 2.f) - EntityPos.Y, 0.f);
                            VectorAnglesRadar2(MiddlePoint, angle);
                            const auto AngleYawRadian = DEG2RAD(angle.Y + 180.f);
                            float Point_X = ((float)screenWidth / 2.f) + (alphawarring) / 2.f * 8.f * cosf(AngleYawRadian);
                            float Point_Y = ((float)screenHeight / 2.f) + (alphawarring) / 2.f * 8.f * sinf(AngleYawRadian);
                            FixTriangle(Point_X, Point_Y, 100);
                            std::array < FVector2D, 39 > points
                            {
                                FVector2D((float)Point_X - (5.6f * (float)3.f), Point_Y - (7.3f *2.f)),
                                FVector2D((float)Point_X + (11.6f *2.f), Point_Y),
                                FVector2D((float)Point_X - (5.6f *2.f), Point_Y + (7.3f *2.f)),
                                FVector2D((float)Point_X - (5.6f *2.f), Point_Y - (4.3f *2.f)),
                                FVector2D((float)Point_X - (19.5f *2.f), Point_Y - (4.3f *2.f)),
                                FVector2D((float)Point_X - (19.5f *2.f), Point_Y + (4.3f *2.f)),
                                FVector2D((float)Point_X - (5.6f *2.f), Point_Y + (4.3f *2.f)),
                                FVector2D((float)Point_X + (10.3f *2.f), Point_Y),
                                FVector2D((float)Point_X - (5.f *2.f), Point_Y - (3.f *2.f)),
                                FVector2D((float)Point_X - (5.f *2.f), Point_Y + (3.f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (6.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (5.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (3.f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (3.f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (2.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (1.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (0.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y + (6.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y + (5.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y + (3.f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y + (3.f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y + (2.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y + (1.5f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y + (0.2f *2.f)),
                                FVector2D((float)Point_X - (5.f * (float)2.f), Point_Y - (0.2f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y - (3.75f *2.f)),
                                FVector2D((float)Point_X - (18.5f *3.f), Point_Y - (3.f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y - (2.f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y - (1.f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y - (0.5f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y - (0.2f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y + (3.75f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y + (3.f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y + (2.f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y + (1.f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y + (0.5f *2.f)),
                                FVector2D((float)Point_X - (18.5f *2.f), Point_Y + (0.2f *2.f)),
                            };
                            
                            FVector2D BelowRoowwtSc;
                            
                            if (gGameplayStatics->ProjectWorldToScreen(localPlayerController, Head, false, &BelowRoowwtSc)) {
                            }else{
                                RotateTriangle(points, angle.Y + 180.0f);
                                float Thickness = 3.f;
                                if (Styleesp == 0){
                                    if(Player->bEnsure){
                                        DrawArrows(HUD,points, Thickness, COLOR_WHITE); //No arrows if it Bots
                                    } else{
                                        DrawArrows(HUD,points, Thickness, visCol);
                                    }}
                                if (Styleesp == 1){
                                    if(Player->bEnsure){
                                        DrawArrows(HUD,points, Thickness, COLOR_WHITE); //No arrows if it Bots
                                    } else{
                                        DrawArrows(HUD,points, Thickness, visCol);
                                    }}
                                if (Styleesp == 2) {
                                    if(Player->bEnsure){
                                        //   DrawCircle(HUD, points.at(0).X, points.at(0).Y, 6, 100, COLOR_LIME);
                                        DrawFilledCircle(HUD, points.at(0).X, points.at(0).Y, 6, 100, COLOR_BLACK, COLOR_LIME);
                                    } else {
                                        DrawFilledCircle(HUD, points.at(0).X, points.at(0).Y, 6, 100, COLOR_BLACK, visCol);
                                    }
                                }
                                if (Styleesp == 3) {
                                    if(Player->bEnsure){
                                        DrawArrows(HUD,points, Thickness, COLOR_WHITE); //No arrows if it Bots
                                    } else{
                                        DrawArrows(HUD,points, Thickness, visCol);
                                    }}
                                
                            }
                        }
                        
                        
                        if(playerradar)
                        {
                            float lateralAngleView = (localPlayerController->ControlRotation.Yaw) - 90;
                            
                            FVector selfcoord = localPlayerController->PlayerCameraManager->CameraCache.POV.Location;
                            FVector Objectcoord = Player->RootComponent->RelativeLocation;
                            
                            int Ev = 200;
                            
                            FVector2D radar = rotateCoord(lateralAngleView,FVector2D((selfcoord.X - Objectcoord.X) / Ev,(selfcoord.Y - Objectcoord.Y) / Ev));
                            
                            FVector2D vitri = {300,300};
                            float kichthuoc = 60;
                            //vẽ dấu +
                            Canvas->K2_DrawLine({(float)vitri.X - (225 * kichthuoc / 100),(float)vitri.Y},{(float)vitri.X + (225 * kichthuoc / 100) ,(float)vitri.Y}, 1, FLinearColor(1.f,1.f,1.f,1.f));
                            Canvas->K2_DrawLine({(float)vitri.X,(float)vitri.Y - (225 * kichthuoc / 100)},{(float)vitri.X ,(float)vitri.Y + (225 * kichthuoc / 100)}, 1, FLinearColor(1.f,1.f,1.f,1.f));
                            //+-
                            
                            Canvas->K2_DrawLine({(float)vitri.X  - (225 * kichthuoc / 100),(float)vitri.Y - (225 * kichthuoc / 100)},{(float)vitri.X  - (225 * kichthuoc / 100) ,(float)vitri.Y + (225 * kichthuoc / 100)}, 1, FLinearColor(1.f,1.f,1.f,1.f));
                            
                            Canvas->K2_DrawLine({(float)vitri.X  + (225 * kichthuoc / 100),(float)vitri.Y - (225 * kichthuoc / 100)},{(float)vitri.X  + (225 * kichthuoc / 100) ,(float)vitri.Y + (225 * kichthuoc / 100)}, 1, FLinearColor(1.f,1.f,1.f,1.f));
                            
                            Canvas->K2_DrawLine({(float)vitri.X - (225 * kichthuoc / 100),(float)vitri.Y  - (225 * kichthuoc / 100)},{(float)vitri.X + (225 * kichthuoc / 100) ,(float)vitri.Y  - (225 * kichthuoc / 100)}, 1, FLinearColor(1.f,1.f,1.f,1.f));
                            
                            Canvas->K2_DrawLine({(float)vitri.X - (225 * kichthuoc / 100),(float)vitri.Y  + (225 * kichthuoc / 100)},{(float)vitri.X + (225 * kichthuoc / 100) ,(float)vitri.Y  + (225 * kichthuoc / 100)}, 1, FLinearColor(1.f,1.f,1.f,1.f));
                            
                            
                            DrawCircle(Canvas, (float)vitri.X + radar.X * (kichthuoc / 100),(float)vitri.Y + radar.Y  * (kichthuoc / 100),5,100, FLinearColor(1.0f,0.0f,0.0f,1.0f));
                            
                            // Viễn Trong
                            Canvas->K2_DrawLine({(float)vitri.X  - (225 * kichthuoc / 200),(float)vitri.Y - (225 * kichthuoc / 200)},{(float)vitri.X  - (225 * kichthuoc / 200) ,(float)vitri.Y + (225 * kichthuoc / 200)}, 1, FLinearColor(1.f,1.f,0.f,1.f));
                            
                            Canvas->K2_DrawLine({(float)vitri.X  + (225 * kichthuoc / 200),(float)vitri.Y - (225 * kichthuoc / 200)},{(float)vitri.X  + (225 * kichthuoc / 200) ,(float)vitri.Y + (225 * kichthuoc / 200)}, 1, FLinearColor(1.f,1.f,0.f,1.f));
                            
                            Canvas->K2_DrawLine({(float)vitri.X - (225 * kichthuoc / 200),(float)vitri.Y  - (225 * kichthuoc / 200)},{(float)vitri.X + (225 * kichthuoc / 200) ,(float)vitri.Y  - (225 * kichthuoc / 200)}, 1, FLinearColor(1.f,1.f,0.f,1.f));
                            
                            Canvas->K2_DrawLine({(float)vitri.X - (225 * kichthuoc / 200),(float)vitri.Y  + (225 * kichthuoc / 200)},{(float)vitri.X + (225 * kichthuoc / 200) ,(float)vitri.Y  + (225 * kichthuoc / 200)}, 1, FLinearColor(1.f,1.f,0.f,1.f));
                            
                            
                            DrawCircle(Canvas, (float)vitri.X + radar.X * (kichthuoc / 100),(float)vitri.Y + radar.Y  * (kichthuoc / 100),3,100, FLinearColor(1.0f,0.0f,0.0f,1.0f));
                            
                        }
                        
                        
                        
                    }PlayerCharacter2.clear();
                    
                    if(iAwareText){
                        // FVector2D opp;
                        //FVector ii;
                        
                        
                        std::wstring player ;
                        
                        
                        if(AR_language == 0){
                            player +=L"PLAYER : ["+ std::to_wstring((int)totalEnemies)+L"] "+L"  ROBOT: ["+ std::to_wstring((int)totalBots)+L"] ";
                            
                            tslFont->LegacyFontSize = 23 ;//iAwareTexSiz
                            DrawTextcan(HUD->Canvas, FString(player), FVector2D(screenWidth / 2 , 125), visCol, COLOR_BLACK);
                            
                        }
                        if(AR_language == 1){
                            
                            player +=L"Số người: ["+ std::to_wstring((int)totalEnemies)+L"] "+L"  Số Bot: ["+ std::to_wstring((int)totalBots)+L"] ";
                            
                            tslFont->LegacyFontSize = 23 ;//iAwareTexSiz
                            DrawTextcan(HUD->Canvas, FString(player), FVector2D(screenWidth / 2, 125), visCol, COLOR_BLACK);
                        }
                    }
                    
                }
                
                
                
                //---------------------AIMBOT------------------//
                
                if(localPlayer){

                    
                    if (AimbotStatus) {
                        
                        ASTExtraPlayerCharacter *Target = GetTargetForAimBotByFOV();
                        if (Target) {
                            bool triggerOk = true;
                            if (batchedoaim) {
                                
                                if (chedoaim == 1) {
                                    triggerOk = localPlayer->bIsWeaponFiring;
                                } else if (chedoaim == 2) {
                                    triggerOk = localPlayer->bIsGunADS;
                                } else if (chedoaim == 3)  {//IsBothaim
                                    triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
                                } else if (chedoaim == 4) {
                                    triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
                                }
                                
                            } else triggerOk = true;
                            if (triggerOk) {
                                FVector targetAimPos = Target->GetBonePos("Head", {});//aimpos();//  speed
                                if(Istargets == 0){//head
                                    targetAimPos = Target->GetHeadLocation(true);
                                }else if(Istargets == 1){//nick
                                    targetAimPos.Z -= 0.5f;
                                }else if(Istargets == 2){//nick
                                    targetAimPos.Z -= 30.0f;
                                } else if (Istargets == 3){//root
                                    targetAimPos.Z -= 45.0f;
                                }
                                auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                                if (WeaponManagerComponent) {
                                    auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                    if ((int) propSlot.GetValue() >= 1 &&
                                        (int) propSlot.GetValue() <= 3) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                            auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                            if (ShootWeaponComponent) {
                                                UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                                
                                                //aim dự đoán
                                                if (ShootWeaponEntityComponent) {
                                                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                                    if (CurrentVehicle) {
                                                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                                                        float dist = localPlayer->GetDistanceTo(Target);
                                                        auto timeToTravel = dist /
                                                        ShootWeaponEntityComponent->BulletFireSpeed;
                                                        targetAimPos = UMC->Add_VectorVector(targetAimPos,UMC->Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                                    } else {
                                                        FVector Velocity = Target->GetVelocity();
                                                        float dist = localPlayer->GetDistanceTo(Target);
                                                        auto timeToTravel = dist /
                                                        ShootWeaponEntityComponent->BulletFireSpeed;
                                                        targetAimPos = UMC->Add_VectorVector(targetAimPos, UMC->Multiply_VectorFloat(Velocity, timeToTravel));
                                                    }
                                                    //       if (localPlayer->bIsGunADS) {
                                                    if (localPlayer->bIsWeaponFiring) {
                                                        float dist = localPlayer->GetDistanceTo(Target) / 100.f;
                                                        targetAimPos.Z -= dist * IsAimBotRecc;
                                                    }
                                                    /*              }}
                                                     
                                                     localPlayerController->ClientSetLocation(localPlayer->K2_GetActorLocation(), ToRotator(localPlayerController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos));
                                                     }}
                                                     */
                                                    
                                                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localPlayerController->PlayerCameraManager->CameraCache.POV.Location);
                                                    FRotator Yaptr = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                                                    FRotator CpYaT = localPlayerController->PlayerCameraManager->CameraCache.POV.Rotation;
                                                    Yaptr.Pitch -= CpYaT.Pitch;
                                                    Yaptr.Yaw -= CpYaT.Yaw;
                                                    Yaptr.Roll = 0.f;
                                                    IMGUI_GOD(Yaptr);
                                                    CpYaT.Pitch += Yaptr.Pitch / AimSmooth; //AIMSPEED HORIZON
                                                    CpYaT.Yaw += Yaptr.Yaw / AimSmooth; // AIMSPEED VERTICAL
                                                    CpYaT.Roll = 0.f;
                                                    localPlayerController->SetControlRotation(CpYaT,"");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            //---------------------END AIMBOT------------------//
            
        }
        
        
//        Font->LegacyFontSize = 25;
// DrawText(Canvas,FString(sESP_Header), {(float) (screenWidth / 2), 80}, FLinearColor(1.f, 1.f, 1.f, 1.f));
        
 DrawText(HUD, FString(sESP_Header),{(float) (screenWidth / 2), 80}, FLinearColor(1.f, 1.f, 1.f, 1.f));
//
        tslFont->LegacyFontSize = 15;

        
        if (thongtin)
        {
            
            std::vector < ASTExtraGameStateBase * >ingame;
            std::vector < UGameLevelManagerComponent * >cheat;
            GetAllActors(ingame);
            for (auto actor = ingame.begin();
                 actor != ingame.end(); actor++)
            {
                
                
                auto ingame = *actor;
                auto game = *actor;
                //auto cheat = *actor;
                std::string s;
                
                
                
                
                s += " Match Information: ";
                s += "\n My Team: ";
                s += std::to_string((int) ingame->PlayerNumPerTeam);
                s += "\n Team Remaining: ";
                s += std::to_string(ingame->AliveTeamNum);
                s += "\n Player Alive: ";
                s += std::to_string(game->AlivePlayerNum);
                s += "\n Real Player: ";
                s += std::to_string(game->PlayerNum);
                s += "\n Total Number of Teams: ";
                s += std::to_string(game->PlayerNumPerTeam);
                s += "\n Time match  : ";
                
                s += std::to_string((int) game->ElapsedTime / 60);
                s += " Minutes";
                tslFont->LegacyFontSize = 15;
 DrawText(HUD, FString(s),FVector2D(screenWidth / 2 - 650,screenHeight / 2),COLOR_WHITE, true);
                tslFont->LegacyFontSize = 15;
                
            } ingame.clear();
            
        }
        
        
        
        if(IsLootBox) {
            std::vector < APickUpListWrapperActor * >ItemBase;
            GetAllActors(ItemBase);
            for (auto actor = ItemBase.begin(); actor != ItemBase.end(); actor++)
            {
                auto PickUpList = *actor;
                auto RootComponent = PickUpList->RootComponent;
                if (!RootComponent)
                    continue;
                //--
                std::wstring lootBoxType;
                switch (PickUpList->BoxType) {
                    case EPickUpBoxType::EPickUpBoxType__EPickUpBoxType_LootBox:
                        lootBoxType = L"LootBox";
                    case EPickUpBoxType::EPickUpBoxType__EPickUpBoxType_TombBox:
                        lootBoxType = L"TomBOX";
                    case EPickUpBoxType::EPickUpBoxType__EPickUpBoxType_AirDropBox:
                        lootBoxType = L"Airdrop";
                    default:
                        lootBoxType = L"LootBox";
                }
                
                //--
                float Distance = PickUpList->GetDistanceTo(localPlayer) / 100.f;
                auto Location = PickUpList->RootComponent->RelativeLocation;
                FVector2D itemPos;
                DrawBox3D(HUD,PickUpList, COLOR_LIME, Location, FVector(26, 42, 15));//draw TomBOX 3d
                if( W2S(Location, &itemPos)){
                    auto Items = PickUpList->GetDataList();
                    for (int i = 0; i < Items.Num(); i++) {
                        auto iditeam = Items[i].ID.TypeSpecificID;
                        std::wstring AR;
                        std::wstring SM;
                        std::wstring SN;
                        std::wstring SH;
                        std::wstring OTH;
                        std::wstring AMMO;
                        std::wstring SCO;
                        std::wstring ARM;
                        std::wstring item;
                        std::wstring airdrop_x;
                        switch (iditeam) {
                            case 101001:
                                AR = std::wstring(L" AKM ");
                                break;
                            case 101002:
                                AR = std::wstring(L" M16A4 ");
                                break;
                            case 101003:
                                AR = std::wstring(L" SCAR-L ");
                                break;
                            case 101004:
                                AR = std::wstring(L" M416 ");
                                break;
                            case 101005:
                                AR= std::wstring(L" Groza ");
                                break;
                            case 101006:
                                AR = std::wstring(L" AUG ");
                                break;
                            case 602002:
                                
                                AR = std::wstring(L" Smoke ");
                                
                                break;
                            case 602003:
                                
                                AR = std::wstring(L" Molitove ");
                                
                                break;
                            case 602004:
                                
                                SM = std::wstring(L" Grenade ");
                                
                                
                                break;
                            case 101007:
                                SM = std::wstring(L" QBZ ");
                                break;
                            case 101008:
                                SM = std::wstring(L" M762 ");
                                break;
                            case 101009:
                                SM = std::wstring(L" Mk47 ");
                                break;
                            case 101010:
                                SM = std::wstring(L" G36C ");
                                break;
                            case 101100:
                                SM = std::wstring(L" FAMAS ");
                                break;
                            case 102001:
                                SM = std::wstring(L" UZI ");
                                break;
                            case 102002:
                                SM = std::wstring(L" UMP45 ");
                                break;
                            case 102003:
                                SM = std::wstring(L" Vector ");
                                break;
                            case 102004:
                                SN = std::wstring(L" TommyGun ");
                                break;
                            case 102005:
                                SN = std::wstring(L" PP-19 Bizon ");
                                break;
                            case 102007:
                                SN = std::wstring(L" Skorpion ");
                                break;
                            case 103001:
                                SN = std::wstring(L" Kar98K ");
                                break;
                            case 103002:
                                SN = std::wstring(L" M24 ");
                                break;
                            case 103003:
                                SN = std::wstring(L" AWM ");
                                break;
                            case 103004:
                                SN = std::wstring(L" SKS ");
                                break;
                            case 103005:
                                SN = std::wstring(L" VSS ");
                                break;
                            case 103006:
                                SN = std::wstring(L" Mini14 ");
                                break;
                            case 103007:
                                SN = std::wstring(L" Mk14 ");
                                break;
                            case 103008:
                                SN = std::wstring(L" Win94 ");
                                break;
                            case 103009:
                                SH = std::wstring(L" SLR ");
                                break;
                            case 103010:
                                SH = std::wstring(L" QBU ");
                                break;
                            case 103011:
                                SH = std::wstring(L" Mosin ");
                                break;
                            case 103012:
                                SH =std::wstring(L"AMR Sniper");
                                break;
                            case 103100:
                                SH = std::wstring(L" Mk12 ");
                                break;
                            case 104001:
                                SH = std::wstring(L" S686 ");
                                break;
                            case 104002:
                                SH = std::wstring(L" S1897 ");
                                break;
                            case 104003:
                                SH = std::wstring(L" S12K ");
                                break;
                            case 104004:
                                SH = std::wstring(L" M1014 ");
                                break;
                            case 106006:
                                SH = std::wstring(L" Sawed-off ");
                                break;
                            case 203001:
                                
                                OTH = std::wstring(L"Red Dot");
                                
                                
                                break;
                            case 203002:
                                
                                OTH = std::wstring(L"Holographic");
                                
                                break;
                            case 203003:
                                
                                OTH = std::wstring(L"2x Scope");
                                
                                break;
                            case 203004:
                                
                                OTH = std::wstring(L"4x Scope");
                                
                                break;
                            case 203005:
                                
                                OTH = std::wstring(L"8x Scope");
                                
                                break;
                            case 203014:
                                
                                OTH = std::wstring(L"3x Scope");
                                
                                break;
                            case 203015:
                                
                                OTH = std::wstring(L"6x Scope");
                                
                                break;
                            case 301001:
                                OTH = std::wstring(L" 9mm ");
                                break;
                            case 302001:
                                OTH = std::wstring(L" 7.62mm");
                                break;
                            case 303001:
                                OTH = std::wstring(L" 5.56mm ");
                                break;
                            case 304001:
                                
                                OTH = std::wstring(L"12 Gauge");
                                
                                break;
                            case 305001:
                                
                                OTH = std::wstring(L".45 ACP");
                                
                                break;
                            case 306001:
                                
                                OTH = std::wstring(L".300 Magnum");
                                
                                break;
                            case 307001:
                                
                                OTH = std::wstring(L"Crossbow");
                                
                                break;
                            case 105001:
                                OTH = std::wstring(L" M249 ");
                                break;
                            case 105002:
                                OTH = std::wstring(L" DP-28 ");
                                break;
                            case 601001:
                                
                                SCO = std::wstring(L"Soda");
                                
                                break;
                            case 601002:
                                
                                SCO = std::wstring(L"Pills");
                                
                                break;
                            case 601003:
                                
                                SCO = std::wstring(L"Adrenaline");
                                
                                break;
                            case 601004:
                                
                                SCO = std::wstring(L"Bandage");
                                
                                break;
                            case 601005:
                                
                                
                                SCO = std::wstring(L"First Aid");
                                
                                break;
                            case 601006:
                                
                                SCO = std::wstring(L"Med kit");
                                
                                break;
                            case 501001:
                                
                                SCO = std::wstring(L"Bag Lv1");
                                
                                break;
                            case 501002:
                                
                                SCO = std::wstring(L"Bag Lv2");
                                
                                break;
                            case 501006:
                                
                                AMMO = std::wstring(L"Bag Lv3");
                                
                                break;
                            case 502001:
                                
                                AMMO = std::wstring(L"Helmet Lv1");
                                
                                break;
                            case 502002:
                                
                                AMMO = std::wstring(L"Helmet Lv2");
                                
                                break;
                            case 502003:
                                
                                AMMO = std::wstring(L"Helmet Lv3");
                                
                                break;
                            case 503001:
                                
                                AMMO = std::wstring(L"Police Vest(Lv1)");
                                
                                break;
                            case 503002:
                                
                                AMMO = std::wstring(L"Police Vest(Lv2)");
                                
                                break;
                            case 503003:
                                
                                AMMO = std::wstring(L"Police Vest(Lv3)");
                                
                                break;
                            default:
                                break;
                        }
                        tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                        float txtWidth, txtHeight;
                        HUD->GetTextSize(FString(AR), tslFont, 1.f, &txtWidth,
                                         &txtHeight);
                        HUD->GetTextSize(FString(SN), tslFont, 1.f, &txtWidth,
                                         &txtHeight);
                        HUD->GetTextSize(FString(SH), tslFont, 1.f, &txtWidth,
                                         &txtHeight);
                        HUD->GetTextSize(FString(SM), tslFont, 1.f, &txtWidth,
                                         &txtHeight);
                        HUD->GetTextSize(FString(AMMO), tslFont, 1.f, &txtWidth,
                                         &txtHeight);
                        HUD->GetTextSize(FString(OTH), tslFont, 1.f, &txtWidth,
                                         &txtHeight);
                        HUD->GetTextSize(FString(SCO), tslFont, 1.f, &txtWidth,
                                         &txtHeight);
                        itemPos.Y += txtHeight *1.3;
                        visCol.R = 1;
                        visCol.G = 0.3;
                        visCol.B = 0.2;
                        visCol.A = 1.f;
                        DrawOutlineditem(HUD, AR, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        visCol.R = 0.3;
                        visCol.G = 1;
                        visCol.B = 0.2;
                        visCol.A = 1.f;
                        DrawOutlineditem(HUD, OTH, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        visCol.R = 0.2;
                        visCol.G = 0.3;
                        visCol.B = 1;
                        visCol.A = 1.f;
                        DrawOutlineditem(HUD, SM, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        visCol.R = 1.2;
                        visCol.G = 1.5;
                        visCol.B = 0.5;
                        visCol.A = 1.f;
                        DrawOutlineditem(HUD, SN, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        visCol.R = 0.2;
                        visCol.G = 0.3;
                        visCol.B = 0.2;
                        visCol.A = 1.f;
                        DrawOutlineditem(HUD, SH, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        visCol.R = 1;
                        visCol.G = 1;
                        visCol.B = 1.4;
                        visCol.A = 1.f;
                        DrawOutlineditem(HUD, SCO, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        visCol.R = 1.2;
                        visCol.G = 3.3;
                        visCol.B = 3.2;
                        visCol.A = 1.f;
                        DrawOutlineditem(HUD, AMMO, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        // next line for text not approved yet - to draw lootbox name
                        DrawOutlineditem(HUD, lootBoxType, { 100.f,100.f}, visCol, COLOR_BLACK);
                    }
                }
            }ItemBase.clear();
        }
        //Airdrop esp
        if(IsAirDrop){
            //(actor->IsA(Classes::ACarePackageItem::StaticClass()))
            //APickUpListWrapperActor->AAirDropListWrapperActor
            std::vector < AAirDropListWrapperActor * >ItemBase;
            GetAllActors(ItemBase);
            for (auto actor = ItemBase.begin(); actor != ItemBase.end(); actor++)
            {
                auto PickUpList = *actor;
                //std::wstring lootType = GetLootName(PickUpList);
                auto RootComponent = PickUpList->RootComponent;
                if (!RootComponent)
                    continue;
                //float Distance = PickUpList->GetDistanceTo(localPlayer) / 100.f;
                auto Location = PickUpList->RootComponent->RelativeLocation;
                FVector2D itemPos;
                //auto LotTypeSTR = "";
                //LotTypeSTR =  GetLootName(PickUpList);
                DrawBox3D(HUD,PickUpList, COLOR_RED, Location, FVector(50, 50, 50));
                
                /*if(PickUpList->BoxType == EPickUpBoxType::EPickUpBoxType__EPickUpBoxType_AirDropBox){
                 DrawBox3D(HUD,PickUpList, COLOR_LIME, Location, FVector(26, 42, 15));
                 }*/
            }
        }
        
        std::vector<APickUpWrapperActor*> ITEMM;
        GetAllActors(ITEMM);
        for (auto actor = ITEMM.begin(); actor != ITEMM.end(); actor++) {
            auto PickUp = *actor;
            //if(PickUp->IsA(FAirDropBoxData)){};
            if(PickUp->bIsInAirDropBox){
                auto Location = PickUp->RootComponent->RelativeLocation;
                DrawBox3D(HUD,PickUp, COLOR_BLUE, Location, FVector(60, 60, 60));
            };
            auto pp =(PickUp->DefineID.TypeSpecificID);
            if(pp){
                auto RootComponent = PickUp->RootComponent;
                if (!RootComponent ||PickUp->bHidden)
                    continue;
                float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;
                FVector2D itemPos;
                if (Distance > 2 && Distance <= 50) {
                    if(gGameplayStatics->ProjectWorldToScreen(localPlayerController, PickUp->K2_GetActorLocation(), true, &itemPos)){
                        std::wstring AR;
                        std::wstring SM;
                        std::wstring SN;
                        std::wstring SH;
                        std::wstring OTH;
                        std::wstring AMMO;
                        std::wstring SCO;
                        std::wstring ARM;
                        std::wstring item;
                        if(IsAR){
                            switch (pp) {
                                case 101001://need to be translate
                                    AR = std::wstring(L" AKM ");
                                    break;
                                case 101002:
                                    AR = std::wstring(L" M16A4 ");
                                    break;
                                case 101003:
                                    AR = std::wstring(L" SCAR-L ");
                                    break;
                                case 101004:
                                    AR = std::wstring(L" M416 ");
                                    break;
                                case 101005:
                                    AR= std::wstring(L" Groza ");
                                    break;
                                case 101006:
                                    AR = std::wstring(L" AUG ");
                                    break;
                                case 602002:
                                    
                                    AR = std::wstring(L" Smoke ");
                                    
                                    
                                    break;
                                case 602003:
                                    
                                    AR = std::wstring(L" Molitove ");
                                    
                                    break;
                                case 602004:
                                    
                                    AR = std::wstring(L" Grenade ");
                                    
                                    
                                    break;
                                case 101007:
                                    AR = std::wstring(L" QBZ ");
                                    break;
                                case 101008:
                                    AR = std::wstring(L" M762 ");
                                    break;
                                case 101009:
                                    AR = std::wstring(L" Mk47 ");
                                    break;
                                case 101010:
                                    AR = std::wstring(L" G36C ");
                                    break;
                                case 101100:
                                    AR = std::wstring(L" FAMAS ");
                                    break;
                                default:
                                    break;
                            }
                            visCol.R = 1.f;
                            visCol.G = 1.4f;
                            visCol.B = 0.5f;
                            visCol.A = 1.f;
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            DrawOutlineditem(HUD, AR, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsSMG){
                            switch (pp) {
                                case 102001:
                                    SM = std::wstring(L" UZI ");
                                    break;
                                case 102002:
                                    SM = std::wstring(L" UMP45 ");
                                    break;
                                case 102003:
                                    SM = std::wstring(L" Vector ");
                                    break;
                                case 102004:
                                    SM = std::wstring(L" TommyGun ");
                                    break;
                                case 102005:
                                    SM = std::wstring(L" PP-19 Bizon ");
                                    break;
                                case 102007:
                                    SM = std::wstring(L" Skorpion ");
                                    break;
                                default:
                                    break;
                            }
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            visCol.R = 1;
                            visCol.G = 0.3;
                            visCol.B = 0.2;
                            visCol.A = 1.f;
                            DrawOutlineditem(HUD, SM, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsSniper){
                            switch (pp) {
                                case 103001:
                                    SN = std::wstring(L" Kar98K ");
                                    break;
                                    
                                case 103002:
                                    
                                    SN = std::wstring(L" M24 ");
                                    break;
                                case 103003:
                                    SN = std::wstring(L" AWM ");
                                    break;
                                case 103004:
                                    SN = std::wstring(L" SKS ");
                                    break;
                                case 103005:
                                    SN = std::wstring(L" VSS ");
                                    break;
                                case 103006:
                                    SN = std::wstring(L" Mini14 ");
                                    break;
                                case 103007:
                                    SN = std::wstring(L" Mk14 ");
                                    break;
                                case 103008:
                                    SN = std::wstring(L" Win94 ");
                                    break;
                                case 103009:
                                    SN = std::wstring(L" SLR ");
                                    break;
                                case 103010:
                                    SN = std::wstring(L" QBU ");
                                    break;
                                case 103011:
                                    SN = std::wstring(L" Mosin ");
                                    break;
                                case 103012:
                                    SN =std::wstring(L"AMR Sniper");
                                    break;
                                default:
                                    break;
                            }
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            visCol.R = 0.9f;
                            visCol.G = 2.8f;
                            visCol.B = 0.7f;
                            visCol.A = 1;
                            DrawOutlineditem(HUD, SN, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsShotgun){
                            switch (pp) {
                                case 103100:
                                    SH = std::wstring(L" Mk12 ");
                                    break;
                                case 104001:
                                    SH = std::wstring(L" S686 ");
                                    break;
                                case 104002:
                                    SH = std::wstring(L" S1897 ");
                                    break;
                                case 104003:
                                    SH = std::wstring(L" S12K ");
                                    break;
                                case 104004:
                                    
                                    SH = std::wstring(L" DBS ");
                                    break;
                                case 104102:
                                    SH = std::wstring(L" NS2000 ");
                                    break;
                                case 104101:
                                    SH = std::wstring(L" M1014 ");
                                    break;
                                    
                                case 106006:
                                    SH = std::wstring(L" Sawed-off ");
                                    break;
                                default:
                                    break;
                            }
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            visCol.R = 1;
                            visCol.G = 1.3;
                            visCol.B = 0.4;
                            visCol.A = 1;
                            DrawOutlineditem(HUD, SH, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsLuc){
                            switch (pp) {
                                case 106001:
                                    item = std::wstring(L" P1911 ");
                                    break;
                                case 106003:
                                    item = std::wstring(L" R1895 ");
                                    break;
                                case 106004:
                                    item = std::wstring(L" P18C ");
                                    break;
                                case 106005:
                                    item = std::wstring(L" R45 ");
                                    break;
                                case 106008:
                                    item = std::wstring(L" Vz61 ");
                                    break;
                                case 106010:
                                    item = std::wstring(L" Desert Eagle ");
                                    break;
                                default:
                                    break;
                            }
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            visCol.R = 0.98f;
                            visCol.G = 1;
                            visCol.B = 1;
                            visCol.A = 1;
                            DrawOutlineditem(HUD, item, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsOngngam){
                            switch (pp) {
                                case 203001:
                                    
                                    SCO = std::wstring(L"Red Dot");
                                    
                                    break;
                                case 203002:
                                    
                                    SCO = std::wstring(L"Holographic");
                                    
                                    break;
                                case 203003:
                                    
                                    SCO = std::wstring(L"2x Scope");
                                    
                                    break;
                                case 203004:
                                    
                                    SCO = std::wstring(L"4x Scope");
                                    
                                    break;
                                case 203005:
                                    
                                    SCO = std::wstring(L"8x Scope");
                                    
                                    break;
                                case 203014:
                                    
                                    SCO = std::wstring(L"3x Scope");
                                    
                                    break;
                                case 203015:
                                    
                                    SCO = std::wstring(L"6x Scope");
                                    
                                    break;
                                default:
                                    break;
                            }
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            visCol.R = 1;
                            visCol.G = 0.2;
                            visCol.B = 0.4;
                            visCol.A = 1;
                            DrawOutlineditem(HUD, SCO, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsAmmo){
                            switch (pp) {
                                case 301001:
                                    AMMO = std::wstring(L" 9mm ");
                                    break;
                                case 302001:
                                    AMMO = std::wstring(L" 7.62mm");
                                    break;
                                case 303001:
                                    AMMO = std::wstring(L" 5.56mm ");
                                    break;
                                case 304001:
                                    
                                    AMMO = std::wstring(L"12 Gauge");
                                    
                                    break;
                                case 305001:
                                    
                                    AMMO = std::wstring(L".45 ACP");
                                    
                                    break;
                                case 306001:
                                    
                                    AMMO = std::wstring(L".300 Magnum");
                                    
                                    break;
                                case 307001:
                                    
                                    AMMO = std::wstring(L"Crossbow");
                                    
                                    break;
                                default:
                                    break;
                            }
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            visCol.R = 1.63;
                            visCol.G = 1.43;
                            visCol.B = 2;
                            visCol.A = 1;
                            DrawOutlineditem(HUD, AMMO, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsSungmay){
                            switch (pp) {
                                case 105001:
                                    
                                    OTH = std::wstring(L"M249");
                                    
                                    break;
                                case 105002:
                                    
                                    OTH = std::wstring(L"DP-28");
                                    
                                    
                                    break;
                                case 105010:
                                    OTH = std::wstring(L" MG3 ");
                                    break;
                                    
                                case 107001:
                                    
                                    OTH = std::wstring(L"Crossbow");
                                    
                                    
                                    break;
                                case 108001:
                                    
                                    OTH = std::wstring(L"Machete");
                                    
                                    
                                    break;
                                case 108002:
                                    
                                    OTH = std::wstring(L"Crowbar");
                                    
                                    
                                    break;
                                case 108003:
                                    
                                    OTH = std::wstring(L"Sickle");
                                    
                                    break;
                                case 108004:
                                    
                                    OTH = std::wstring(L"Pan");
                                    
                                    break;
                                case 201001:
                                    
                                    OTH = std::wstring(L"Choke");
                                    
                                    break;
                                    //         ATTCHMENT
                                case 201002:
                                    
                                    OTH = std::wstring(L"Compensator (AR)");
                                    
                                    break;
                                case 201003:
                                    
                                    OTH = std::wstring(L"Muzzle Brake (DMR)");
                                    
                                    break;
                                case 201004:
                                    
                                    OTH = std::wstring(L"Flash Hider (Pistol)");
                                    
                                    break;
                                case 201005:
                                    
                                    OTH = std::wstring(L"Flash Hider (DMR)");
                                    
                                    // ---
                                    break;
                                case 201006:
                                    
                                    OTH = std::wstring(L"Suppressor (SMG)");
                                    
                                    
                                    break;
                                case 201007:
                                    
                                    OTH = std::wstring(L"Suppressor (Snipers)");
                                    
                                    break;
                                case 201009:
                                    
                                    
                                    OTH = std::wstring(L"Compensator (AR) ");
                                    
                                    break;
                                case 201010:
                                    
                                    OTH = std::wstring(L"Flash Hider (AR)");
                                    
                                    break;
                                case 201011:
                                    
                                    OTH = std::wstring(L"Suppressor (AR) ");
                                    
                                    break;
                                case 201012:
                                    
                                    OTH = std::wstring(L"Duckbill");//
                                    
                                    break;
                                case 202001:
                                    
                                    OTH = std::wstring(L"Angled Foregrip (AR)");
                                    
                                    break;
                                case 202002:
                                    
                                    OTH = std::wstring(L"Vertical Foregrip");
                                    
                                    break;
                                case 202004:
                                    
                                    OTH = std::wstring(L"Light Grip");
                                    
                                    break;
                                case 202005:
                                    
                                    OTH = std::wstring(L"Half Grip");
                                    
                                    break;
                                case 202006:
                                    
                                    OTH = std::wstring(L"Thumb Grip");
                                    
                                    break;
                                case 202007:
                                    
                                    OTH = std::wstring(L"Laser Sight");
                                    
                                    break;
                                    //         SCOPE
                                    //         ATTCHMENT
                                case 203018:
                                    
                                    OTH = std::wstring(L"Canted Sight");
                                    
                                    break;
                                case 204014:
                                    
                                    OTH = std::wstring(L"Bullet Loop");
                                    
                                    break;
                                case 205001:
                                    
                                    OTH = std::wstring(L"Stock (Micro UZI)");
                                    
                                    break;
                                case 205002:
                                    
                                    OTH = std::wstring(L"Tactical Stock (Rifles, SMG)");
                                    
                                    break;
                                case 205003:
                                    
                                    OTH = std::wstring(L"Cheek Pad (Snipers)");
                                    
                                    break;
                                case 205004:
                                    
                                    OTH = std::wstring(L"Quiver (Crossbow)");
                                    
                                    break;
                                case 204004:
                                    
                                    OTH = std::wstring(L"Extended Mag (SMG, Pistols)");
                                    
                                    break;
                                case 204005:
                                    
                                    OTH = std::wstring(L"Quickdraw Mag (SMG, Pistols)");
                                    
                                    break;
                                case 204006:
                                    
                                    OTH = std::wstring(L"Extended Quickdraw Mag (SMG, Pistols)");
                                    
                                    break;
                                case 204007:
                                    
                                    OTH = std::wstring(L"Extended Mag (Snipers)");
                                    
                                    break;
                                case 204008:
                                    
                                    OTH = std::wstring(L"Quickdraw Mag (Snipers)");
                                    
                                    break;
                                case 204009:
                                    
                                    OTH = std::wstring(L"Extended Quickdraw Mag (Snipers)");
                                    
                                    break;
                                case 204011:
                                    
                                    OTH = std::wstring(L"Extended Quickdraw Mag (AR) ");
                                    
                                    break;
                                case 204012:
                                    
                                    OTH = std::wstring(L"Quickdraw Mag (AR)");
                                    
                                    break;
                                case 204013:
                                    
                                    OTH = std::wstring(L"Extended Quickdraw Mag (AR)");
                                    
                                    break;
                                    //         AMMO
                                case 601001:
                                    
                                    OTH = std::wstring(L"Energy Drink");
                                    
                                    break;
                                case 601002:
                                    
                                    OTH = std::wstring(L"Syringe");
                                    
                                    break;
                                case 601003:
                                    
                                    OTH = std::wstring(L"Painkiller");
                                    
                                    break;
                                case 601004:
                                    
                                    OTH = std::wstring(L"Bandage");
                                    
                                    break;
                                case 601005:
                                    
                                    OTH = std::wstring(L"First Aid Kit");
                                    
                                    break;
                                case 601006:
                                    
                                    OTH = std::wstring(L"Med Kit");
                                    
                                    break;
                                default:
                                    break;
                            }
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            visCol.R = 0.2;
                            visCol.G = 1;
                            visCol.B = 0.7;
                            visCol.A = 1;
                            DrawSmallOutlinedText(HUD, OTH, { itemPos.X,itemPos.Y}, visCol, COLOR_BLACK);
                        }
                        if(IsLV3){
                            
                            switch (pp) {
                                    
                                    
                                    
                                    
                                    
                                case 501006:
                                    
                                    if(AR_language == 1){
                                        
                                        ARM = std::wstring(L" Balo Lv3 ");
                                    }
                                    if(AR_language == 0){
                                        ARM = std::wstring(L" Backpack (Lv. 3) ");
                                        
                                    }
                                    break;
                                    
                                case 502003:
                                    
                                    
                                    if(AR_language == 1){
                                        
                                        ARM = std::wstring(L" Mũ Lv3 ");
                                    }
                                    if(AR_language == 0){
                                        ARM = std::wstring(L" Helmet LV3 ");
                                    }
                                    break;
                                    
                                case 503003:
                                    if(AR_language == 1){
                                        
                                        ARM = std::wstring(L" Giáp Lv3 ");
                                    }
                                    if(AR_language == 0){
                                        ARM = std::wstring(L"Armor LV3 ");
                                    }
                                    break;
                                default:
                                    break;
                            }
                            
                            
                            tslFont->LegacyFontSize = max(EspTextSiz, 13 - (int) (Distance / 100));//5
                            DrawSmallOutlinedText(HUD, ARM, { itemPos.X,itemPos.Y}, COLOR_LIME, COLOR_BLACK);
                        }
                    }
                }
            }
        }ITEMM.clear();
        
        
        std::vector<ASTExtraVehicleBase*> ITS;
        GetAllActors(ITS);
        for (auto actor = ITS.begin(); actor != ITS.end(); actor++) {
            auto Vehicle = *actor;
            if (!Vehicle->Mesh)
                continue;
            auto vv = Vehicle->VehicleShapeType;
            float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
            FVector2D vehiclePos;
            auto ROOT  =Vehicle->K2_GetActorLocation();
            ROOT.Z -=50;
            if (Distance > 10.f && Distance <= 300.f) {
                if (gGameplayStatics->ProjectWorldToScreen(localPlayerController,ROOT, true, &vehiclePos)) {
                    std::wstring veh;
                    switch (vv) {
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
                            
                            veh = std::wstring(L"Motorbike");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
                            std::wstring(L"Dacia");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
                            
                            
                            veh = std::wstring(L"MiniBus");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
                            
                            veh = std::wstring(L"PickUp");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
                            
                            veh = std::wstring(L"Buggy");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
                            
                            veh = std::wstring(L"UAZ");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
                            
                            veh = std::wstring(L"Watercraft PG117");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
                            
                            veh = std::wstring(L"Aquarail");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
                            
                            veh = std::wstring(L"Mirado");
                            
                            
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
                            
                            veh = std::wstring(L"Mirado");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
                            
                            veh = std::wstring(L"Rony pickup");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
                            
                            veh = std::wstring(L"Scooter");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
                            
                            veh = std::wstring(L"SnowMobile");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
                            
                            veh = std::wstring(L"TukTuk");
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
                            
                            veh = std::wstring(L"SnowBike");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
                            
                            
                            veh = std::wstring(L"Surfboard");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
                            
                            
                            veh = std::wstring(L"Snowboard");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
                            
                            veh = std::wstring(L"Amphibious");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
                            
                            veh = std::wstring(L"Lada Niva");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
                            
                            veh = std::wstring(L"Drone");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
                            
                            veh = std::wstring(L"MegaDrop");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
                            
                            veh = std::wstring(L"Lamborghini");
                            
                            
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
                            
                            veh = std::wstring(L"Lamborghini 01");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
                            
                            veh = std::wstring(L"GoldMirado");
                            
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
                            
                            veh = std::wstring(L"BigFoot");
    
                            
                            break;
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UH60:
                            
                            veh = std::wstring(L"Helicopter UH60");
                            
                            
                        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
                            
                            veh = std::wstring(L"Helicopter Heavy-UH60");
                            
                            break;
                        default:
                            
                            veh = std::wstring(L"NULL");
                            
                            break;
                    }
                    veh += std::wstring(L" [");
                    veh += std::to_wstring((int) Distance);
                    veh += std::wstring(L"m]");
                    if(IsVehcle){
                        visCol.A =1.f;
                        visCol.B =0.6f;
                        visCol.G =0.8f;
                        visCol.R =1.f;
                        tslFont->LegacyFontSize = max(3, 14 - (int) (Distance / 100));
                        DrawOutlineditem(HUD, veh, { vehiclePos.X,vehiclePos.Y}, visCol, COLOR_BLACK);
                    }
                    if(IsboxVechle){
                        FVector Bounds, b2;
                        Bounds = CHUTIA(Vehicle);
                        Vehicle->GetActorBounds(true, &Bounds, &b2);
                        DrawBox3D(HUD, Vehicle, COLOR_WHITE, Bounds, b2);
                    }
                    auto vhebase = Vehicle->VehicleCommon;
                    float CurHP = std::max(0.f, std::min(vhebase->HP, vhebase->HPMax));
                    float CurFEL = std::max(0.f, std::min(vhebase->Fuel, vhebase->FuelMax));
                    float MAXHEL = vhebase->HPMax;
                    float MaxFEL = vhebase->FuelMax;
                    FLinearColor ColorFEL = {
                        std::min(((310.f * (MaxFEL - CurFEL)) / MaxFEL) / 155.f, 3.f),
                        std::min(((310.f * CurFEL) / MaxFEL) / 155.f, 3.f),
                        0.f,
                        0.5f
                    };
                    FLinearColor ColorHP = {
                        std::min(((510.f * (MAXHEL - CurHP)) / MAXHEL) / 255.f, 1.f),
                        std::min(((510.f * CurHP) / MAXHEL) / 255.f, 1.f),
                        0.f,
                        0.5f
                    };
                    auto AboveHead = Vehicle->K2_GetActorLocation();
                    AboveHead.Z += 60;
                    FVector2D AboveHeadSc;
                    if (gGameplayStatics->ProjectWorldToScreen(localPlayerController,AboveHead, true, &AboveHeadSc))  {
                        auto mWidthScale = std::min(0.1f * Distance, 12.f);
                        auto mWidth = 75.f - mWidthScale;
                        auto mHeight = mWidth * 0.125f;
                        AboveHeadSc.X -= (mWidth / 2);
                        AboveHeadSc.Y -= (mHeight * 1.5f);
                        visCol.A=1.0f;
                        visCol.B=0.5f;
                        visCol.G=1.2f;
                        visCol.R =1.f;
                        if(IsCarHP){
                            tslFont->LegacyFontSize = max(2, 12 - (int) (Distance / 100));
                            DrawFilledRectangle(HUD, {AboveHeadSc.X, AboveHeadSc.Y}, (CurHP * mWidth / MAXHEL ), 6, ColorHP);
                            DrawRectangle(HUD, {AboveHeadSc.X, AboveHeadSc.Y}, mWidth, 6, 1.0f, {0, 0, 0, 1.f});
                        }
                        if(IsCarFuel){
                            AboveHeadSc.Y -=20;
                            tslFont->LegacyFontSize = max(2, 12 - (int) (Distance / 100));
                            DrawFilledRectangle(HUD, {AboveHeadSc.X, AboveHeadSc.Y}, (CurFEL * mWidth / MaxFEL), 6, visCol);
                            DrawRectangle(HUD, {AboveHeadSc.X, AboveHeadSc.Y}, mWidth, 6, 1.0f, {0, 0, 0, 1.f});
                        }
                    }
                }
            }
        }ITS.clear();
        
        if (IsFov) {
            DrawCircle(HUD->Canvas, ScreenWidth/2, ScreenHeight/2,IsfovSlider, 100, COLOR_RED);
        }
        if (ConfigSilentAimEnable) {
            DrawCircle(HUD->Canvas, ScreenWidth/2, ScreenHeight/2,IsfovSlider, 100, COLOR_RED);
        }
        
        
        if (IsGRWAR)
        {
            std::vector < ASTExtraGrenadeBase * >GrenadeBase;
            GetAllActors(GrenadeBase);
            for (auto actor = GrenadeBase.begin();
                 actor != GrenadeBase.end(); actor++)
            {
                auto Grenade = *actor;
                if(Grenade) {
                    auto idbom =(Grenade->ItemDefineID.TypeSpecificID);
                    
                    if(idbom){
                        auto RootComponent = Grenade->RootComponent;
                        if (RootComponent) {
                            float gDistance =
                            Grenade->GetDistanceTo(localPlayer) /100.f;
                            if (gDistance <= 100.f)
                            {
                                
                                FVector2D GrenadePos;
                                FVector ShouLie = Grenade->K2_GetActorLocation();
                                //外圈
                                
                                tslFont->LegacyFontSize =
                                max(6, 15 - (int)(gDistance / 100.f));
                                float txtWidth, txtHeight;
                                std::wstring grenadetext;
                                switch (idbom) {
                                    case 602002:
                                        if(AR_language == 0){
                                            grenadetext = (L"BOM KHÓI");
                                        }
                                        if(AR_language == 1){
                                            grenadetext = (L"SMOKE");
                                        }
                                        break;
                                    case 602003:
                                        if(AR_language == 1){
                                            grenadetext = (L"BOM LỬA");
                                        }
                                        if(AR_language == 0){
                                            grenadetext = (L"MOLITOVE");
                                        }
                                        break;
                                    case 602004:
                                        if(AR_language == 1){
                                            grenadetext = (L"LỰU ĐẠN");
                                        }
                                        if(AR_language == 0){
                                            grenadetext = (L"GRENADE");
                                        }
                                        break;
                                }
                                HUD->GetTextSize(grenadetext,
                                                 tslFont, 1.f, &txtWidth,
                                                 &txtHeight);
                                FVector2D Location;
                                FVector Out(360.0f, 360.0f, 5.0f);
                                FVector Mid(260.0f, 260.0f, 7.0f);
                                FVector Wit(180.0f, 180.0f, 7.0f);
                                if (W2S
                                    (RootComponent->RelativeLocation, &Location))
                                {
                                    DrawOutlinedText(HUD,FString(grenadetext),FVector2D(Location.X,Location.Y + 34),COLOR_RED, COLOR_BLACK, true);
                                }
                                
                                DrawCircle3D(HUD, ShouLie, Out.X, COLOR_WHITE);
                                DrawCircle3D(HUD, ShouLie, Mid.X, COLOR_YELLOW);
                                DrawCircle3D(HUD, ShouLie, Wit.X, COLOR_RED);
                                
                                tslFont->LegacyFontSize = TSL_FONT_DEFAULT_SIZE;
                                
                                
                            }
                            if (gDistance < 13.f)
                            {
                                std::wstring gwarn;
                                switch (idbom) {
                                    case 602002:
                                        if(AR_language == 1){
                                            gwarn = std::wstring(L"!! CẨN THẬN BOM KHÓI !!");
                                        }
                                        if(AR_language == 0){
                                            gwarn = std::wstring(L"!! WARNING BOOM SMOKE !!");
                                        }
                                        break;
                                    case 602003:
                                        if(AR_language == 1){
                                            gwarn = std::wstring(L"!! CẨN THẬN BOM LỬA !!");
                                        }
                                        if(AR_language == 0){
                                            gwarn = std::wstring(L"!! WARNING BOOM MOLITOVE !!");
                                        }
                                        break;
                                    case 602004:
                                        if(AR_language == 1){
                                            gwarn = std::wstring(L"!! CẨN THẬN BOM !!");
                                        }
                                        if(AR_language == 0){
                                            gwarn = std::wstring(L"!! WARNING BOOM !!");
                                        }
                                        break;
                                }
                                
                                tslFont->LegacyFontSize = 35;
                                
                                DrawOutlinedText(HUD, FString(gwarn),
                                                 FVector2D(screenWidth / 2,
                                                           screenHeight / 3),
                                                 COLOR_RED, COLOR_BLACK, true);
                                //hộp bom
                                FVector bbOrigin =
                                RootComponent->RelativeLocation;
                                FVector bbExtends(10, 10, 10);
                                FVector bbExtends2(10, 10, 3);
                                
                                bbOrigin -= bbExtends / 2;
                                
                                
                                FVector one = bbOrigin;
                                FVector two = bbOrigin;
                                
                                two.X += bbExtends.X;
                                
                                FVector three = bbOrigin;
                                three.X += bbExtends.X;
                                three.Y += bbExtends.Y;
                                FVector four = bbOrigin;
                                four.Y += bbExtends.Y;
                                FVector five = one;
                                five.Z += bbExtends.Z;
                                FVector six = two;
                                
                                six.Z += bbExtends.Z;
                                
                                FVector seven = three;
                                seven.Z += bbExtends.Z;
                                FVector eight = four;
                                eight.Z += bbExtends.Z;
                                
                                FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
                                if (W2S(one, &s1) && W2S(two, &s2)
                                    && W2S(three, &s3) && W2S(four, &s4)
                                    && W2S(five, &s5) && W2S(six, &s6)
                                    
                                    && W2S(seven, &s7) && W2S(eight, &s8)
                                    
                                    ){
                                    DrawLine(HUD, s1, s2, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s2, s3,1.3f, COLOR_RED);
                                    DrawLine(HUD, s3, s4, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s4, s1, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s5, s6, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s6, s7, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s7, s8,1.3f, COLOR_RED);
                                    DrawLine(HUD, s8, s5, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s1, s5, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s2, s6, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s3, s7, 1.3f, COLOR_RED);
                                    DrawLine(HUD, s4, s8, 1.3f, COLOR_RED);
                                }
                            }
                        }}
                }
            }
            GrenadeBase.clear();
        }
        
    }
    g_LocalPlayer = localPlayer;
    g_PlayerController = localPlayerController;
}
   
 

    void *(*oProcessEvent)(UObject *pObj, UFunction *pFunc, void *pArgs);
void *hkProcessEvent(UObject *pObj, UFunction *pFunc, void *pArgs) {
    if (pFunc) {
        if (pFunc->GetFullName() == ("Function Engine.HUD.ReceiveDrawHUD") ){
            AHUD *pHUD = (AHUD *) pObj;
            if (pHUD) {
                auto Params = (AHUD_ReceiveDrawHUD_Params *) pArgs;
                if (Params) {
                    RenderESP(pHUD, Params->SizeX, Params->SizeY);
                    screenWidth = Params->SizeX;
                    screenHeight = Params->SizeY;
                }
            }
        }
    }
    if (ModSkinn && KillMessage){
        const char *pBroadCast = ("Function ShadowTrackerExtra.STExtraPlayerController.BroadcastFatalDamageToClientWithStruct");
        if (pFunc) {
            if (pFunc->GetFullName() == pBroadCast) {
                ASTExtraPlayerController *pController = (ASTExtraPlayerController *) pObj;
                if (pController) {
                    auto Params = (ASTExtraPlayerController_BroadcastFatalDamageToClientWithStruct_Params *) pArgs;
                    if (Params) {
                        if (g_PlayerController->PlayerKey == Params->FatalDamageParameter.CauserKey && !g_PlayerController->STExtraBaseCharacter->CurrentVehicle && g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated){
                            Params->FatalDamageParameter.CauserClothAvatarID = new_Skin.XSuits;
                            //M416
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.M416_1;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.AKM;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Scar;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.M16A4;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Groza;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "FAMAS")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Famas;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.AUG;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.QBZ;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.M762;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "ACE32")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.ACE32;
                            }
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.UZI;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.UMP;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Vector;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Thompson;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "P90")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.P90;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Bizon;
                            }
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.K98;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.M24;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.AWM;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.M249;
                            }
                            
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Machete")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Machete;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AMR")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.AMR;
                            }
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mk14")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.MK14;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini14")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Mini14;
                            }
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP-28")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.DP28;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MG3")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.MG3;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Honey")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.Honey;
                            }
                            
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.S12K;
                            }
                            
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.S1897;
                            }
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DBS")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.DBS;
                            }
                            
                            
                           
                            
                            if(strstr(g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
                                Params->FatalDamageParameter.CauserWeaponAvatarID = new_Skin.S1897;
                            }
                        }
                    }
                }
            }
        }
    }
    if (hidename){
        const char *hidenames = ("Function ShadowTrackerExtra.STExtraPlayerController.BroadcastFatalDamageToClientWithStruct");
        if (pFunc) {
            if (pFunc->GetFullName() == hidenames) {
                ASTExtraPlayerController *pController = (ASTExtraPlayerController *) pObj;
            }
        }
        if (string(pFunc->GetFullName().c_str()).find("UpdateVolleyShootParameters") != string::npos) {
            auto params = (USTExtraShootWeaponComponent_UpdateVolleyShootParameters_Params*) pArgs;
            
            ASTExtraPlayerCharacter* Target = GetTargetForAimBotByFOV();
            if (Target) {
                bool triggerOk = true;
                
                // Determine if aimbot should trigger based on selected aim mode
                if (chedoaim == 1) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (chedoaim == 2) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (chedoaim == 3) { // IsBothaim
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (chedoaim == 4) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
                
                
                if (triggerOk) {
                    FVector targetAimPos = Target->GetBonePos("Head", {});//aimpos();//  speed
                         if(Istargets == 1){//nick
                            targetAimPos.Z -= 0.5f;
                        }else if(Istargets == 2){//nick
                            targetAimPos.Z -= 30.0f;
                        } else if (Istargets == 3){//root
                            targetAimPos.Z -= 45.0f;
                        }
                    
                    
                    
                    auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 &&
                            (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                    
                                    if (ShootWeaponEntityComponent) {
                                        ASTExtraVehicleBase* CurrentVehicle = Target->CurrentVehicle;
                                        
                                        if (CurrentVehicle) {
                                            // Adjust for vehicle velocity
                                            FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                                            float dist = g_LocalPlayer->GetDistanceTo(Target);
                                            auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                                            
                                            targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos,
                                                                                                UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                        } else {
                                            // Adjust for player movement velocity
                                            FVector Velocity = Target->GetVelocity();
                                            float dist = GetD3DDistance(g_PlayerController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos);
                                            auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                                            
                                            targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos,
                                                                                                UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                        }
                                    }
                                    
                                    if (ConfigSilentAimEnable && targetAimPos != FVector::Zero()) {
                                        // Adjust bullet rotation based on target's final aim position
                                        FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_PlayerController->PlayerCameraManager->CameraCache.POV.Location);
                                        params->BulletRot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                                    }
                                }
                            }
                        }
                    }
                    
                }
            }
        }
    }
    return oProcessEvent(pObj, pFunc, pArgs);
}



//====================.END DEADBOX BETA.====================

void  *RTL_language(){
    
    auto MAIN =(FUObjectArray *) (obbbbl());
    auto gobjects = MAIN->ObjObjects;
    for (int i=0;i< gobjects.Num(); i++)
        if (auto obj = gobjects.GetByIndex(i)) {
            
            if(obj->IsA(AHUD::StaticClass())) {
                auto HUD = (AHUD *) obj;
                int its = 76;
                auto VTable = (void**)HUD->VTable;
                if (VTable && ( VTable[its] != hkProcessEvent)) {
                    oProcessEvent = decltype(oProcessEvent)(VTable[its]);
                    VTable[its] = (void *) hkProcessEvent;
                }
            }
            if(obj->IsA(ASTExtraPlayerController::StaticClass())) {
                auto HUD = (ASTExtraPlayerController *) obj;
                int its = 76;
                auto VTable = (void**)HUD->VTable;
                if (VTable && ( VTable[its] != hkProcessEvent)) {
                    oProcessEvent = decltype(oProcessEvent)(VTable[its]);
                    VTable[its] = (void *) hkProcessEvent;
                }
            }
        }
    return 0;
}

#define hook GaYSSS9aAL



+ (void)load
{
        FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
          sleep(1);
    }
    
    
    UObject::GUObjectArray = (FUObjectArray *) (obbbbl());
    
    while (!UObject::GUObjectArray) {
    UObject::GUObjectArray = (FUObjectArray *) (obbbbl());
          sleep(1);
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{

    
        //start load but not means language
          [self load1];
        
    });
}
+ (void)load1
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            RTL_language();
    });
}






void ColorPicker(const char* name, ImVec4 &color) {
    static ImVec4 backup_color;
    
    bool open_popup = ImGui::ColorButton((std::string(name) + std::string("##3b")).c_str(), color);
    if (open_popup) {
        ImGui::OpenPopup(name);
        backup_color = color;
    }
    if (ImGui::BeginPopup(name)) {
        ImGui::Spacing();
        ImGui::Text("Select Color");
        ImGui::Separator();
        ImGui::ColorPicker4("##picker", (float *) &color,ImGuiColorEditFlags_NoSidePreview |
                            ImGuiColorEditFlags_NoSmallPreview);
        ImGui::SameLine();
        
        ImGui::BeginGroup(); // Lock X position
        ImGui::Text("Current");
        ImGui::ColorButton("##current", color,
                           ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf,
                           ImVec2(60, 40));
        ImGui::Text("Previous");
        if (ImGui::ColorButton("##previous", backup_color, ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf, ImVec2(60, 40))) {
            color = backup_color;
        }
        ImGui::EndGroup();
        ImGui::EndPopup();
    }
}

void AddColorPicker(const char* name, ImVec4 &color, bool prd = false, bool* rainbow = nullptr, bool* pulse = nullptr, bool* dark = nullptr) {
    ImGuiColorEditFlags misc_flags = ImGuiColorEditFlags_AlphaPreview;
    static ImVec4 backup_color;
    bool open_popup = ImGui::ColorButton((std::string(name) + std::string(("##3b"))).c_str(), color, misc_flags);
    if (open_popup) {
        ImGui::OpenPopup(name);
        backup_color = color;
    }
    if (ImGui::BeginPopup(name)) {
        ImGui::Spacing();
        ImGui::Text(("%s"), std::string(name).c_str());
        ImGui::Separator();
        ImGui::ColorPicker4(("##picker"), (float *) &color,misc_flags | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview | ImGuiColorEditFlags_AlphaBar);
        ImGui::SameLine();
        ImGui::BeginGroup();
        ImGui::Text(("%s"),std::string(("Current")).c_str());
        ImGui::ColorButton(("##current"), color,ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf,ImVec2(60, 40));
        ImGui::Text(("%s"),std::string(("Previous")).c_str());
        if (ImGui::ColorButton(("##previous"), backup_color,ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf,ImVec2(60, 40)))color = backup_color;
        ImGui::EndGroup();
        if (prd) {
            if (rainbow) ImGui::Checkbox(("rainbow"), rainbow);
            if (pulse) ImGui::Checkbox(("pulse"), pulse);
            if (dark) ImGui::Checkbox(("dark"), dark);
        }
        ImGui::Spacing();
        ImGui::EndPopup();
    }
}

- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];

    _device = MTLCreateSystemDefaultDevice();
    _commandQueue = [_device newCommandQueue];

    if (!self.device) abort();

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;

    ImGui::StyleColorsDark();
    
    ImFontConfig font_config;
    font_config.PixelSnapH = false;
    font_config.OversampleH = 5;
    font_config.OversampleV = 5;
    font_config.RasterizerMultiply = 1.2f;

    static const ImWchar ranges[] =
    {
        0x0020, 0x00FF, // Basic Latin + Latin Supplement
        0x0400, 0x052F, // Cyrillic + Cyrillic Supplement
        0x2DE0, 0x2DFF, // Cyrillic Extended-A
        0xA640, 0xA69F, // Cyrillic Extended-B
        0xE000, 0xE226, // icons
        0,
    };

    NSString *fontPath = @"/System/Library/Fonts/Core/HelveticaNeue.ttc";

    
    mainfont =  io.Fonts->AddFontFromFileTTF(fontPath.UTF8String, 16.0f,NULL,io.Fonts->GetGlyphRangesVietnamese());

   

   
tab_icons = io.Fonts->AddFontFromMemoryTTF(clarityfont, sizeof(clarityfont), 15.0f, &font_config, ranges);

    logo = io.Fonts->AddFontFromMemoryTTF(clarityfont, sizeof(clarityfont), 21.0f, &font_config, ranges);

    tab_title = io.Fonts->AddFontFromMemoryTTF(PTRootUIBold, sizeof(PTRootUIBold), 19.0f, &font_config, ranges);
    tab_title_icon = io.Fonts->AddFontFromMemoryTTF(clarityfont, sizeof(clarityfont), 18.0f, &font_config, ranges);

    subtab_title = io.Fonts->AddFontFromMemoryTTF(PTRootUIBold, sizeof(PTRootUIBold), 15.0f, &font_config, ranges);

    combo_arrow = io.Fonts->AddFontFromMemoryTTF(combo, sizeof(combo), 9.0f, &font_config, ranges);

    // Our state
    ImVec4 clear_color = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);


    ImGui_ImplMetal_Init(_device);

    return self;
}


//+ (void)showChange:(BOOL)open
//{
//    MenDeal = open;
//}
//+ (BOOL)isMenuShowing {
//    return MenDeal;
//}


- (MTKView *)mtkView
{
    return (MTKView *)self.view;
}



- (void)loadView
{
    CGFloat w = [UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.width;
    CGFloat h = [UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.height;
    self.view = [[MTKView alloc] initWithFrame:CGRectMake(0, 0, w, h)];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.mtkView.device = self.device;
    self.mtkView.delegate = self;
    self.mtkView.clearColor = MTLClearColorMake(0, 0, 0, 0);
    self.mtkView.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0];
    self.mtkView.clipsToBounds = YES;


    

    
}


#pragma mark - Interaction



- (void)updateIOWithTouchEvent:(UIEvent *)event
{
    UITouch *anyTouch = event.allTouches.anyObject;
    CGPoint touchLocation = [anyTouch locationInView:self.view];
    ImGuiIO &io = ImGui::GetIO();
    io.MousePos = ImVec2(touchLocation.x, touchLocation.y);

    BOOL hasActiveTouch = NO;
    for (UITouch *touch in event.allTouches)
    {
        if (touch.phase != UITouchPhaseEnded && touch.phase != UITouchPhaseCancelled)
        {
            hasActiveTouch = YES;
            break;
        }
    }
    io.MouseDown[0] = hasActiveTouch;

   

    
}
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)drawInMTKView:(MTKView*)view
{
    
    
//    hideRecordTextfield.secureTextEntry = StreamerMode;
    
    
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize.x = view.bounds.size.width;
    io.DisplaySize.y = view.bounds.size.height;
    
    
    CGFloat framebufferScale = view.window.screen.nativeScale ?: UIScreen.mainScreen.nativeScale;
    io.DisplayFramebufferScale = ImVec2(framebufferScale, framebufferScale);
    io.DeltaTime = 1 / float(view.preferredFramesPerSecond ?: 60);
    
    id<MTLCommandBuffer> commandBuffer = [self.commandQueue commandBuffer];
    
    static ImVec4 active = to_vec4(158, 158, 158, 255);
    static ImVec4 inactive = to_vec4(66, 66, 66, 255);
    
    
    
    if (MenDeal == true) {
        [self.mtkView setUserInteractionEnabled:YES];
    } else if (MenDeal == false) {
        [self.mtkView setUserInteractionEnabled:NO];
    }
    
    
    
    MTLRenderPassDescriptor* renderPassDescriptor = view.currentRenderPassDescriptor;
    if (renderPassDescriptor != nil)
    {
        id <MTLRenderCommandEncoder> renderEncoder = [commandBuffer renderCommandEncoderWithDescriptor:renderPassDescriptor];
        [renderEncoder pushDebugGroup:@"ImGui Jane"];
        
        ImGui_ImplMetal_NewFrame(renderPassDescriptor);
        ImGui::NewFrame();
        
        ImFont* font = ImGui::GetFont();
        font->Scale = 15.f / font->FontSize;
        
        
        CGFloat x = (([UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.width) - 450) / 2;
        CGFloat y = (([UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.height) - 255) / 2;
        
        ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_FirstUseEver);
        
        
        
        
        
        
        
        
        const char *ngonngu[2] = {"English","Tiếng Việt"};
        
        
        
        
        if (MenDeal == true)
        {
            ImGui::SetNextWindowSize({ 520, 360 });
            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, { 0, 0 });
            
            ImGui::Begin("##hi", nullptr, ImGuiWindowFlags_NoDecoration); {
                
                ImGuiContext &g = *GImGui;
                if (g.NavWindow == NULL) {
                    MenDeal = !MenDeal;
                }
                
                auto draw = ImGui::GetWindowDrawList();
                auto pos = ImGui::GetWindowPos();
                auto size = ImGui::GetWindowSize();
                
                ImGuiStyle style = ImGui::GetStyle();
                
                draw->AddRectFilled(pos, ImVec2(pos.x + 144, pos.y + size.y), ImColor(24, 24, 26), style.WindowRounding, ImDrawFlags_RoundCornersLeft);
                
                
                draw->AddLine(ImVec2(pos.x + 144, pos.y + 1.5), ImVec2(pos.x + 144, pos.y + size.y - 1.5), ImColor(1.0f, 1.0f, 1.0f, 0.03f));
                
                for (int i = 0; i < 3; ++i) {
                    ImVec2 circle_center = ImVec2(pos.x + 20 + i * 40, pos.y + 18);
                    draw->AddCircleFilled(circle_center, 8.0f, tab_colors[i]);
                }
                
                //draw->AddText(tab_title_icon, 18.0f, ImVec2(pos.x + 20, pos.y + 11), ImColor(6, 249, 249), tab_icon);
                
                //draw->AddText(tab_title, 19.0f, ImVec2(pos.x + 40, pos.y + 11), ImColor(1.0f, 1.0f, 1.0f), tab_name);
                switch (tab) {
                    case rage:
                        
                        ImGui::SetCursorPos({ 8, 46 });
                        ImGui::BeginGroup(); {
                            if (elements::subtab(AR_language == 0? "Main" :   "Chính", subtab == general)) { subtab = general; }
                            if (elements::subtab(AR_language == 0? "Item" :   "Vật Phẩm", subtab == accuracy)) { subtab = accuracy; }
                            if (elements::subtab(AR_language == 0? "Aim" :   "Aimbot", subtab == exploits)) { subtab = exploits; }
                            if (elements::subtab(AR_language == 0? "Skin" :   "Trang Phục", subtab == _general)) { subtab = _general; }
                            if (elements::subtab(AR_language == 0? "Memory" :   "Memory", subtab == advanced)) { subtab = advanced; }
                        }
                        
                        
                        ImGui::EndGroup();
                }
                
                switch (subtab) {
                    case general:
                        ImGui::SetCursorPos({ 154, 12 });
                        e_elements::begin_child("Main", ImVec2(175, 340)); {
                            
                            
                            ImGui::Combo(AR_language == 0? "Choose language" :   "Chọn Ngôn Ngữ", &AR_language, ngonngu, IM_ARRAYSIZE(ngonngu));
                            
                            ImGui::Checkbox(AR_language == 0? "Enemies" :   "Số Địch", &iAwareText);
                            ImGui::TableNextColumn();
                            ImGui::Checkbox(AR_language == 0? "Line" :   "Đường Kẻ", &DrawPlayerLine);
                            ImGui::TableNextColumn();
                            ImGui::Checkbox(AR_language == 0? "Health" :   "Máu Địch", &IsPlayerHP);
                            ImGui::TableNextColumn();
                            ImGui::Checkbox(AR_language == 0? "Bone" :   "Vẽ Xương", &IsBone);
                            ImGui::TableNextColumn();
                            ImGui::Checkbox(AR_language == 0? "Name" :   "Tên Địch", &IsPLayerName);
                            ImGui::TableNextColumn();
                            ImGui::Checkbox(AR_language == 0? "Distance" :   "Khoản Cách", &iSPLAYERDIS);
                            ImGui::TableNextColumn();
                            ImGui::Checkbox(AR_language == 0? "Draw Box" :   "Vẽ Hộp", &Is3Dbox);
                            ImGui::TableNextColumn();
                            ImGui::Checkbox(AR_language == 0? "Skip AI Bot" :   "Bỏ Qua Bot", &Igronebot);
                            
                            
                            
                            
                        }
                        e_elements::end_child();
                        
                        ImGui::SetCursorPos({ 340, 12 });
                        e_elements::begin_child(AR_language == 0? "Setting ESP" :   "Cài Đặt ESP", ImVec2(175, 340)); {
                            
                            
                            const char* style_names[4] = { "Style 1", "Style 2", "Style 3", "Style 4" };
                            ImGui::Combo(AR_language == 0? "Style ESP" :   "Phong Cách ESP", &Styleesp, style_names, IM_ARRAYSIZE(style_names));
                            
                            ImGui::Checkbox(AR_language == 0? "Enable iPad View" :   "Bật iPad View", &ipadview);
                            
                            ImGui::SliderFloat("IPad View", &dorong, 40.0f, 165.0f);
                            
                            
                            ImGui::Checkbox(AR_language == 0? "Warring 360" :   "Cảnh Báo 360", &IsWarring);
                            ImGui::TableNextColumn();
                            ImGui::SliderFloat(AR_language == 0? "Radius" :   "Bán Kính", &alphawarring, 40.0f, 360.0f);
                            
                            
                            
                            ImGui::Checkbox(ENCRYPT("Ver Information"), &watermark);
                            
                            
                        }
                        e_elements::end_child();
                        //SUB TAB 2
                        break;
                    case accuracy:
                        ImGui::SetCursorPos({ 154, 12 });
                        e_elements::begin_child(AR_language == 0? "Player Item" :   "Vật Phẩm Người", ImVec2(175, 165)); {
                            
                            
                            ImGui::Checkbox(AR_language == 0? "Infor Match" :   "Thông tin trận đấu", &thongtin);
                            ImGui::Checkbox(AR_language == 0? "Player Wepon" :   "Vũ Khí Địch", &IsPlayerWEP);
                            ImGui::Checkbox(AR_language == 0? "Radar" :   "Radar", &playerradar);
                            ImGui::Checkbox(AR_language == 0? "Boom Warning" :   "Cảnh Báo Boom", &IsGRWAR);
                            ImGui::Checkbox(AR_language == 0? "LootBox" :   "LootBox", &IsLootBox);
                            ImGui::Checkbox(AR_language == 0? "Lv 3" :   "Lv 3", &IsLV3);
                            
                            
                        }
                        e_elements::end_child();
                        
                        ImGui::SetCursorPos({ 340, 12 });
                        e_elements::begin_child(AR_language == 0? "Gun item" :   "Vật Phẩm Súng", ImVec2(175, 165)); {
                            
                            ImGui::Checkbox(AR_language == 0? "Rifle" :   "Súng trường", &IsAR);
                            ImGui::Checkbox(AR_language == 0? "SMG" :   "Súng SMG", &IsSMG);
                            ImGui::Checkbox(AR_language == 0? "Sniper" :   "Súng ngắm", &IsSniper);
                            ImGui::Checkbox(AR_language == 0? "Shotgun" :   "Shotgun", &IsShotgun);
                            ImGui::Checkbox(AR_language == 0? "Machine Gun" :   "Machine Gun", &IsSungmay);
                            ImGui::Checkbox(AR_language == 0? "Pistol" :   "Pistol", &IsLuc);
                            
                            
                        }
                        e_elements::end_child();
                        
                        ImGui::SetCursorPos({ 154, 180 });
                        e_elements::begin_child(AR_language == 0? "Accessory" :   "Phụ Kiện Súng", ImVec2(175, 170)); {
                            
                            ImGui::Checkbox(AR_language == 0? "AirDrop" :   "Hòm thính", &IsAirDrop);
                            ImGui::Checkbox(AR_language == 0? "Scope" :   "Ống ngắm", &IsOngngam);
                            ImGui::Checkbox(AR_language == 0? "Bullet" :   "Tìm đạn", &IsAmmo);
                            
                            
                        }
                        e_elements::end_child();
                        
                        ImGui::SetCursorPos({ 340, 180 });
                        e_elements::begin_child(AR_language == 0? "Vehical" :   "Xe", ImVec2(175, 170)); {
                            
                            ImGui::Checkbox(AR_language == 0? "Search Vehlce" :   "Phương tiện", &IsVehcle);
                            ImGui::Checkbox(AR_language == 0? "Box Vechle" :   "Vẽ Hộp Xe", &IsboxVechle);
                            ImGui::Checkbox(AR_language == 0? "CarFuel" :   "Xăng Xe", &IsCarFuel);
                            ImGui::Checkbox(AR_language == 0? "CarHP" :   "Máu Xe", &IsCarHP);
                            
                        }
                        e_elements::end_child();
                        
                        //SubTab 3
                        
                        break;
                    case exploits:
                        
                        ImGui::SetCursorPos({ 154, 12 });
                        e_elements::begin_child("Swich", ImVec2(175, 340)); {
                            
                            ImGui::Checkbox(AR_language == 0? "Enable Aimbot" :   "Bật Aimbot", &AimbotStatus);
                            
                            ImGui::Checkbox(AR_language == 0? "BulletTrack (Risk)" :   "Đạn đuổi (Nguy hiểm)", &ConfigSilentAimEnable);
                            
                            ImGui::Checkbox(AR_language == 0? "Small Cross (Risk)" :   "Tâm nhỏ (Nguy hiểm)", &tamnho);
                            
                            ImGui::Checkbox(AR_language == 0? "Skip Knock" :   "Bỏ Qua Knock", & isAimKnocked);
                            
                            const char *chedoaimm[5] = {"Aim Look", "Shoot To Aim", "Auto Aim Scope", "Shoot To Aim Scope","Auto Aim"};
                            ImGui::Combo(AR_language == 0? "Aimbot Mode" :   "Chế Độ Aim", &chedoaim, chedoaimm, IM_ARRAYSIZE(chedoaimm));
                            
                            
                            
                            const char *targets[4] = {"Head", "Neck", "Body", "Belly"};
                            ImGui::Combo(AR_language == 0? "Target" :   "Vị Trí Aim", &Istargets,targets, IM_ARRAYSIZE(targets));
                            
                            
                        }
                        e_elements::end_child();
                        
                        ImGui::SetCursorPos({ 340, 12 });
                        e_elements::begin_child(AR_language == 0? "Settings Aim" :   "Cài Đặt Aim", ImVec2(175, 340)); {
                            
                            ImGui::Checkbox(AR_language == 0? "Show Fov :" :   "Hiện Vòng Fov :", &IsFov);
                            
                            ImGui::SliderFloat("Fov", &IsfovSlider, 0.0f, 500.0f);
                            
                            
                            ImGui::SliderFloat(AR_language == 0? "Distance Aim" :   "Khoảng Cách Aim", &IsDistance, 0.0f, 300.0f);
                            
                            
                            
                            ImGui::SliderFloat(AR_language == 0? "Macro" :   "Hỗ Trợ Ghìm", &IsAimBotRecc, 0.0f, 2.074f);
                            
                            
                            
                            ImGui::SliderFloat(AR_language == 0? "Aim Speed" :   "Tốc Độ Aim", &AimSmooth, 1.0f, 10.0f,"%.1f" );
                            
                            
                        }
                        e_elements::end_child();
                        
                        
                        //SubTab 4
                        
                        break;
                    case _general:
                        
                        ImGui::SetCursorPos({ 154, 12 });
                        e_elements::begin_child("Skin", ImVec2(360, 350)); {
                            
                            if (ImGui::Checkbox(AR_language == 0? "Enable Skin" :   "Bật Skin", &ModSkinn)){
                                
                                
                                //Đồ
                                preferences.Outfit =true ;
                                preferences.Face = true ;
                                preferences.Bagg = true ;
                                preferences.Helmett = true;
                                preferences.Emote = true;
                                preferences.Parachute= true ;
                                preferences.Fac= true ;
                                preferences.Hieuungbay= true ;
                                
                                //Súng
                                preferences.M416 = true ;
                                preferences.AKM = true ;
                                preferences.SCARL = true ;
                                preferences.M762 = true ;
                                preferences.GROZA = true ;
                                preferences.FAMAS = true ;
                                preferences.AUG = true ;
                                preferences.QBZ = true ;
                                preferences.Honey = true ;
                                preferences.M16 = true ;
                                preferences.ACE32 = true ;
                                preferences.KAR98 = true ;
                                preferences.M24 = true ;
                                preferences.AWM = true ;
                                preferences.AMR = true ;
                                preferences.MK14 = true ;
                                preferences.MINI14 = true ;
                                preferences.DP28 = true ;
                                preferences.MG3 = true ;
                                preferences.M249 = true ;
                                preferences.UZI = true ;
                                preferences.UMP = true ;
                                preferences.TOMMY = true ;
                                preferences.P90 = true ;
                                preferences.VECTOR = true ;
                                preferences.BIZON = true ;
                                preferences.S1897 = true ;
                                preferences.DBS = true ;
                                preferences.S12K = true ;
                                preferences.Machete = true ;
                                preferences.PAN = true ;
                                
                                //Xe
                                preferences.Dacia = true ;
                                preferences.UAZ = true ;
                                preferences.CoupeRB = true ;
                                preferences.Moto = true ;
                                preferences.BigFoot = true ;
                                preferences.Mirado = true ;
                                preferences.Buggy = true ;
                                preferences.RZR = true ;
                                preferences.MiniBus = true ;
                                preferences.Boat = true ;
                                
                                
                            };
                            
                            ImGui::Checkbox(AR_language == 0? "Kill Message" :   "Thông Báo Diệt", &KillMessage);
                            
                            ImGui::Checkbox(AR_language == 0? "Dead Box" :   "Hòm Xác", &DeadBox);
                            
                            ImGui::Checkbox(AR_language == 0? "Hide Name" :   "Ẩn Tên", &hidename);
                            
                            
                            
                            
                            if(ImGui::Button("Quick select 1")) {
                                //Đồ
                                preferences.Config.Skin.XSuits = 8;
                                preferences.Config.Skin.M416 = 10;
                                preferences.Config.Skin.AKM = 10;
                                preferences.bag = 3;
                                preferences.helmet = 1;
                                
                            }
                            
                            ImGui::SameLine();
                            
                            if(ImGui::Button("Quick select 2")) {
                                preferences.Config.Skin.XSuits = 35;
                                preferences.Config.Skin.M416 = 9;
                                preferences.Config.Skin.AKM = 11;
                                preferences.bag = 13;
                                preferences.helmet = 10;
                            }
                            ImGui::SameLine();
                            
                            if(ImGui::Button("Quick select 3")) {
                                preferences.Config.Skin.XSuits = 15;
                                preferences.Config.Skin.M416 = 8;
                                preferences.Config.Skin.AKM = 10;
                                preferences.bag = 12;
                                preferences.helmet = 1;
                                
                            }
                        
                            
                            
                            
                            
                            
                            
                            const float buttonWidth = (ImGui::GetContentRegionAvail().x - ImGui::GetStyle().ItemSpacing.x * 2) / 3;
                            ImGui::BeginGroup();
                            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 5.0f);
                            ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 0 ? active : inactive);
                            if (ImGui::Button(AR_language == 0? "Player" :   "Mod Người", ImVec2(buttonWidth, 0)))
                                Settings::Tab = 0;
                            ImGui::SameLine();
                            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + ImGui::GetStyle().ItemSpacing.x);
                            ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 1 ? active : inactive);
                            if(ImGui::Button(AR_language == 0? "Weapons" :   "Mod Súng", ImVec2(buttonWidth, 0)))
                                Settings::Tab = 1;
                            ImGui::SameLine();
                            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + ImGui::GetStyle().ItemSpacing.x);
                            ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 2 ? active : inactive);
                            if(ImGui::Button(AR_language == 0? "Vehicles" :   "Mod Xe", ImVec2(buttonWidth, 0)))
                                Settings::Tab = 2;
                            ImGui::PopStyleVar();
                            ImGui::PopStyleColor(3);
                            ImGui::EndGroup();
                            
                            if (ModSkinn){
                                //Player
                                if (Settings::Tab == 0) {
                                    if (ImGui::BeginTable("##ModSkin", 2, ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersInner)) {
                                        
                                        ImGui::TableSetupColumn("Name", ImGuiTableColumnFlags_WidthStretch);
                                        ImGui::TableSetupColumn("Skin ", ImGuiTableColumnFlags_WidthStretch);
                                        ImGui::TableHeadersRow();
                                        
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text(AR_language == 0? "Outfit" :   "Trang Phục");
                                        ImGui::TableNextColumn();
                                        if (ImGui::InputInt("##Suit", &preferences.Config.Skin.XSuits)) {
                                            if (prevXSuits != preferences.Config.Skin.XSuits) {
                                                start = std::chrono::high_resolution_clock::now();
                                                callFunction = true;
                                                prevXSuits = preferences.Config.Skin.XSuits;
                                            }
                                        }
                                        
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text(AR_language == 0? "Face" :   "Mặt");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##face", &preferences.Config.Skin.XSuits);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text(AR_language == 0? "Bag" :   "Balo");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##bag", &preferences.bag);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text(AR_language == 0? "Helmet" :   "Mũ");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##helmet", &preferences.helmet);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text(AR_language == 0? "Emote" :   "Hoạt Ảnh");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##emote", &ModEmote1);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text(AR_language == 0? "Parachute" :   "Dù");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Parachute", &preferences.Config.Skin.Parachute);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text(AR_language == 0? "Fac" :   "Dù");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Fac", &preferences.Config.Skin.Fac);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text(AR_language == 0? "Fly Effect" :   "Hiệu Ứng Bay");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Hieuungbay", &preferences.Config.Skin.Hieuungbay);
                                        //ImGui::TableNextColumn();
                                        
                                        ImGui::EndTable();
                                    }
                                }
                                if (Settings::Tab == 1) {
                                    if (ImGui::BeginTable("##ModGun", 2, ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersInner)) {
                                        
                                        ImGui::TableSetupColumn("Name");
                                        ImGui::TableSetupColumn("Skin");
                                        ImGui::TableHeadersRow();
                                        ImGui::TableNextRow();
                                        
                                        
                                        ImGui::TableNextColumn();
                                        ImGui::Text("M416");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##m4", &preferences.Config.Skin.M416);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("AKM");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##ak", &preferences.Config.Skin.AKM);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("SCAR-L");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##scar", &preferences.Config.Skin.Scar);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("M762");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##M762", &preferences.Config.Skin.M762);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("GROZA");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##GR", &preferences.Config.Skin.Groza);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("FAMAS");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##FA", &preferences.Config.Skin.Famas);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("AUG");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##AUG", &preferences.Config.Skin.AUG);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("QBZ");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##QBZ", &preferences.Config.Skin.QBZ);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("Honey");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Honey", &preferences.Config.Skin.Honey);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("M16A4");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##M16A4", &preferences.Config.Skin.M16A4);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("ACE32");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##ACE", &preferences.Config.Skin.ACE32);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("Kar98-k");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##rak", &preferences.Config.Skin.K98);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("M24");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##M24", &preferences.Config.Skin.M24);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("AWM");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##AWM", &preferences.Config.Skin.AWM);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("AMR");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##AMR", &preferences.Config.Skin.AMR);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("MK14");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##MK14", &preferences.Config.Skin.MK14);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("MINI14");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##MINI14", &preferences.Config.Skin.MINI14);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("DP-28");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##ra6k", &preferences.Config.Skin.DP28);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("MG3");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##mg33", &preferences.Config.Skin.MG3);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("M249");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##M24g", &preferences.Config.Skin.M249);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("UZI");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##UZI", &preferences.Config.Skin.UZI);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("UMP");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##UNP", &preferences.Config.Skin.UMP);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("Thompson");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Thompson", &preferences.Config.Skin.Thompson);
                                        ImGui::TableNextColumn();
                                        
                                       
                                        
                                        
                                        ImGui::Text("P90");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##P90", &preferences.Config.Skin.P90);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("Vector");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Vector", &preferences.Config.Skin.Vector);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("Bizon");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##M24yg", &preferences.Config.Skin.Bizon);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("S1897");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##s1897", &preferences.Config.Skin.S1897);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("DBS");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##DBS", &preferences.Config.Skin.DBS);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("S12K");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##S12K", &preferences.Config.Skin.S12K);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("Machete");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Machete", &preferences.Config.Skin.Machete);
                                        ImGui::TableNextColumn();
                                        
                                        ImGui::Text("Pan");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##M24ygy", &preferences.Config.Skin.Pan);
                                        ImGui::EndTable();
                                    }
                                }
                                
                                if (Settings::Tab == 2) {
                                    if (ImGui::BeginTable("##Modcar", 2, ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersInner)) {
                                        
                                        ImGui::TableSetupColumn("Name", ImGuiTableColumnFlags_WidthStretch);
                                        ImGui::TableSetupColumn("Skin ", ImGuiTableColumnFlags_WidthStretch);
                                        ImGui::TableHeadersRow();
                                        
                                        
                                        
                                        ImGui::TableNextColumn();
                                        ImGui::Text("Dacia");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##dacia", &preferences.Config.Skin.Dacia);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("Coupe RB");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##coupe", &preferences.Config.Skin.CoupeRP);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        
                                        ImGui::Text("UAZ");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##uaz", &preferences.Config.Skin.UAZ);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("MotoBike");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##moto", &preferences.Config.Skin.Moto);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("BigFoot");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Bigfoot", &preferences.Config.Skin.Bigfoot);
                                        ImGui::TableNextColumn();
                                        
                                        
                                        ImGui::Text("Mirado");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##OMirado", &preferences.Config.Skin.Mirado);
                                        
                                        
                                        ImGui::TableNextColumn();
                                        ImGui::Text("Buggy");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##Buggy", &preferences.Config.Skin.Buggy);
                                        
                                        
                                        ImGui::TableNextColumn();
                                        ImGui::Text("RZR");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##RZR", &preferences.Config.Skin.RZR);
                                        
                                        
                                        
                                        
                                        ImGui::TableNextColumn();
                                        ImGui::Text("MiniBus");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##miniB", &preferences.Config.Skin.MiniBus);
                                        
                                        
                                        ImGui::TableNextColumn();
                                        ImGui::Text("PG-117");
                                        ImGui::TableNextColumn();
                                        ImGui::InputInt("##bg77", &preferences.Config.Skin.Boat);
                                        
                                        ImGui::EndTable();
                                    }
                                }
                            }//
                            
                            
                        }
                        e_elements::end_child();
                        
                        //SubTab 5
                        
                        break;
                    case advanced:
                        
                        ImGui::SetCursorPos({ 154, 12 });
                        e_elements::begin_child("Swich", ImVec2(175, 340)); {
                            
                            ImGui::Checkbox("Fly", & IsFly);
                            
//                            ImGui::Checkbox("GodMode", & GodMode);
                            
                            ImGui::Checkbox("Hit-X", & IsHitXPL);
                            
                            ImGui::Checkbox("Fast Shoot", &IsFastshoot);
                            
                            ImGui::Checkbox(AR_language == 0? "Fast Bullet" :   "Đạn Nhanh", &IsFastBullet);
                            
                            ImGui::Checkbox("Jump", &IsJump);
                            
                            ImGui::Checkbox("Auto Jump", &AUOTJUMPAN);
                            
                            ImGui::Checkbox(AR_language == 0? "Big Gun" :   "Súng Lớn", &modsungto);
                        }
                        e_elements::end_child();
                        
                        ImGui::SetCursorPos({ 340, 12 });
                        e_elements::begin_child("Setting ", ImVec2(175, 340)); {
                            
                            ImGui::Checkbox(AR_language == 0? "Spin 360" :   "Xoay 360", &xoay360);
                            
                            
                            ImGui::SliderFloat(AR_language == 0? "Spin Speed" :   "Tốc Độ Xoay", &spinspeed, 0.0f, 10.0f,"%.1f");
                            
                            ImGui::TextColored(ImColor(255, 255, 0), "NOTE: Fast Auto Ban !");
                            
                        }
                        e_elements::end_child();
                        
                        break;
                        
                }
                ImGui::End();
            }
            ImGui::PopStyleVar();
        }
        DrawWatermark();
        ImDrawList* draw_list = ImGui::GetForegroundDrawList();
        
        
        ImGui::Render();
        ImDrawData* draw_data = ImGui::GetDrawData();
        ImGui_ImplMetal_RenderDrawData(draw_data, commandBuffer, renderEncoder);
        
        [renderEncoder popDebugGroup];
        [renderEncoder endEncoding];
        
        [commandBuffer presentDrawable:view.currentDrawable];
        
    }
    
    
    [commandBuffer commit];
    
}


- (void)mtkView:(MTKView*)view drawableSizeWillChange:(CGSize)size
{
    
}

ImDrawList* getDrawList(){
    ImDrawList *drawList;
    drawList = ImGui::GetBackgroundDrawList();
    return drawList;
};



@end

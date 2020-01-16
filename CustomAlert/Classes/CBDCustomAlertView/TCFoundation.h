/*
 *  
 *  TongCheng
 *
 *  Created by ZhuYanJun on 11-6-6.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

//	==================================================== 系统枚举变量 =============================================

/*
 宏结构：#define def_Tag_xxxVC
 tag结构 模块 页面 顺序
         10  01  001
 酒店:10 景区:11 机票:12 航班动态:13 火车:14 攻略:15 公共:16
 页面:按照页面跳转的顺序自行排序。
 顺序:按照代码的调用自行排序。
 例如酒店查询中的一个alert的tag
 #define def_Tag_HotelSearchVC 1001001
 */

#define def_Tag_HotelSearchVC 1001001

//	==================================================== 车吧达 ===================================================

//    _imgUserHead
//    NSData * data = [NSData dataWithContentsOfURL:[NSURL URLWithString:@"http://10.1.156.4:9090/Test/Handler/Handler1.ashx"]];
//    UIImage *i = [UIImage imageWithData:data];
//    _imgUserHead.image = i;

//开启调试，
//上线前必须注释
#define DEBUGMODEL


#ifdef DEBUGMODEL

#define NSDebugLog(FORMAT, ...) fprintf(stderr,"%s:%d\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#define def_ShowLog             !YES //同程友盟的log
#define def_DebugTool            YES //debug工具（选择地址）

#else

#define NSDebugLog(FORMAT, ...) nil
#define def_ShowLog             NO
#define def_DebugTool           NO

#endif

#define  adjustsScrollViewInsets_NO(scrollView,vc)\
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
if ([UIScrollView instancesRespondToSelector:NSSelectorFromString(@"setContentInsetAdjustmentBehavior:")]) {\
[scrollView   performSelector:NSSelectorFromString(@"setContentInsetAdjustmentBehavior:") withObject:@(2)];\
} else {\
vc.automaticallyAdjustsScrollViewInsets = NO;\
}\
_Pragma("clang diagnostic pop") \
} while (0)

#define SelectKey_PWD           @"j7Eb526F0^_^0g4F"
#define RequestKey_PWD          @"EF290D911DD34E8E"

/*weakSelf && strongSelf*/
#define CBDWeakSelf(object) __weak __typeof(object) weakSelf = object;
#define CBDStrongSelf(object) __strong __typeof(object) strongSelf = object;

#define CBDWeakObject(object) __weak __typeof(object) weak##object = object;
#define CBDStrongObject(object) __strong __typeof(object) strong##object = weak##object;

//按压效果
#define def_color_DeepBlue                  RGBA(0,99,202,1)
#define def_color_Blue                  RGBA(68,138,255,1)
//深黑，用于标题，正文
#define color_Primary                   RGBA(0,0,0,1)

#define def_color_Secondary             RGBA(102,102,102,1)

#define customBlueColor                 RGBA(68,138,255,1)
#define WebLoadProgressColor      RGBA(17,200,118,1)


//周边游日历售罄
#define  def_CalenderShouqing @"售罄"



//	==================================================== 系统函数 ===================================================

#define LocalizedString(s)				NSLocalizedString(s,nil)
#define res_sOKButtonTitile				LocalizedString(@"确定")
#define NavitionBarBackgroundImg        @"bg_top"

#define RGBA(r,g,b,a)						[UIColor colorWithRed:(float)r/255.0f green:(float)g/255.0f blue:(float)b/255.0f alpha:a]

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)


#define CleanColor						[UIColor clearColor]
#define LocalizedString(s)				NSLocalizedString(s,nil)


#define iPhone4 SCREEN_SIZE_1
#define iPhone5 SCREEN_SIZE_2
#define iPhone6                     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750,1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6Plus                 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242,2208), [[UIScreen mainScreen] currentMode].size) : NO)
//弃用设备判断，使用屏幕判断 max/zyk
#define SCREEN_SIZE_1 CGSizeEqualToSize(CGSizeMake(320, 480), [[UIScreen mainScreen] bounds].size)
#define SCREEN_SIZE_2 CGSizeEqualToSize(CGSizeMake(320, 568), [[UIScreen mainScreen] bounds].size)
#define SCREEN_SIZE_3 CGSizeEqualToSize(CGSizeMake(375, 667), [[UIScreen mainScreen] bounds].size)
#define SCREEN_SIZE_4 CGSizeEqualToSize(CGSizeMake(414, 736), [[UIScreen mainScreen] bounds].size)

//X 或者XS
#define iPhoneXOrXS        CGSizeEqualToSize(CGSizeMake(375, 812), [[UIScreen mainScreen] bounds].size)

//XR 或者XR Max
#define iPhoneXROrMax      CGSizeEqualToSize(CGSizeMake(414, 896), [[UIScreen mainScreen] bounds].size)
//刘海屏
#define iPhoneWithBang   (iPhoneXOrXS || iPhoneXROrMax)


//头部广告高度
#define topAdsHeight (SCREEN_SIZE_4 ? 78 : (SCREEN_SIZE_3 ? 68 : 60))//(SCREEN_SIZE_4 ? 129 : (SCREEN_SIZE_3 ? 117 : 100))//
//首页广告图高度
#define IndexTopAdsHeight (SCREEN_SIZE_4 ? 160 : (SCREEN_SIZE_3 ? 138 : 123))

#define indexCenterLinkHeight (SCREEN_SIZE_4 ? 84 : (SCREEN_SIZE_3 ? 76 : 65))
#define indexCenterThreeLinkHeight (SCREEN_SIZE_4 ? 58 : (SCREEN_SIZE_3 ? 52 : 45))
//5 :200/2=100  >>>广告图算法
//6 :375/320=1.172  100x1.172=117
//6+:414/320=1.29   100x1.29=129
#define widgetWidth (SCREEN_SIZE_4 ? 220 : (SCREEN_SIZE_3 ? 55 : 0))

#define AppDelegateEntity ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define iOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define iOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] <= 7.0)
#define iOS71 ([[[UIDevice currentDevice] systemVersion] floatValue] < 8.0)
#define iOS10 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define iOS11 ([[[UIDevice currentDevice] systemVersion] doubleValue] >= 11.0)
#define iOS13 ([[[UIDevice currentDevice] systemVersion] doubleValue] >= 13.0)

#define TCAuthorizationStatusAuthorized (iOS8?kCLAuthorizationStatusAuthorizedWhenInUse:kCLAuthorizationStatusAuthorized)

#define SCREEN_WIDTH  [[UIScreen mainScreen] applicationFrame].size.width
#define SCREEN_HEIGHT [[UIScreen mainScreen] applicationFrame].size.height
#define SCREEN_NEWHEIGHT [UIScreen mainScreen].bounds.size.height
#define SCREEN_NEWWIDTH [UIScreen mainScreen].bounds.size.width
#define NAVIGATION_ITEM_HEIGHT    44

//系统版本等于
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch]==NSOrderedSame)
//系统版本大于
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch]==NSOrderedDescending)
//系统版本大于或等于
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch]!=NSOrderedAscending)
//系统版本小于
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch]==NSOrderedAscending)
//系统版本小于或等于
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch]!=NSOrderedDescending)
//系统版本
#define SYSTEM_VERSION                              ([[[UIDevice currentDevice] systemVersion] floatValue])

//	==================================================== 系统颜色 ===================================================

//	==================================================== 6.0系统颜色

//分段切换按钮描边
#define def_color_Tab_Border            RGBA(206,206,206,1)

//	===========================7.0系统颜色=========================

//cell默认和按下颜色
#define def_color_Cell_Down             RGBA(238,238,238,1)

//用于选中，成功提示
#define color_Green                     RGBA(35,190,174,1)
//绿色，用于二级btn选中框填充色
#define color_SelectGreen               RGBA(234,255,253,1)
//用于反白
#define color_White                     RGBA(255,255,255,1)
//用于大背景
#define color_Backgroud                 RGBA(237,240,245,1)
//	============================== 按钮色值 =====================
#define color_btn_Primary_BG                  RGBA(255,132,0,1)
#define color_btn_Primary_BG_Pressed          RGBA(255,102,0,1)
#define color_btn_Primary_BG_Disable          RGBA(204,204,204,1)
#define color_btn_Primary_BG_Unactive         RGBA(255,132,0,0.4)

#define color_btn_Secondary_BG                RGBA(255,255,255,1)
#define color_btn_Secondary_BG_Pressed        RGBA(238,238,238,1)
#define color_btn_Secondary_Border            RGBA(220,220,220,1)
#define color_btn_Secondary_BG_Disable        RGBA(204,204,204,1)

#define color_btn_Logout_BG                   RGBA(255,80,48,1)
#define color_btn_Logout_BG_Pressed           RGBA(236,60,28,1)

#define color_btn_red                          RGBA(239,83,80,1)
#define color_Line_Gary                          RGBA(227,227,227,1)


//	===========================7.0系统字体=========================

//深黑，用于标题，正文
#define font_XLarge                     [UIFont systemFontOfSize:24.f]
#define font_XLarge_Bold                [UIFont boldSystemFontOfSize:24.f]

#define font_Large                      [UIFont systemFontOfSize:20.f]
#define font_Large_Bold                 [UIFont boldSystemFontOfSize:20.f]

#define font_Title                      [UIFont systemFontOfSize:18.f]
#define font_Title_Bold                 [UIFont boldSystemFontOfSize:18.f]

#define font_List                       [UIFont systemFontOfSize:16.f]
#define font_List_Bold                  [UIFont boldSystemFontOfSize:16.f]

#define font_Info                       [UIFont systemFontOfSize:14.f]
#define font_Info_Bold                  [UIFont boldSystemFontOfSize:14.f]

#define font_Hint                       [UIFont systemFontOfSize:12.f]
#define font_Hint_Bold                  [UIFont boldSystemFontOfSize:12.f]

#define font_Xsmall                     [UIFont systemFontOfSize:11.f]
#define font_Xsmall_Bold                [UIFont boldSystemFontOfSize:11.f]


//	=================================================最新整理颜色==================================================
//字体颜色
//深黑，用于标题，正文
#define def_text_Primary                   RGBA(51,51,51,1)

//用于tab文字、二级文字
#define def_text_Secondary                 RGBA(102,102,102,1)

//用于说明文字、提示文案
#define def_text_hint                      RGBA(153,153,153,1)

//用于输入框默认提示
#define def_text_disable                   RGBA(204,204,204,1)

//用于反白
#define def_text_White                     RGBA(255,255,255,1)

//用于选中、成功提示
#define def_text_Blue                      RGBA(68,138,255,1)

//用于选中背景
#define def_text_Blue_Alpha           RGBA(68,138,255,0.2)

//橘色
#define def_color_Orange          RGBA(256,165,36,1)

//红色
#define def_color_Red                      RGBA(239,83,80,1)
//通告栏统一文字颜色
#define def_color_inform_text           RGBA(189, 123, 24, 1)
#define def_color_darkgray            RGBA(44,50,57,1)
#define def_color_darkBlack            RGBA(108,115,124,1)

//城市列表标签蓝色
#define def_color_labelBlue              RGBA(91, 152, 255, 1)
//城市列表标签绿色
#define def_color_labelGreen            RGBA(73, 199, 178, 1)

//通告栏统一背景颜色
#define def_color_inform_background  RGBA(255,246,208,1)
//用于链接色
#define def_text_Link                      RGBA(68,138,255,1)

//用于无结果
#define def_text_Null                      RGBA(182,187,190,1)

//用于公告、Tips文字
#define def_text_Tips                      RGBA(172,143,73,1)
#define def_text_Announcement                     RGBA(203, 145, 57, 1)

//用于前一天后一天等文字按压
#define def_text_Pressed                   RGBA(168,212,255,1)

//用于筛选文字
#define def_text_TabSift                   RGBA(128,156,187,1)

#define def_text_Black                     RGBA(34,34,34,1)

//用于发送验证码按钮颜色
#define def_TokenCode_Title                RGBA(57, 158, 217, 1)

//用于红包中手机专享置灰
#define def_RedWallet_BgCell               RGBA(135, 135, 135, 1)

//用于红包中使用限制标签
#define def_RedWallet_MarkCell               RGBA(116, 230, 223, 1)

//用于红包中使用限制标签边框
#define def_RedWallet_MarkBorder               RGBA(17, 200, 118, 1)

//用于汽车票订单详情页退票成功状态
#define def_BusOrderDetail_RefundSuccess  RGBA(55,210,161,1);

//用于登录注册placeHolder颜色
#define def_LogRegist_Placeholder       RGBA(242, 243, 243, 1)

//引导页按钮背景
#define def_GuideView_ButtonBG       RGBA(242, 91, 36, 1)

//汽车票车站位置背景
#define  def_LocalBG_Yellow          RGBA(255, 60, 0, 1)

//红包角标
#define  def_RedWallet_Orange          RGBA(255, 171, 4, 1)

#define  def_tableView_SeparatorColor RGBA(204,204,204,0.5)
//==============================================背景颜色==============================================
//用于导航栏
#define def_BG_Blue                        RGBA(68,138,255,1)

//用于标签栏
#define def_BG_TabBarSelected                 RGBA(68,138,255,1)
#define def_BG_TabBarNormal                    RGBA(133 ,188,248,1)

//白色
#define def_BG_White                        RGBA(255,255,255,1)
//超级管家卡尊贵黑
#define def_color_StewardCardBlack          RGBA(0,20,63,1)

//Blue按压色
#define def_BG_Blue_Pressed                RGBA(0,122,239,1)
#define def_BG_Gray_Pressed                RGBA(238,238,238,1)

//用于cell展开后的背景色
#define def_BG_CellExpander                RGBA(239,242,247,1)

//用于蒙层色，50%纯黑
#define def_BG_Mask                        RGBA(0,0,0,0.7)

#define def_BG_lightMask                   RGBA(0,0,0,0.3)

//用于大背景色
#define def_BG_Bottom                      RGBA(243,246,251,1)
#define def_BG_Bottom_Code            RGBA(243,246,251,1)
#define def_BG_Bottom_Code1           RGBA(255,246,231,1)

//用于cell背景
#define def_BG_Cell                        RGBA(255,255,255,1)

//用于cell按压色
#define def_BG_Cell_Pressed                RGBA(213,220,228,1)
#define def_BG_CollectionCell_Pressed      RGBA(241,244,248,1)

//用于公告、Tips背景
#define def_BG_Tips                        RGBA(255,249,222,1)
#define def_BG_Becces                        RGBA(190,204,229,1)
#define def_BG_Announcement                          RGBA(255, 246, 208, 1)

/*机场巴士专用*/
#define color_PLaneBus_Blue_Bg             RGBA(239,242,247,1)
#define color_PLaneBus_Bg                  RGBA(248,249,251,1)

//按钮layer边框颜色
#define def_LayerBorder_Bg                 RGBA(127,127,127,1)

//像素线,栅线
#define def_BG_Border                      RGBA(213,220,228,1)

//用于首页入口背景
#define def_homePage_entry_Bg               RGBA(225,230,236,1)

/*定制巴士专用*/
#define color_CityBus_Blue_Bg             RGBA(246,246,246,1)

//问题分类背景
#define color_QuestionClass_Bg             RGBA(222,228,231,1)

//红包加载图
#define color_RedBag_Loading             RGBA(178,185,195,1)
#define color_RedBag_LoadingSuccess             RGBA(17,200,118,1)

//机场接送色值修改
#define color_Plane_PlaceHolder    [UIColor colorWithHexString:@"#cccccc"];
#define color_Plane_select    [UIColor colorWithHexString:@"#000000"];

//	============================== 外部连接跳转 =====================
#define gotopage_Home                   @"Home"
#define gotopage_RedWallet              @"RedWallet"
#define gotopage_OrderDetail            @"OrderDetail"
#define gotopage_OrderList              @"OrderList"
#define gotopage_BusList                @"BusList"
#define gotopage_Detail                 @"Detail"
#define gotopage_OnlineTicketHome       @"OnlineTicketHome"
#define gotopage_TrainList              @"TrainList"
#define gotopage_TrainLogin             @"TrainLogin"
#define gotopage_GrabHome               @"GrabHome"
#define gotopage_Register12306          @"Register12306"
#define gotopage_Reset12306             @"Reset12306"
#define gotopage_PayAuthFeedback        @"PayAuthFeedback"
#define gotopage_HotelList             @"HotelList"
#define gotopage_LineList               @"LineList"
#define gotopage_Coupon                 @"Coupon"
#define gotopage_UserInfo               @"UserInfo"
#define gotopage_MiniProgram            @"OpenMiniProgram"
#define gotoPage_ProductDetail       @"ProductDetail"
#define gotoPage_CityWeather         @"CityWeather"
#define gotoPage_BusStationInfo       @"BusStationInfo"
#define gotoPage_TrainStationInfo       @"TrainStationInfo"
#define gotoPage_LocalCommodity       @"LocalCommodity"
#define gotoPage_Alert                     @"Alert"
#define gotoPage_Activity                 @"Activity"
#define gotoPage_Mine                     @"Mine"
#define gotoPage_TravelAssistant    @"TravelAssistant"
#define gotoPage_TravelAssistantAlert    @"TravelAssistantAlert"
#define gotoPage_AliPwdFreePay    @"AliPwdFreePay"
#define gotoPage_Suggest    @"Suggest"
#define gotoPage_HelpFeedBack    @"HelpFeedBack"
#define gotoPage_HelpFeedBackDetail    @"HelpFeedBackDetail"
#define gotoPage_FlightList        @"FlightList"
#define gotoPage_History       @"History"
#define gotoPage_ApplyList        @"ApplyList"
#define gotoPage_InvoiceApplyList        @"InvoiceApplyList"
//	============================== 无结果页面图片 =====================
#define noResult_NoData                 @"img_noresult"
#define noResult_NoNet                  @"img_network_disable"
#define noFlightResult_NoNet            @"icon-NOResult"
#define noResult_BusList                @"img_line_disable"
#define noResult_Common             @"img_NoOrder"
//	============================== 系统其他变量 =====================

//	============================== 火车车次列表 =====================
#define noResult_TrainList               @"img_noresult_train"
#define noResult_TrainNotNet             @"img_network_disable"

#define kWXAPP_ID     @"wx3909318230292e7d"
#define kWXAPP_SECRET @"6ddd663b51f60b88761878ee5bec426b"
#define aLiLogion     @"alislogin"




//	============================== 单例 =====================
// .h文件的实现
// ## : 连接字符串和参数
#define SingletonH(methodName) + (instancetype)shared##methodName;

// .m文件的实现
#if __has_feature(objc_arc) // 是ARC
#define SingletonM(methodName) \
static id _instace = nil; \
+ (id)allocWithZone:(struct _NSZone *)zone \
{ \
if (_instace == nil) { \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instace = [super allocWithZone:zone]; \
}); \
} \
return _instace; \
} \
\
- (id)init \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instace = [super init]; \
}); \
return _instace; \
} \
\
+ (instancetype)shared##methodName \
{ \
return [[self alloc] init]; \
} \
- (id)copyWithZone:(struct _NSZone *)zone \
{ \
return _instace; \
} \
\
- (id)mutableCopyWithZone:(struct _NSZone *)zone \
{ \
return _instace; \
}

#else // 不是ARC

#define SingletonM(methodName) \
static id _instace = nil; \
+ (id)allocWithZone:(struct _NSZone *)zone \
{ \
if (_instace == nil) { \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instace = [super allocWithZone:zone]; \
}); \
} \
return _instace; \
} \
\
- (id)init \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instace = [super init]; \
}); \
return _instace; \
} \
\
+ (instancetype)shared##methodName \
{ \
return [[self alloc] init]; \
} \
\
- (oneway void)release \
{ \
\
} \
\
- (id)retain \
{ \
return self; \
} \
\
- (NSUInteger)retainCount \
{ \
return 1; \
} \
- (id)copyWithZone:(struct _NSZone *)zone \
{ \
return _instace; \
} \
\
- (id)mutableCopyWithZone:(struct _NSZone *)zone \
{ \
return _instace; \
}

#endif



//
//  RequestSaveMemberDeviceIphone.h
//  CarBaDa
//
//  Created by zhang on 15/7/7.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "AppDelegate.h"
@interface RequestSaveMemberDeviceIphone : TCTRequestObject
@property (nonatomic,strong) NSString *AppId;
@property (nonatomic,strong) NSString *DeviceId;
@property (nonatomic,strong) NSString *DeviceName;
@property (nonatomic,strong) NSString *DeviceVer;
@property (nonatomic,strong) NSString *AppVer;
@property (nonatomic,strong) NSString *MemberId;
@property (nonatomic,strong) NSString *CityId;
@property (nonatomic,strong) NSString *CityName;
@property (nonatomic,strong) NSString *IsActivePush;
@property (nonatomic,strong) NSString *Token;
@property (nonatomic,strong) NSString *ChannelID;
@property (nonatomic,strong) NSString *APPType;
+(RequestSaveMemberDeviceIphone *)getDeviveInfoDic;
@end

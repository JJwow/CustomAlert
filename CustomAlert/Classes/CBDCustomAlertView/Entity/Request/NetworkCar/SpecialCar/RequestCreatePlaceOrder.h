//
//  RequestCreatePlaceOrder.h
//  CarBaDa
//
//  Created by mini on 2019/2/27.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestCreatePlaceOrder : TCTRequestObject

@property (nonatomic, strong) NSString *useFor; //7接站  8送站；9打车专车
@property (nonatomic, strong) NSString *dptType; //1 实时单  2 预约单
@property (nonatomic, strong) NSString *departTime;  // 出发时间
@property (nonatomic, strong) NSString *departCityId;  //出发城市ID
@property (nonatomic, strong) NSString *departCityName;  //出发城市
@property (nonatomic, strong) NSString *departure;  //出发地详细地址
@property (nonatomic, strong) NSString *depLongitude;  //出发地经度
@property (nonatomic, strong) NSString *depLatitude;  //出发地纬度
@property (nonatomic, strong) NSString *arrCityId;  //到达城市id
@property (nonatomic, strong) NSString *arrCityName;  //到达城市名称
@property (nonatomic, strong) NSString *destination;  //到达地详细地址
@property (nonatomic, strong) NSString *destLongitude;  //到达地经度
@property (nonatomic, strong) NSString *destLatitude;  //到达地纬度
@property (nonatomic, strong) NSString *memberId;  //
@property (nonatomic, strong) NSString *memberPhone;  //会员手机号
@property (nonatomic, strong) NSString *contactName;  //联系人
@property (nonatomic, strong) NSString *contactMobile;  //联系人电话
@property (nonatomic, strong) NSString *queryKey;  //资源接口返回的key
@property (nonatomic, strong) NSString *marketingId;  //营销id
@property (nonatomic, strong) NSString *stationType;  //2 火车站；3汽车站   不是必传
@property (nonatomic, strong) NSString *departCounty;  //出发地区县        不是必传
@property (nonatomic, strong) NSMutableArray *resourceList;  //
@property (nonatomic, strong) NSString *dptAdCode; //出发区域code
@property (nonatomic, strong) NSString *arrAdCode; //到达区域code

@end


@interface resourceList : NSObject
@property (nonatomic, strong) NSString *cartypeId; //车型id
@property (nonatomic, strong) NSString *brandId; //品牌id
@property (nonatomic, strong) NSString *priceCode; //运价类型编码
@property (nonatomic, strong) NSString *brandType; // 0 巴管；1同程 2 曹操   3 神州 4 首汽 5didi
@property (nonatomic, strong) NSString *carTypeCode; //车型编码
@property (nonatomic, strong) NSString *useType; //0 专车；1 出租车 3 平车
@property (nonatomic, strong) NSString *price; //车型编码
@property (nonatomic, strong) NSString *factPrice; //0 专车；1 出租车
@end

//
//  RequestCreateFixedOrder.h
//  CarBaDa
//
//  Created by mini on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"
#import "RequestCreatePlaceOrder.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCreateFixedOrder : TCTRequestObject

@property (nonatomic, strong) NSString *dptAdCode; //出发区域code
@property (nonatomic, strong) NSString *arrAdCode; //到达区域code
@property (nonatomic, strong) NSString *useFor; //7接站  8送站；9打车专车
@property (nonatomic, strong) NSString *dptType; //1 实时单  2 预约单
@property (nonatomic, strong) NSString *departTime;  // 出发时间
@property (nonatomic, strong) NSString *departure;  //出发地详细地址
@property (nonatomic, strong) NSString *depLongitude;  //出发地经度
@property (nonatomic, strong) NSString *depLatitude;  //出发地纬度
@property (nonatomic, strong) NSString *arrCityName;  //到达城市名称
@property (nonatomic, strong) NSString *destination;  //到达地详细地址
@property (nonatomic, strong) NSString *destLongitude;  //到达地经度
@property (nonatomic, strong) NSString *destLatitude;  //到达地纬度
@property (nonatomic, strong) NSString *price;  //一口价
@property (nonatomic, strong) NSString *factPrice;  //实收
@property (nonatomic, strong) NSString *brandId;  //会员id
@property (nonatomic, strong) NSString *memberId;  //
@property (nonatomic, strong) NSString *memberPhone;  //会员手机号
@property (nonatomic, strong) NSString *contactName;  //联系人
@property (nonatomic, strong) NSString *contactMobile;  //联系人电话
@property (nonatomic, strong) NSString *queryKey;  //资源接口返回的key
@property (nonatomic, strong) NSString *marketingId;  //营销id
@property (nonatomic, strong) NSString *flightNo;  //航班号
@property (nonatomic, strong) NSString *planDepTime;  //航班计划起飞时间 yyyy-MM-dd HH:mm:ss
@property (nonatomic, strong) NSString *depPortCode;  //起飞机场三字码
@property (nonatomic, strong) NSString *arrPortCode;  //降落机场三字码
@property (nonatomic, strong) NSString *depPortTerm;  //出发航站楼

@property (nonatomic, strong) NSMutableArray *resourceList;  //




@end

NS_ASSUME_NONNULL_END

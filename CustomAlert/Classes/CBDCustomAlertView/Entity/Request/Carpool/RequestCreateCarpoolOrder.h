//
//  RequestCreateCarpoolOrder.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/4/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "Requestcreatebusorder.h"
NS_ASSUME_NONNULL_BEGIN

@interface RequestCreateCarpoolOrder : TCTRequestObject

@property (nonatomic, copy) NSString *payAmount;//支付金额

@property (nonatomic, copy) NSString *dptLat;//出发纬度

@property (nonatomic, copy) NSString *dptLng;//出发经度

@property (nonatomic, copy) NSString *arrLat;//到达纬度

@property (nonatomic, copy) NSString *arrLng;//到达经度

@property (nonatomic, copy) NSString *dptGdLat;//出发高德纬度

@property (nonatomic, copy) NSString *dptGdLng;//出发高德经度

@property (nonatomic, copy) NSString *arrGdLat;//到达高德纬度

@property (nonatomic, copy) NSString *arrGdLng;//到达高德经度

@property (nonatomic, copy) NSString *arrAreaName;//到达区域

@property (nonatomic, copy) NSString *destination;//到达地

@property (nonatomic, copy) NSString *arrDetail;//到达详细地址

@property (nonatomic, copy) NSString *departure;//出发地

@property (nonatomic, copy) NSString *dptDetail;//出发详细地址

@property (nonatomic, copy) NSString *dptAreaName;//出发区域

@property (nonatomic, copy) NSString *price;//基础价

@property (nonatomic, copy) NSString *carPoolType;//拼单类型

@property (nonatomic, copy) NSString *mobileNo;//联系人手机

@property (nonatomic, copy) NSString *name;//联系人

@property (nonatomic, copy) NSString *couponAmount;//红包金额

@property (nonatomic, copy) NSString *couponCode;//红包码

@property (nonatomic, copy) NSString *memberId;//用户id

@property (nonatomic, copy) NSString *peoples;//人数

@property (nonatomic, copy) NSString *remarkTips;//标签

@property (nonatomic, copy) NSString *serviceType;//服务类型

@property (nonatomic, copy) NSString *useTime;//2019-03-28 14:02 用车时间

@property (nonatomic, copy) NSString *memberPhone;//会员手机

@property (nonatomic, copy) NSString *childCount;//儿童数

@property (nonatomic, copy) NSString *queryKey;//

@property (nonatomic, copy) NSString *userNote;//备注

@property (nonatomic, copy) NSString *flightNo;//航班号

@property (nonatomic, copy) NSString *marketingId;//营销id

@property (nonatomic, copy) NSString *areaId;//库存模式区域id

@property (nonatomic, copy) NSMutableArray *passengersInfo;//实名制乘客信息

@end

NS_ASSUME_NONNULL_END

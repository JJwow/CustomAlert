//
//  RequestGetResource.h
//  CarBaDa
//
//  Created by mini on 2019/2/26.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetResource : TCTRequestObject

@property (nonatomic, strong) NSString *dptCity; //出发城市名称
@property (nonatomic, strong) NSString *dptCityId; //出发城市ID
@property (nonatomic, strong) NSString *dptLng; //出发经度
@property (nonatomic, strong) NSString *dptLat; //出发纬度
@property (nonatomic, strong) NSString *arrCity; //到达城市
@property (nonatomic, strong) NSString *arrCityId; //到达城市id
@property (nonatomic, strong) NSString *arrLng; //到达经度
@property (nonatomic, strong) NSString *arrLat; //到达纬度
@property (nonatomic, strong) NSString *dptTime; //出发时间
@property (nonatomic, strong) NSString *dptType; //出发类型
@property (nonatomic, strong) NSString *memberId; //会员
@property (nonatomic, strong) NSString *lineType; //线路类型
@property (nonatomic, strong) NSString *estimateKey; //查询key
@property (nonatomic, strong) NSString *countyName; //区域
@property (nonatomic, strong) NSString *siteType; //站点类型
@property (nonatomic, strong) NSString *siteName; //站点名称
@property (nonatomic, strong) NSString *detailAddress; //地址详情
@property (nonatomic, strong) NSString *departure; //出发地详情
@property (nonatomic, strong) NSString *destination; //到达地详情
@property (nonatomic, strong) NSString *dptAdCode; //出发区域code
@property (nonatomic, strong) NSString *arrAdCode; //到达区域code

@end

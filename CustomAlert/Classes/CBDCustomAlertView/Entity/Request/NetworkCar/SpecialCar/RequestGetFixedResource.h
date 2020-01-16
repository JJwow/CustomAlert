//
//  RequestGetFixedResource.h
//  CarBaDa
//
//  Created by mini on 2019/10/18.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"
NS_ASSUME_NONNULL_BEGIN

@interface RequestGetFixedResource : TCTRequestObject

@property (nonatomic, strong) NSString *dptLng; //出发经度
@property (nonatomic, strong) NSString *dptLat; //出发纬度
@property (nonatomic, strong) NSString *arrCity; //到达城市
@property (nonatomic, strong) NSString *arrLng; //到达经度
@property (nonatomic, strong) NSString *arrLat; //到达纬度
@property (nonatomic, strong) NSString *dptTime; //出发时间
@property (nonatomic, strong) NSString *dptType; //出发类型
@property (nonatomic, strong) NSString *memberId; //会员
@property (nonatomic, strong) NSString *lineType; //线路类型
@property (nonatomic, strong) NSString *estimateKey; //查询key
@property (nonatomic, strong) NSString *flightNo; //航班号 接机必填(神州)
@property (nonatomic, strong) NSString *planDepTime; //航班计划起飞时间
@property (nonatomic, strong) NSString *arrPortCode; //降落机场三字码
@property (nonatomic, strong) NSString *dptAdCode; //出发区域code
@property (nonatomic, strong) NSString *arrAdCode; //到达区域code



@end

NS_ASSUME_NONNULL_END

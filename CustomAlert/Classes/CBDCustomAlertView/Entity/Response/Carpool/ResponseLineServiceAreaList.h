//
//  ResponseLineServiceAreaList.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "JSLocationObject.h"

NS_ASSUME_NONNULL_BEGIN

//@interface mapPointList : NSObject
//
//@property (nonatomic, strong) NSString *lng;//
//@property (nonatomic, strong) NSString *lat;//
//@property (nonatomic, strong) NSString *gdLng;//
//@property (nonatomic, strong) NSString *gdLat;//
//
//@end
//
//@interface serviceAreaList : NSObject
//
//@property (nonatomic,strong) NSString *regionId;//范围id
//@property (nonatomic,strong) NSMutableArray *mapPointList;//服务区域列表
//@property (nonatomic,strong) NSString *carAddFee;//包车附加费
//@property (nonatomic,strong) NSString *carPoolAddFee;//拼车附加费
//
//@property (nonatomic, strong) NSString *regionid;//
//@property (nonatomic, strong) NSString *regionType;//
//@property (nonatomic, strong) NSString *sort;//
//
//
//@end

@interface dptServiceAreaList : serviceAreaList

@end

@interface arrServiceAreaList : serviceAreaList

@end

@interface ResponseLineServiceAreaList : TCTResponseObject

@property (nonatomic, strong) NSString *tips;//
@property (nonatomic, strong) NSMutableArray *serviceAreaList;//传入cityname展示此范围
@property (nonatomic, strong) NSMutableArray *dptServiceAreaList;//出发城市范围
@property (nonatomic, strong) NSMutableArray *arrServiceAreaList;//到达城市范围

@end

NS_ASSUME_NONNULL_END

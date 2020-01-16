//
//  ResponseGetCommendlLocation.h
//  CarBaDa
//
//  Created by mini on 2019/5/15.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetCommendlLocation : NSObject
@property (nonatomic, strong) NSString *isSuccess;
@property (nonatomic, strong) NSString *limitTips; //限制区域文案
@property (nonatomic, strong) NSMutableArray *locationList;
@end



@interface locationList : NSObject
@property (nonatomic, strong) NSString *locationName; //推荐点名称
@property (nonatomic, strong) NSString *locationAddress; //推荐点详细地址
@property (nonatomic, strong) NSString *gdLongitude;
@property (nonatomic, strong) NSString *gdLatitude;
@property (nonatomic, strong) NSString *address; //详细地址
@property (nonatomic, strong) NSString *cityCode; //城市编码
@property (nonatomic, strong) NSString *provinceName; //省
@property (nonatomic, strong) NSString *cityName; //市
@property (nonatomic, strong) NSString *countyName; //区县
@property (nonatomic, strong) NSString *adcode; //区域编码
@property (nonatomic, strong) NSString *namePosition; //0 右； 1 左；  默认0
@property (nonatomic, strong) NSString *walkDistance; //步行距离
@property (nonatomic, strong) NSString *isSelected; //是否默认选中0 否； 1 是；
@property (nonatomic, strong) NSString *locationId;

@end

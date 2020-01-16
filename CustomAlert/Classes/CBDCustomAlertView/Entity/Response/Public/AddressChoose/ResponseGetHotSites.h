//
//  ResponseGetHotSites.h
//  CarBaDa
//
//  Created by zjb on 2019/5/20.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetHotSites : NSObject
@property (nonatomic, strong) NSMutableArray *siteList;//站点列表

@end

@interface siteList : NSObject
@property (nonatomic, strong) NSString *cityName;//城市名称
@property (nonatomic, strong) NSString *cityCode;//城市编码
@property (nonatomic, strong) NSString *siteType;//站点类型，1机场2火车站3汽车站4学校5医院6政府7景点8商场9小区10码头11饭店12银行13公交站14停车场15酒店16加油站17超市18其他
@property (nonatomic, strong) NSString *siteCode;//站点编码
@property (nonatomic, strong) NSString *siteName;//站点名称
@property (nonatomic, strong) NSString *address;//详细地址
@property (nonatomic, strong) NSString *siteGdLongitude;//站点经度
@property (nonatomic, strong) NSString *siteGdLatitude;//站点纬度

@end

NS_ASSUME_NONNULL_END

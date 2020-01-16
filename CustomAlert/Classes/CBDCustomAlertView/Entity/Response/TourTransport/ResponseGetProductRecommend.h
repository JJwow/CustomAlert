//
//  ResponseGetProductRecommend.h
//  CarBaDa
//
//  Created by zjb on 16/5/4.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetProductRecommend : NSObject
@property (nonatomic,strong) NSString *productId;
@property (nonatomic,strong) NSString *projectType;
@property (nonatomic,strong) NSString *picturePath;
@property (nonatomic,strong) NSString *startCity;
@property (nonatomic,strong) NSString *endCity;
@property (nonatomic,strong) NSString *productName;
@property (nonatomic,strong) NSString *productManual;
@property (nonatomic,strong) NSString *price;
@property (nonatomic,strong) NSString *remark;
@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic,strong) NSString *isHaveTickets;//是否有票，判断是否显示推荐 0 不显示 1 显示
@property (nonatomic,strong) NSString *airportCode;
@property (nonatomic,strong) NSString *serviceType;
@property (nonatomic,strong) NSString *airportCity;
@property (nonatomic,strong) NSString *startPlace;//资源出发地
@property (nonatomic,strong) NSString *endPlace;//资源到达地
@property (nonatomic,strong) NSString *discountTap;//优惠文案
@property (nonatomic,strong) NSString *orgPrice;//原价（不带起字）
@property (nonatomic,strong) NSString *queryOnly;//只查询高铁动车开关
@property (nonatomic,strong) NSString *aliasName;//标题下部展示别名

@property (nonatomic, strong) NSString *productRemark;//产品特性,【470版本及以上使用】，例如：上门接送，免中转
@property (nonatomic, strong) NSString *redpacketCode;//红包批次code
@property (nonatomic, strong) NSString *redpacketAmount;//红包金额

@property (nonatomic, strong) NSString *startCityCode;//出发城市主机场三字码
@property (nonatomic, strong) NSString *endCityCode;//到达城市主机场三字码

@end

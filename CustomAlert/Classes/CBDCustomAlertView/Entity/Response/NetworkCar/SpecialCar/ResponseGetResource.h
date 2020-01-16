//
//  ResponseGetResource.h
//  CarBaDa
//
//  Created by mini on 2019/2/26.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetHotelDetail.h"

@interface ResponseGetResource : NSObject

@property (nonatomic, strong) NSMutableArray *serviceList;
@property (nonatomic, strong) NSMutableArray *brandServiceList; //滴滴
@property (nonatomic, strong) NSMutableArray *singleServiceList; //出租车
@property (nonatomic, strong) NSMutableArray *carpoolList; //拼车
@property (nonatomic, strong) NSString *queryKey;
@end


@interface serviceList : NSObject

@property (nonatomic, strong) NSString *carDesp;
@property (nonatomic, strong) NSString *carImg;
@property (nonatomic, strong) NSString *carSeats;
@property (nonatomic, strong) NSString *carTypeName;
@property (nonatomic, strong) NSString *ctid;
@property (nonatomic, strong) NSString *luggageNum;
@property (nonatomic, strong) NSString *peoples;
@property (nonatomic, strong) NSMutableArray *priceList;
@property (nonatomic, strong) NSString *ctCode;

@end

@interface brandServiceList : NSObject

@property (nonatomic, strong) NSString *brandType; // 0 巴管；1同程 2 曹操 3 神州 4 首汽 5 滴滴 6 嘀嗒
@property (nonatomic, strong) NSString *brandId; //品牌id
@property (nonatomic, strong) NSString *brandImg; //品牌图片
@property (nonatomic, strong) NSString *brandName; //品牌名称
@property (nonatomic, strong) NSMutableArray *priceList;


@property (nonatomic, strong) NSString *carDesp;
@property (nonatomic, strong) NSString *carImg;
@property (nonatomic, strong) NSString *carSeats;
@property (nonatomic, strong) NSString *carTypeName;
@property (nonatomic, strong) NSString *ctid;
@property (nonatomic, strong) NSString *luggageNum;
@property (nonatomic, strong) NSString *peoples;
@property (nonatomic, strong) NSString *ctCode;

@end


@interface singleServiceList : NSObject

@property (nonatomic, strong) NSString *carDesp;
@property (nonatomic, strong) NSString *carImg;
@property (nonatomic, strong) NSString *carSeats;
@property (nonatomic, strong) NSString *carTypeName;
@property (nonatomic, strong) NSString *ctid;
@property (nonatomic, strong) NSString *luggageNum;
@property (nonatomic, strong) NSString *peoples;
@property (nonatomic, strong) NSMutableArray *priceList;
@property (nonatomic, strong) NSString *ctCode;

@end

@interface carpoolList : NSObject

@property (nonatomic, strong) NSString *brandName; //品牌名称
@property (nonatomic, strong) NSString *carTypeName; //车型名称
@property (nonatomic, strong) NSString *price;  //支付价格
@property (nonatomic, strong) NSString *lineId;  //拼车线路id

@end

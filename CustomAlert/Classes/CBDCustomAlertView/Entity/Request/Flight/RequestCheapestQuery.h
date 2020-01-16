//
//  RequestCheapestQuery.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/10/24.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCheapestQuery : TCTRequestObject

@property (nonatomic, strong) NSString *depCityId; //出发城市
@property (nonatomic, strong) NSString *arrCityId; //到达城市
@property (nonatomic, strong) NSString *beginDate; //航班日期开始(格式YYYY-MM-dd)
@property (nonatomic, strong) NSString *endDate; //航班日期结束(格式YYYY-MM-dd)

+ (void)requestCheapestWithDepCityId:(NSString *)depCityId arrCityId:(NSString *)arrCityId beginDate:(NSDate *)beginDate resultBlock:(void (^) (NSMutableDictionary *dicDateSource,NSMutableDictionary *lowPriceDic))lowPriceBlock;

@end

NS_ASSUME_NONNULL_END

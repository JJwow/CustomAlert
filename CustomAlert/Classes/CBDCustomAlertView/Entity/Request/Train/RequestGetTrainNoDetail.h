//
//  RequestGetTrainNoDetail.h
//  CarBaDa
//
//  Created by 丁健 on 2019/2/21.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetTrainNoDetail : TCTRequestObject

@property (nonatomic, copy) NSString *fromStation;
@property (nonatomic, copy) NSString *toStation;
@property (nonatomic, copy) NSString *trainDate;
@property (nonatomic, copy) NSString *trainNo;
@property (nonatomic, copy) NSString *bookingType;//1、普通票，2、送票，3、学生票
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, copy) NSString *selectSeatType;


@end

NS_ASSUME_NONNULL_END

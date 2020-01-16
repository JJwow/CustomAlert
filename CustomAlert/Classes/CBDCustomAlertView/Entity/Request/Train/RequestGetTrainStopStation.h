//
//  RequestGetTrainStopStation.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/25.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetTrainStopStation : TCTRequestObject

@property (nonatomic,copy) NSString *fromStation;//发车站
@property (nonatomic,copy) NSString *toStation;//到达站
@property (nonatomic,copy) NSString *trainNo;//车次号
@property (nonatomic,copy) NSString *trainDate;//发车日期	2017-09-04	~310
@end


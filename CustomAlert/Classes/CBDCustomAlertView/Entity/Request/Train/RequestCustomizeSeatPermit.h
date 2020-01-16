//
//  RequestCustomizeSeatPermit.h
//  CarBaDa
//
//  Created by 丁健 on 2017/6/9.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCustomizeSeatPermit : TCTRequestObject
@property (nonatomic, copy) NSString *fromStation;//出发站
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, copy) NSString *seatCode;//坐席代码
@property (nonatomic, copy) NSString *toStation;//到达站
@property (nonatomic, copy) NSString *trainDate;//乘车日期
@property (nonatomic, copy) NSString *trainNo;//车次号
@end

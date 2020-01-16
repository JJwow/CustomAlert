//
//  RequestJudgeAndTransfer.h
//  CarBaDa
//
//  Created by likaikun on 2016/12/12.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestJudgeAndTransfer : TCTRequestObject

@property (nonatomic, copy)NSString *arrStation;
@property (nonatomic, copy)NSString *dptStation;
@property (nonatomic, copy)NSString *coachNo;
@property (nonatomic, copy)NSString *dptTime;

@end

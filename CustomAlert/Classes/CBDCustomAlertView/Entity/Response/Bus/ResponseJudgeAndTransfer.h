//
//  ResponseJudgeAndTransfer.h
//  CarBaDa
//
//  Created by likaikun on 2016/12/12.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseJudgeAndTransfer : TCTResponseObject

@property (nonatomic, strong) NSString *isConsistent;
@property (nonatomic, strong) NSString *isSuccess;
@property (nonatomic,strong) NSString *lineId;



@end
